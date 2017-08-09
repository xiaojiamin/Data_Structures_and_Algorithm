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
int ListDelete(SqList *&L,int i,ElemType &e);	//9.删除元素，将L中第i个元素删除，用e返回其值，L长度减少1
void delnode1(SqList *&L,ElemType x);
//10.删除线性表中所有等于x的元素
void delnode2(SqList *&L,ElemType x);
//11.删除线性表中所有等于x的元素
void move1(SqList *&L);
//12.以第一个元素为基准将小于等于它的元素放到它前面，大于它的元素放到它的后面 
void move2(SqList *&L);
//13.以第一个元素为基准将小于等于它的元素放到它前面，大于它的元素放到它的后面 
int main()
{
	SqList *L;
	ElemType e;
	printf("(1)初始化顺序表L\n");
	InitList(L);
	printf("(2)依次采用尾插法插入a,b,c,d,e元素\n");
	ListInsert(L,1,'c');
	ListInsert(L,2,'d');
	ListInsert(L,3,'e');
	ListInsert(L,4,'f');
	ListInsert(L,5,'a');
	ListInsert(L,6,'b');
	ListInsert(L,7,'c');
	ListInsert(L,8,'d');
	ListInsert(L,9,'e');
	printf("(3)输出顺序表L:");
	DispList(L);
	move2(L);
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
	printf("(12)删除顺序表L中的所有f");
	delnode1(L,'f');
	printf("(13)输出顺序表L:");
	DispList(L);
	printf("(14)删除顺序表L中的所有a");
	delnode2(L,'a');
	printf("(15)输出顺序表L:");
	DispList(L);
	printf("(16)释放顺序表L\n");
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
	if(ListEmpty(L))		//如果顺序表长度为0即为空表ListEmpty()的返回值就是1
	return;
	for(i=0;i<L->length;i++)
		printf("%c",L->elem[i]);		//顺序表实质还是用数组存储数据，这里还是按照数组下标进行操作
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
int ListDelete(SqList *&L,int i,ElemType &e)//删除元素，将L中第i个元素删除，用e返回其值，L长度减少1
{
	int j;
	if(i<1||i>L->length)
		return 0;
	i--;	//将位序i转化为数组下标
	e=L->elem[i];
	for(j=i;j<L->length-1;j++)
		L->elem[j]=L->elem[j+1];
	L->length--;
	return 1;
}

void delnode1(SqList *&L,ElemType x)
{
	int k = 0,i;				//k用于记录不为x的元素个数
	for(i = 0;i < L->length;i++){		//从数组下标0开始扫描顺序表
		if(L->elem[i] != x){		//若当前元素不等于x，将其插入L中	
			L->elem[k] = L->elem[i];
			k++;				//不等于x的元素数目+1
		}
	}
	L->length = k;			//顺序表长度等于k
}
void delnode2(SqList *&L,ElemType x)
{
	int k = 0,i = 0;				//k用于记录等于x的元素个数
	while(i < L->length){
		if(L->elem[i] == x){
			k++;
		}
		else{
			L->elem[i - k] = L->elem[i];	//将不为x的元素前移k个位置
		}
		i++;
		
	}
	L->length -= k;			//顺序表长度等于k
}
void move1(SqList *&L)
{
	int i = 0,j = L->length - 1;
	ElemType tmp;	//tmp作为临时变量用于i,j交换的中间变量
	ElemType pivot = L->elem[0];	//以elem[0]为基准进行比较
	while(i < j){
		while(i < j && L->elem[j] > pivot){	
			j--;	//从后向前扫描，找到一个<=pivot的元素，暂停扫描
		}
		while(i < j && L->elem[i] <= pivot){
			i++;	//从前向后扫描，找到一个>pivot的元素，暂停扫描
		}
		if(i < j){
			tmp = L->elem[i];
			L->elem[i] = L->elem[j];
			L->elem[j] = tmp;
		}	//交换L->elem[i]和L->elem[j]
	}
	//while循环执行到i=j为止
	//执行到这个地方就已经是把大于基准的数都放到了后半边数组
	//小于基准的数都放到了前半边数组里了
	tmp = L->elem[0];
	L->elem[0] = L->elem[j];
	L->elem[j] = tmp;
	//交换L->elem[0]和L->elem[j]
	//此时i = j i和j指向同一个元素
}
void move2(SqList *&L)
{
	int i = 0,j = L->length - 1;
	ElemType pivot = L->elem[0];	//把elem[0]作为基准进行放入到pivot中去
	while(i < j){
	//while循环执行到i=j为止
		while(i < j && L->elem[j] > pivot){	
			j--;	//从后向前扫描，找到一个<=pivot的元素，暂停扫描
			L->elem[i] = L->elem[j];	
			//把这个小于等于基准的元素前移到第i个位置
		}
		while(i < j && L->elem[i] <= pivot){
			i++;	//从前向后扫描，找到一个>pivot的元素，暂停扫描
			L->elem[j] = L->elem[i];
			//把这个大于基准的元素后移到第j个位置
		}
	}
	L->elem[j] = pivot;
}
