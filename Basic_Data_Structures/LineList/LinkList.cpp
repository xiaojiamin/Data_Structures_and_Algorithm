#include<stdio.h>
#include<malloc.h>

typedef char ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode *next;
}LinkList;

void InitList(LinkList *&L);
void DestroyList(LinkList *&L);
bool ListEmpty(LinkList *L);
int ListLength(LinkList *L);
void DispList(LinkList *L);
bool GetElem(LinkList *L,int i,ElemType &e);
int LocateElem(LinkList *L,ElemType e);
bool ListInsert(LinkList *&L,int i,ElemType e);
bool ListDelete(LinkList *&L,int i,ElemType &e);
int main()
{
	LinkList *L;
	ElemType e;
	printf("1.��ʼ��������L\n");
	InitList(L);
	printf("2.�Դ���β�巨����Ԫ��a,b,c,d,e\n");
	ListInsert(L,1,'a');
	ListInsert(L,2,'b');
	ListInsert(L,3,'c');
	ListInsert(L,4,'d');
	ListInsert(L,5,'e');
	printf("3.���������L:");
	DispList(L);
	printf("4.��������Ϊ%d\n",ListLength(L));
	printf("5.������LΪ%s\n",ListEmpty(L)?"��":"�ǿ�");
	GetElem(L,3,e);
	printf("6.���������Ԫ��Ϊ%c\n",e);
	printf("7.Ԫ��c��λ����%d\n",LocateElem(L,'c'));
	printf("8.ɾ��������ĸ�Ԫ��\n");
	ListDelete(L,4,e);
	printf("9.���������L:");
	DispList(L);
	printf("10.���ٵ�����L");
	DestroyList(L);
	
	return 0;
} 

void InitList(LinkList *&L)							//make a empty linklist which only have one head node
{
	L = (LinkList *)malloc(sizeof(LinkList));		//make the head node
	L->next = NULL;
}

void DestroyList(LinkList *&L)					//destory the linklist using free node one by one
{
	LinkList *pre = L,*p = L->next;				//L&pre point the head node and p point the first node
	while(p != NULL){
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
}

bool ListEmpty(LinkList *L)						//!!!!is it judge the linklist is empty or make it empty????
{
	return(L->next == NULL);
}

int ListLength(LinkList *L)						//return the length of linklist
{
	int n = 0;
	LinkList *p = L;
	while(p->next != NULL){
		n++;
		p = p->next;
	}
	return n;
}

void DispList(LinkList *L)						//display the linklist
{
	LinkList *p = L->next;
	while(p != NULL){
		printf("%c ",p->data);
		p = p->next;
	}
	printf("\n");
}

bool GetElem(LinkList *L,int i,ElemType &e)			//get the number i element and give it to e
{
	int j = 0;
	LinkList *p = L;
	while(j < i && p != NULL){
		j++;
		p = p->next;
	}
	if(p == NULL)
		return false;
	else{
		e = p->data;
		return true;
	}
}

int LocateElem(LinkList *L,ElemType e)				//find a element which equal to e and return it's number
{
	int i = 1;
	LinkList *p = L->next;
	while(p != NULL && p->data != e){
		p = p->next;
		i++;
	}
	if(p == NULL)
		return 0;
	else
		return i;
}

bool ListInsert(LinkList *&L,int i,ElemType e)			//insert e into the linklist as the number i
{
	int j = 0;
	LinkList *p = L,*s;
	while(j < i - 1 && p != NULL){
		j++;
		p = p->next;
	}
	if(p == NULL)
		return false;
	else{
		s = (LinkList *)malloc(sizeof(LinkList));
		s->data = e;
		s->next = p->next;
		p->next = s;
		return true;
	}
}

bool ListDelete(LinkList *&L,int i,ElemType &e)				//delete the element number i and put it into e
{
	int j = 0;
	LinkList *p = L,*q;
	while(j < i - 1 && p != NULL){
		j++;
		p = p->next;
	}
	if(p == NULL)
		return false;
	else{
		q = p->next;
		if(q == NULL)
			return false;
		e = q->data;
		p->next = q->next;
		free(q);
		return true;
	}
}
