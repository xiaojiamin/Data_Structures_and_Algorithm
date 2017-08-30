#include<stdio.h>
#include<malloc.h>

#define MaxSize 100
typedef char ElemType;
typedef struct
{
    ElemType data[MaxSize];
    int top;
}SqStack;

void InitStack(SqStack *&s);
//初始化顺序存储栈
void DestroyStack(SqStack *&s);
//销毁顺序栈
bool StackEmpty(SqStack *s);
//判断栈是否为空，空栈时返回true
int StackLength(SqStack *s);
//求栈的长度
bool Push(SqStack *&s,ElemType e);
//进栈操作
bool Pop(SqStack *&s,ElemType &e);
//出栈操作
bool GetTop(SqStack *&s,ElemType &e);
//取栈顶元素
void DispStack(SqStack *s);
//输出栈中的所有元素
bool symmetry(ElemType str[]);
//判断一个字符串是否对称

int main()
{
    ElemType e;
    SqStack *s;
    ElemType st1[7] = "abccba";
    ElemType st2[7] = {'a','b','c','a','b','c','\0'};
    //这样初始化字符串1的时候其实是存放了{'a','b','c','c','b','a','\0'}这七个元素的
    //st1和st2的写法等价
    printf("1.初始化栈s\n");
    InitStack(s);
    printf("2.栈s为%s\n",(StackEmpty(s)?"空":"非空"));
    printf("3.依次进栈元素a,b,c,d,e,f\n");
    Push(s,'a');
    Push(s,'b');
    Push(s,'c');
    Push(s,'d');
    Push(s,'e');
    Push(s,'f');
    printf("4.栈s为%s\n",(StackEmpty(s)?"空":"非空"));
    printf("5.栈s的长度为%d\n",StackLength(s));
    printf("6.从栈顶到栈底依次打印输出栈s:\n");
    DispStack(s);
    GetTop(s,e);
    printf("7.栈顶元素为:%c\n",e);
    printf("8.依次出栈序列:\n");
    while(!StackEmpty(s)){
        Pop(s,e);
        printf("%c出栈\n",e);
    }
    printf("9.栈s为%s\n",(StackEmpty(s)?"空":"非空"));
    printf("10.销毁栈\n");
    printf("11.字符串1“abccba”,%s\n",(symmetry(st1)?"对称":"不对称"));
    printf("12.字符串2“abcabc”,%s\n",(symmetry(st2)?"对称":"不对称"));
    return 0;
}


void InitStack(SqStack *&s)
{
    s = (SqStack *)malloc(sizeof(SqStack));
    s->top = -1;
}

void DestroyStack(SqStack *&s)
{
    free(s);    //直接释放栈指针
}

bool StackEmpty(SqStack *s)
{
    return(s->top == -1);    //空栈时栈顶指针top为-1
}

int StackLength(SqStack *s)
{
        return(s->top + 1);
}

bool Push(SqStack *&s,ElemType e)
{
    if(s->top == MaxSize - 1){  //判断满栈的情况，上限溢出返回false
        return false;
    }
    s->top++;
    s->data[s->top] = e;
    return true;
}

bool Pop(SqStack *&s,ElemType &e)
{
    if(s->top == -1){   //判断空栈情况
        return false;
    }
    e = s->data[s->top];
    s->top--;
    return true;

}

bool GetTop(SqStack *&s,ElemType &e)
{
    if(s->top == -1){   //判断空栈情况
        return false;
    }
    e = s->data[s->top];
    return true;
}

void DispStack(SqStack *s)
{
    for(int i = s->top;i >= 0;i--){
        printf("%c ",s->data[i]);
    }
    printf("\n");
}

bool symmetry(ElemType str[])
{
    int i;
    ElemType e;
    SqStack *st;
    InitStack(st);

    for(i = 0;str[i] != '\0';i++){
        Push(st,str[i]);
    }
    for(i = 0;str[i] != '\0';i++){
        Pop(st,e);
        if(str[i] != e){
            DestroyStack(st);
            return false;
        }
    }
    DestroyStack(st);
    return true;
}
//判断一个字符串是不是一个对称串
