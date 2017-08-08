#include<stdio.h>
#include<malloc.h>

#define MAXSIZE 100		//定义顺序表的最大长度为100

typedef	char ElemType;	//定义顺序表元素类型为char
typedef struct{
	ElemType elem[MAXSIZE];
	int length;
}SqList;				//定义顺序表结构体

//基本操作函数声明
void InitList(SqList *&L);	//1.初始化线性表
void Destroy(SqList *L);	//2.销毁线性表
int ListEmpty(SqList *L);	//3.判断线性表是否为空
int ListLength(SqList *L);	//4.求表长，返回L中元素个数
void DispList(SqList *L);	//5.输出表，若表为非空，输出L中所有元素的值
int GetElem(SqList *L,int i,ElemType &e);	//6.取表中元素，用e返回表中第i个元素的值
int LocateElem(SqList *L,ElemType e);	//7.定位表中元素，返回表中第一个与e相等的元素位序
int ListInsert(SqList *&L,int i,ElemType e);	//8.插入元素，在L的第i个位置插入e的值，L长度增加1
int ListDelete(SqList *L,int i,ElemType &e);	//9.删除元素，将L中第i个元素删除，用e返回其值，L长度减少1

int main()
{
	SqList *L;
	ElemType e;
	printf("(1)初始化顺序表L\n");
	InitList(L);
	printf("(2)依次采用尾插法插入a,b,c,d,e元素\n");
	ListInsert(L,1,'a');
	ListInsert(L,2,'b');
	ListInsert(L,3,'c');
	ListInsert(L,4,'d');
	ListInsert(L,5,'e');
	printf("(3)输出顺序表L:");
	DispList(L);
	printf("(4)顺序表L长度=%d\n",ListLength(L));
	printf("(5)顺序表L为%s\n",(ListEmpty(L)?"空":"非空"));
	GetElem(L,3,e);
	printf("(6)顺序表L的第3个元素=%c\n",e);
	printf("(7)元素a的位置=%d\n",LocateElem(L,'a'));
	printf("(8)在第4个元素位置上插入f元素\n");
	ListInsert(L,4,'f');
	printf("(9)输出顺序表L:");
	DispList(L);
	printf("(10)删除L的第3个元素\n");
    	ListDelete(L,3,e);
	printf("(11)输出顺序表L:");
	DispList(L);
	printf("(12)释放顺序表L\n");
	Destroy(L);
	return 0;
}


void InitList(SqList *&L)	//初始化线性表
{
	L = (SqList *)malloc(sizeof(SqList));
	L->length=0;
}
void Destroy(SqList *L)	//销毁线性表
{
	free(L);
}
int ListEmpty(SqList *L)	//判断线性表是否为空
{
	return(L->length==0);		//如果顺序表长度为0 则返回1 如果不为空 则返回0
}
int ListLength(SqList *L)	//求表长，返回L中元素个数
{
	return(L->length);			//what the fuck!!!
}
void DispList(SqList *L)	//输出表，若表为非空，输出L中所有元素的值
{
	int i;
	if(ListEmpty(L))		//！！！讲真这句是什么鬼？
	return;
	for(i=0;i<L->length;i++)
		printf("%c",L->elem[i]);
	printf("\n");
}
int GetElem(SqList *L,int i,ElemType &e)	//取表中元素，用e返回表中第i个元素的值
{
	if(i<1||i>L->length)
		return 0;
	e=L->elem[i-1];
	return 1;
}
int LocateElem(SqList *L,ElemType e)	//定位表中元素，返回表中第一个与e相等的元素位序
{
	int i=0;
	while(i<L->length&&L->elem[i]!=e)
		i++;
	if(i>=L->length)
		return 0;
	else
		return i+1;
}
int ListInsert(SqList *&L,int i,ElemType e)	//插入元素，在L的第i个位置插入e的值，L长度增加1
{
	int j;
	if(i<1||i>L->length+1)
		return 0;
	i--;	//将位序i转化为数组下标
	for(j=L->length;j>i;j--)
		L->elem[j]=L->elem[j-1];
	L->elem[i]=e;
	L->length++;
	return 1;

}
int ListDelete(SqList *L,int i,ElemType &e)//删除元素，将L中第i个元素删除，用e返回其值，L长度减少1
{
	int j;
	if(j<1||j>L->length)
		return 0;
	i--;	//将位序i转化为数组下标
	for(j=L->length;j>i;j--)
		L->elem[j]=L->elem[j-1];
	e=L->elem[i];
	L->length--;
	return 1;
}

