#include <stdio.h>
#include <malloc.h>
#define MaxSize 5


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


 void InitQueue(LiQueue *&q);
 /*初始化链式队列*/
 void ClearQueue(LiQueue *&q);
 /*销毁链式队列*/
 int QueueLength(LiQueue *q);
 /*链式队列长度*/
 int QueueEmpty(LiQueue *q);
 /*判断链式队列是否为空*/
 void enQueue(LiQueue *&q,ElemType e);
 /*入链式队列*/
 int deQueue(LiQueue *&q,ElemType &e);
 /*出链式队列*/


int main()
{
	ElemType e;
	LiQueue *q;
	printf("(1)初始化链队q\n");
	InitQueue(q);
	printf("(2)依次进链队元素a,b,c\n");
	enQueue(q,'a');
	enQueue(q,'b');
	enQueue(q,'c');
	printf("(3)链队为%s\n",(QueueEmpty(q)?"空":"非空"));
	if (deQueue(q,e)==0)
		printf("队空,不能出队\n");
	else
		printf("(4)出队一个元素%c\n",e);
	printf("(5)链队q的元素个数:%d\n",QueueLength(q));
	printf("(6)依次进链队元素d,e,f\n");
	enQueue(q,'d');
	enQueue(q,'e');
	enQueue(q,'f');
	printf("(7)链队q的元素个数:%d\n",QueueLength(q));
	printf("(8)出链队序列:");
	while (!QueueEmpty(q))
	{	deQueue(q,e);
		printf("%c ",e);
	}
	printf("\n");
	printf("(9)释放链队\n");
	ClearQueue(q);
	return 0;
}


void InitQueue(LiQueue *&q)                        /*初始化链式队列 操作结果：构造一个空队列Q*/
{
	q=(LiQueue *)malloc(sizeof(LiQueue));
	q->front=q->rear=NULL;
}

void ClearQueue(LiQueue *&q)                       /*释放链式队列 操作结果：释放*/
{                                                 /*  链式队列结点空间*/
	QNode *p=q->front,*r;
	if (p!=NULL)		/*释放数据结点占用空间*/
	{
		r=p->next;
		while (r!=NULL)
		{
			free(p);
			p=r;r=p->next;
		}
	}
	free(q);			 /*释放头结点占用空间*/
}

int QueueLength(LiQueue *q)                        /*求链式队列长度  操作结果：返*/
{                                                /* 回链式队列中结点个数*/
	int n=0;
	QNode *p=q->front;
	while (p!=NULL)
	{
		n++;
		p=p->next;
	}
	return(n);
}

int QueueEmpty(LiQueue *q)                 /*判断队列是否为空*/
{                                          /* 列置链式队列*/
	if (q->rear==NULL)
		return 1;
	else
		return 0;
}

void enQueue(LiQueue *&q,ElemType e)        /*入队列  操作结果：插入元素e为Q的*/
{                                         /* 新的队尾元素*/
	QNode *s;
    s=(QNode *)malloc(sizeof(QNode));
	s->data=e;
	s->next=NULL;
    if (q->rear==NULL)		/*若链队为空,则新结点是队首结点又是队尾结点*/
		q->front=q->rear=s;
	else
	{
		q->rear->next=s;  /*将*s结点链到队尾,rear指向它*/
		q->rear=s;
	}
}

int deQueue(LiQueue *&q,ElemType &e)        /*出队列  操作结果：若队列不空，删*/
{                                         /*除Q的队列元素，用e返回其值，并返*/
	QNode *t;                              /* 回1，否则返回0*/
	if (q->rear==NULL)		/*队列为空*/
		return 0;
	if (q->front==q->rear)  /*队列中只有一个结点时*/
	{
		t=q->front;
		q->front=q->rear=NULL;
	}
	else					/*队列中有多个结点时*/
	{
		t=q->front;
		q->front=q->front->next;
	}
	e=t->data;
    free(t);
	return 1;
}
