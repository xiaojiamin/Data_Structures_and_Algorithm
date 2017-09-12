#include <stdio.h>
#include <malloc.h>
#define MaxSize 5
//存在假溢出现象

typedef char ElemType;
typedef struct
{
	ElemType data[MaxSize];
	int front;
	int rear;
}SqQueue;

void InitQueue(SqQueue *&q);
/*初始化顺序队列*/
void DestroyQueue(SqQueue *&q);
/*销毁顺序队列*/
int QueueLength(SqQueue *q);
/*顺序队列长度*/
bool QueueEmpty(SqQueue *q);
/*判断顺序队列是否为空*/
bool enQueue(SqQueue *&q,ElemType e);
/*入队列*/
bool deQueue(SqQueue *&q,ElemType &e);
/*出队列*/


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
    //队满，上溢出
        return false;
    q->rear++;
    q->data[q->rear] = e;
    return true;

}

bool deQueue(SqQueue *&q,ElemType &e)
{
    if(q->front == q->rear)
		//队空，下溢出
        return false;
    q->front++;
    e = q->data[q->front];
    return true;
}
