#include<stdio.h>
#include<stdlib.h>  
#include<malloc.h>  
#include<time.h>
#define random(x) (rand()%x)
typedef char ElemType;			//�Զ�������ElemType �����ElemType���ȼ���char 
typedef struct LNode{
    ElemType data;
    struct LNode *next;
} LinkList; 			//�Զ�������LinkList �����LinkList���൱��LNode����ṹ��	LinkList p��Ϊ��������ṹ����	LinkList *p��Ϊ����ָ������ṹ�����͵�ָ�� 
void InitLinkList(LinkList *(&L));			//���ݵ���ָ�루ʵ�Σ������õ�ָ�� 
void MakeList(LinkList *(&L), int n);
void PrintList(LinkList *L);
void LenList(LinkList *L);
void GetMid(LinkList *L);

int main()
{	
	int a,m;
	LinkList *T;
	InitLinkList(T);					//T��һ��ָ���ͱ���
	printf("����������ѡ�������\n");
	printf("1.�������һ������\n");
	printf("2.��ʾ�������\n");
	printf("3.����������\n");
	printf("4.��ʾ�����м�ڵ��ֵ\n"); 
	for(;;)
	{
		scanf("%d",&a); 
		if(a==1)
		{
			printf("��������������\n");
			scanf("%d",&m); 
			MakeList(T,m);
		}
		if(a==2)
			PrintList(T);
		if(a==3)
			LenList(T);
		if(a==4)
			GetMid(T);
	}
	return 0;
} 

void InitLinkList(LinkList* (&L))				//*&L���ʻ���һ��ָ�� ����&L=T��ָ�루��L��ָ��T�ı����� ��ֻ��Ϊ�˽���������ò���ȫ����������� 
{												//����ָ���� ���ñ���L L����T
    L = (LinkList *)malloc(sizeof(LinkList));			//�����L�͵ȼ���ȫ�ֱ���T ����ͷָ�룩 
    L->next = NULL;
}

void MakeList(LinkList *(&L), int n)
{
	srand((int)time(0));
	int i;
	LinkList *s, *r = L;
	for (i = 0; i < n; i++)
	{
		s = (LinkList *)malloc(sizeof(LinkList));
		s->data = random(100);
		r->next = s;
		r = s;
	}
	r->next = NULL;
    
} 
void PrintList(LinkList *L)
{
    LinkList *p = L->next;
    while(p != NULL)
    {
        if(p->next != NULL)
        {
            printf("%d->", p->data);
        }
        else
        {
            printf("%d\n", p->data);
        }
        p = p->next;
    }
}
void LenList(LinkList *L)
{
	int i=0; 
	LinkList *p = L->next;
    while(p != NULL)
    {
        i++;
        p = p->next;
    }
    printf("length is %d\n",i);
} 
void GetMid(LinkList *L)
{  
	LinkList *p = L->next;		//���ɵ���һ����ͷ�ڵ������L��ʾͷ�ڵ㣬L->next�ű�ʾ��һ���ڵ�
	LinkList *q = L->next;
    while(q->next != NULL)
    {
		if(q->next->next != NULL){
			q = q->next->next;
			p = p->next;
		}
		else{
			q = q->next;
		}
        
    }
    printf("mid is %d\n",p->data);
} 

