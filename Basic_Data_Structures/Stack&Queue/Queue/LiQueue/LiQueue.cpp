#include<stdio.h>
#include<malloc.h>

typedef char ElemType;
typedef struct qnode
{
	ElemType data;
	struct qnode *next;
} QNode;
typedef struct
{
	QNode *front;
	QNode *rear;
} LiQueue;

void InitQueue(LiQueue *&q)
{
    q = (LiQueue *)malloc(sizeof(LiQueue));
    q->front = q->rear = NULL;
}

void DestroyQueue(LiQueue *&q)
{
    QNode *p = q->front,*r;
    if(p != NULL){
        r = p->next;
            while(r != NULL){
                free(p);
                p = r;
                r = p->next;
            }
    }
    free(p);
    free(q);
}

bool QueueEmpty(LiQueue *q)
{
    return(q->rear == NULL);
}

bool enQueue(LiQueue *&q,ElemType e)
{
    QNode *p;
    p = (QNode *)malloc(sizeof(QNode));
    p->data = e;
    p->next = NULL;
    if(q->rear == NULL)
        q->front = q->rear = p;
    else{
        q->rear->next = p;
        q->rear = p;
    }
}

bool deQueue(LiQueue *&q,ElemType &e)
{
    QNode *t;
    if(q->rear == NULL)
        return false;
    t = q->front;
    if(q->front == q->rear)
        q->front = q->rear = NULL;
    else
        q->front = q->front->next;
    e = t->data;
    free(t);
    return true;
}


