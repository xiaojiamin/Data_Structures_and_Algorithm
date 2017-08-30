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
 /*��ʼ����ʽ����*/
 void ClearQueue(LiQueue *&q);
 /*������ʽ����*/
 int QueueLength(LiQueue *q);
 /*��ʽ���г���*/
 int QueueEmpty(LiQueue *q);
 /*�ж���ʽ�����Ƿ�Ϊ��*/
 void enQueue(LiQueue *&q,ElemType e);
 /*����ʽ����*/
 int deQueue(LiQueue *&q,ElemType &e);
 /*����ʽ����*/


int main()
{
	ElemType e;
	LiQueue *q;
	printf("(1)��ʼ������q\n");
	InitQueue(q);
	printf("(2)���ν�����Ԫ��a,b,c\n");
	enQueue(q,'a');
	enQueue(q,'b');
	enQueue(q,'c');
	printf("(3)����Ϊ%s\n",(QueueEmpty(q)?"��":"�ǿ�"));
	if (deQueue(q,e)==0)
		printf("�ӿ�,���ܳ���\n");
	else
		printf("(4)����һ��Ԫ��%c\n",e);
	printf("(5)����q��Ԫ�ظ���:%d\n",QueueLength(q));
	printf("(6)���ν�����Ԫ��d,e,f\n");
	enQueue(q,'d');
	enQueue(q,'e');
	enQueue(q,'f');
	printf("(7)����q��Ԫ�ظ���:%d\n",QueueLength(q));
	printf("(8)����������:");
	while (!QueueEmpty(q))
	{	deQueue(q,e);
		printf("%c ",e);
	}
	printf("\n");
	printf("(9)�ͷ�����\n");
	ClearQueue(q);
	return 0;
}


void InitQueue(LiQueue *&q)                        /*��ʼ����ʽ���� �������������һ���ն���Q*/
{
	q=(LiQueue *)malloc(sizeof(LiQueue));
	q->front=q->rear=NULL;
}

void ClearQueue(LiQueue *&q)                       /*�ͷ���ʽ���� ����������ͷ�*/
{                                                 /*  ��ʽ���н��ռ�*/
	QNode *p=q->front,*r;
	if (p!=NULL)		/*�ͷ����ݽ��ռ�ÿռ�*/
	{
		r=p->next;
		while (r!=NULL)
		{
			free(p);
			p=r;r=p->next;
		}
	}
	free(q);			 /*�ͷ�ͷ���ռ�ÿռ�*/
}

int QueueLength(LiQueue *q)                        /*����ʽ���г���  �����������*/
{                                                /* ����ʽ�����н�����*/
	int n=0;
	QNode *p=q->front;
	while (p!=NULL)
	{
		n++;
		p=p->next;
	}
	return(n);
}

int QueueEmpty(LiQueue *q)                 /*�ж϶����Ƿ�Ϊ��*/
{                                          /* ������ʽ����*/
	if (q->rear==NULL)
		return 1;
	else
		return 0;
}

void enQueue(LiQueue *&q,ElemType e)        /*�����  �������������Ԫ��eΪQ��*/
{                                         /* �µĶ�βԪ��*/
	QNode *s;
    s=(QNode *)malloc(sizeof(QNode));
	s->data=e;
	s->next=NULL;
    if (q->rear==NULL)		/*������Ϊ��,���½���Ƕ��׽�����Ƕ�β���*/
		q->front=q->rear=s;
	else
	{
		q->rear->next=s;  /*��*s���������β,rearָ����*/
		q->rear=s;
	}
}

int deQueue(LiQueue *&q,ElemType &e)        /*������  ��������������в��գ�ɾ*/
{                                         /*��Q�Ķ���Ԫ�أ���e������ֵ������*/
	QNode *t;                              /* ��1�����򷵻�0*/
	if (q->rear==NULL)		/*����Ϊ��*/
		return 0;
	if (q->front==q->rear)  /*������ֻ��һ�����ʱ*/
	{
		t=q->front;
		q->front=q->rear=NULL;
	}
	else					/*�������ж�����ʱ*/
	{
		t=q->front;
		q->front=q->front->next;
	}
	e=t->data;
    free(t);
	return 1;
}
