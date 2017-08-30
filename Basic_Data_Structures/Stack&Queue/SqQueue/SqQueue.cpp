#include <stdio.h>
#include <malloc.h>
#define MaxSize 5
//���ڼ��������

typedef char ElemType;
typedef struct
{
	ElemType data[MaxSize];
	int front;
	int rear;
}SqQueue;

void InitQueue(SqQueue *&q);
/*��ʼ��˳�����*/
void DestroyQueue(SqQueue *&q);
/*����˳�����*/
int QueueLength(SqQueue *q);
/*˳����г���*/
bool QueueEmpty(SqQueue *q);
/*�ж�˳������Ƿ�Ϊ��*/
bool enQueue(SqQueue *&q,ElemType e);
/*�����*/
bool deQueue(SqQueue *&q,ElemType &e);
/*������*/


void InitQueue(SqQueue *&q)
{
    q = (SqQueue *)malloc(sizeof(SqQueue));
    q->front1 = q->rear = -1;
}

void DestroyQueue(SqQueue *&q)
{
    free(q);
}


int QueueLength(SqQueue *q)
{

}

bool QueueEmpty(SqQueue *q)
{
    return(q->front == q->rear);
}

bool enQueue(SqQueue *&q,ElemType e)
{
    if(q->rear == MaxSize - 1)
    //�����������
        return false;
    q->rear++;
    q->data[q->rear] = e;
    return true;

}

bool deQueue(SqQueue *&q,ElemType &e)
{
    if(q->front == q->rear)
        return false;
    q->front++;
    e = q->data[q->front];
    return true;
}
