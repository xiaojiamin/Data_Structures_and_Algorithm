#include<stdio.h>

#define MaxSize 5;
typedef ElemType int;
typedef struct
{
    ElemType data[MaxSize];
    int top;
}SqStack;

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
    return true;
}

bool symmetry(ElemType str[]){
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
