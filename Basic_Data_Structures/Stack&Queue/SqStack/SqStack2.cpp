#include<stdio.h>

typedef ElemType int;
typedef struct
{
    ElemType data[MaxSize];
    int top;
    int base;
}SqStack;