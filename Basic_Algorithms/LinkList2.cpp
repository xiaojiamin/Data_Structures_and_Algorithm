#include<stdio.h>
#include<stdlib.h>  
#include<malloc.h>  
#include<time.h>
#define random(x) (rand()%x)
typedef char ElemType;			//自定义类型ElemType 后面的ElemType都等价于char 
typedef struct LNode{
    ElemType data;
    struct LNode *next;
} LinkList; 			//自定义类型LinkList 后面的LinkList都相当于LNode这个结构体	LinkList p意为定义这个结构体型	LinkList *p意为定义指向这个结构体类型的指针 
void InitLinkList(LinkList *(&L));			//传递的是指针（实参）的引用的指针 
void MakeList(LinkList *(&L), int n);
void PrintList(LinkList *L);
void LenList(LinkList *L);
void GetMid(LinkList *L);

int main()
{	
	int a,m;
	LinkList *T;
	InitLinkList(T);					//T是一个指针型变量
	printf("输入数字以选择操作：\n");
	printf("1.随机生成一个链表\n");
	printf("2.显示这个链表\n");
	printf("3.计算链表长度\n");
	printf("4.显示链表中间节点的值\n"); 
	for(;;)
	{
		scanf("%d",&a); 
		if(a==1)
		{
			printf("输入所需链表长度\n");
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

void InitLinkList(LinkList* (&L))				//*&L本质还是一个指针 它是&L=T的指针（即L是指针T的别名） 就只是为了解决函数不好操作全局链表的问题 
{												//定义指针型 引用变量L L就是T
    L = (LinkList *)malloc(sizeof(LinkList));			//这里的L就等价于全局变量T （表头指针） 
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
	LinkList *p = L->next;		//生成的是一个带头节点的链表，L表示头节点，L->next才表示第一个节点
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

