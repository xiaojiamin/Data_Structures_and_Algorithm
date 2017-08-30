//带头节点的链表来完成链栈

include<stdio.h>

typedef char ElemType;
typedef struct linknode
{
    ElemType data;
    struct linknode *next;
}LiStack;
void initStack(LiStack *&s);
void DestroyStack(LiStack *&s);
void StackEmpty(LiStack *s);
void Push(LiStack *&s,ElemType e);
bool Pop(LiStack *&s,ElemType &e);
bool GetTop(LiStack *s,ElemType &e);

int main()
{

    return 0;
}

void initStack(LiStack *&s)
{
    s = (LiStack *)malloc(sizeof(LiStack));
    s->next = NULL;
}

void DestroyStack(LiStack *&s)
{
    LiStack *p = s,*q = s->next;
    while(q != NULL){
        free(p);
        p = q;
        q = p->next;
    }
    free(p);
}

void StackEmpty(LiStack *s)
{
    return(s->next == NULL);
}

void Push(LiStack *&s,ElemType e)
{
    LiStack *p;
    p = (LiStack *)malloc(sizeof(LiStack));
    p->data = e;
    p->next = s->next;
    s->next = p;
    //类似链表的头插法
}

bool Pop(LiStack *&s,ElemType &e)
{
    LiStack *p;
    if(s->next == NULL)
        return false;
    p = s->next;
    e = p->data;
    s->next = p->next;
    free(p);
    return true;
}

bool GetTop(LiStack *s,ElemType &e)
{
    if(s->next == NULL)
        return false;
    e = s->next->data;
    return true;
}

