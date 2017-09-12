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
//��ʼ��˳��洢ջ
void DestroyStack(SqStack *&s);
//����˳��ջ
bool StackEmpty(SqStack *s);
//�ж�ջ�Ƿ�Ϊ�գ���ջʱ����true
int StackLength(SqStack *s);
//��ջ�ĳ���
bool Push(SqStack *&s,ElemType e);
//��ջ����
bool Pop(SqStack *&s,ElemType &e);
//��ջ����
bool GetTop(SqStack *&s,ElemType &e);
//ȡջ��Ԫ��
void DispStack(SqStack *s);
//���ջ�е�����Ԫ��
bool symmetry(ElemType str[]);
//�ж�һ���ַ����Ƿ�Գ�

int main()
{
    ElemType e;
    SqStack *s;
    ElemType st1[7] = "abccba";
    ElemType st2[7] = {'a','b','c','a','b','c','\0'};
    //������ʼ���ַ���1��ʱ����ʵ�Ǵ����{'a','b','c','c','b','a','\0'}���߸�Ԫ�ص�
    //st1��st2��д���ȼ�
    printf("1.��ʼ��ջs\n");
    InitStack(s);
    printf("2.ջsΪ%s\n",(StackEmpty(s)?"��":"�ǿ�"));
    printf("3.���ν�ջԪ��a,b,c,d,e,f\n");
    Push(s,'a');
    Push(s,'b');
    Push(s,'c');
    Push(s,'d');
    Push(s,'e');
    Push(s,'f');
    printf("4.ջsΪ%s\n",(StackEmpty(s)?"��":"�ǿ�"));
    printf("5.ջs�ĳ���Ϊ%d\n",StackLength(s));
    printf("6.��ջ����ջ�����δ�ӡ���ջs:\n");
    DispStack(s);
    GetTop(s,e);
    printf("7.ջ��Ԫ��Ϊ:%c\n",e);
    printf("8.���γ�ջ����:\n");
    while(!StackEmpty(s)){
        Pop(s,e);
        printf("%c��ջ\n",e);
    }
    printf("9.ջsΪ%s\n",(StackEmpty(s)?"��":"�ǿ�"));
    printf("10.����ջ\n");
    printf("11.�ַ���1��abccba��,%s\n",(symmetry(st1)?"�Գ�":"���Գ�"));
    printf("12.�ַ���2��abcabc��,%s\n",(symmetry(st2)?"�Գ�":"���Գ�"));
    return 0;
}


void InitStack(SqStack *&s)
{
    s = (SqStack *)malloc(sizeof(SqStack));
    s->top = -1;
}

void DestroyStack(SqStack *&s)
{
    free(s);    //ֱ���ͷ�ջָ��
}

bool StackEmpty(SqStack *s)
{
    return(s->top == -1);    //��ջʱջ��ָ��topΪ-1
}

int StackLength(SqStack *s)
{
        return(s->top + 1);
}

bool Push(SqStack *&s,ElemType e)
{
    if(s->top == MaxSize - 1){  //�ж���ջ������������������false
        return false;
    }
    s->top++;
    s->data[s->top] = e;
    return true;
}

bool Pop(SqStack *&s,ElemType &e)
{
    if(s->top == -1){   //�жϿ�ջ���
        return false;
    }
    e = s->data[s->top];
    s->top--;
    return true;

}

bool GetTop(SqStack *&s,ElemType &e)
{
    if(s->top == -1){   //�жϿ�ջ���
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
//�ж�һ���ַ����ǲ���һ���Գƴ�
