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
    free(s);    //ֱ���ͷ�ջָ��
}

bool StackEmpty(SqStack *s)
{
    return(s->top == -1);    //��ջʱջ��ָ��topΪ-1
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
//�ж�һ���ַ����ǲ���һ���Գƴ�
