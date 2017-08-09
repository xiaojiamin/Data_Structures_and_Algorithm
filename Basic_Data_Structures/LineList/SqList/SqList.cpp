#include<stdio.h>
#include<malloc.h>

#define MAXSIZE 100		//����˳������󳤶�Ϊ100

typedef	char ElemType;	//����˳���Ԫ������Ϊchar
typedef struct{
	ElemType elem[MAXSIZE];
	int length;
}SqList;				//����˳���ṹ��

//����������������
void InitList(SqList *&L);	//1.��ʼ�����Ա�
void Destroy(SqList *L);	//2.�������Ա�
int ListEmpty(SqList *L);	//3.�ж����Ա��Ƿ�Ϊ��
int ListLength(SqList *L);	//4.���������L��Ԫ�ظ���
void DispList(SqList *L);	//5.���������Ϊ�ǿգ����L������Ԫ�ص�ֵ
int GetElem(SqList *L,int i,ElemType &e);	//6.ȡ����Ԫ�أ���e���ر��е�i��Ԫ�ص�ֵ
int LocateElem(SqList *L,ElemType e);	//7.��λ����Ԫ�أ����ر��е�һ����e��ȵ�Ԫ��λ��
int ListInsert(SqList *&L,int i,ElemType e);	//8.����Ԫ�أ���L�ĵ�i��λ�ò���e��ֵ��L��������1
int ListDelete(SqList *&L,int i,ElemType &e);	//9.ɾ��Ԫ�أ���L�е�i��Ԫ��ɾ������e������ֵ��L���ȼ���1
void delnode1(SqList *&L,ElemType x);
//10.ɾ�����Ա������е���x��Ԫ��
void delnode2(SqList *&L,ElemType x);
//11.ɾ�����Ա������е���x��Ԫ��
void move1(SqList *&L);
//12.�Ե�һ��Ԫ��Ϊ��׼��С�ڵ�������Ԫ�طŵ���ǰ�棬��������Ԫ�طŵ����ĺ��� 
void move2(SqList *&L);
//13.�Ե�һ��Ԫ��Ϊ��׼��С�ڵ�������Ԫ�طŵ���ǰ�棬��������Ԫ�طŵ����ĺ��� 
int main()
{
	SqList *L;
	ElemType e;
	printf("(1)��ʼ��˳���L\n");
	InitList(L);
	printf("(2)���β���β�巨����a,b,c,d,eԪ��\n");
	ListInsert(L,1,'c');
	ListInsert(L,2,'d');
	ListInsert(L,3,'e');
	ListInsert(L,4,'f');
	ListInsert(L,5,'a');
	ListInsert(L,6,'b');
	ListInsert(L,7,'c');
	ListInsert(L,8,'d');
	ListInsert(L,9,'e');
	printf("(3)���˳���L:");
	DispList(L);
	move2(L);
	DispList(L);
	printf("(4)˳���L����=%d\n",ListLength(L));
	printf("(5)˳���LΪ%s\n",(ListEmpty(L)?"��":"�ǿ�"));
	GetElem(L,3,e);
	printf("(6)˳���L�ĵ�3��Ԫ��=%c\n",e);
	printf("(7)Ԫ��a��λ��=%d\n",LocateElem(L,'a'));
	printf("(8)�ڵ�4��Ԫ��λ���ϲ���fԪ��\n");
	ListInsert(L,4,'f');
	printf("(9)���˳���L:");
	DispList(L);
	printf("(10)ɾ��L�ĵ�3��Ԫ��\n");
    ListDelete(L,3,e);
	printf("(11)���˳���L:");
	DispList(L);
	printf("(12)ɾ��˳���L�е�����f");
	delnode1(L,'f');
	printf("(13)���˳���L:");
	DispList(L);
	printf("(14)ɾ��˳���L�е�����a");
	delnode2(L,'a');
	printf("(15)���˳���L:");
	DispList(L);
	printf("(16)�ͷ�˳���L\n");
	Destroy(L);
	return 0;
}


void InitList(SqList *&L)	//��ʼ�����Ա�
{
	L = (SqList *)malloc(sizeof(SqList));
	L->length=0;
}
void Destroy(SqList *L)	//�������Ա�
{
	free(L);
}
int ListEmpty(SqList *L)	//�ж����Ա��Ƿ�Ϊ��
{
	return(L->length==0);		//���˳�����Ϊ0 �򷵻�1 �����Ϊ�� �򷵻�0
}
int ListLength(SqList *L)	//���������L��Ԫ�ظ���
{
	return(L->length);			//what the fuck!!!
}
void DispList(SqList *L)	//���������Ϊ�ǿգ����L������Ԫ�ص�ֵ
{
	int i;
	if(ListEmpty(L))		//���˳�����Ϊ0��Ϊ�ձ�ListEmpty()�ķ���ֵ����1
	return;
	for(i=0;i<L->length;i++)
		printf("%c",L->elem[i]);		//˳���ʵ�ʻ���������洢���ݣ����ﻹ�ǰ��������±���в���
	printf("\n");
}
int GetElem(SqList *L,int i,ElemType &e)	//ȡ����Ԫ�أ���e���ر��е�i��Ԫ�ص�ֵ
{
	if(i<1||i>L->length)
		return 0;
	e=L->elem[i-1];
	return 1;
}
int LocateElem(SqList *L,ElemType e)	//��λ����Ԫ�أ����ر��е�һ����e��ȵ�Ԫ��λ��
{
	int i=0;
	while(i<L->length&&L->elem[i]!=e)
		i++;
	if(i>=L->length)
		return 0;
	else
		return i+1;
}
int ListInsert(SqList *&L,int i,ElemType e)	//����Ԫ�أ���L�ĵ�i��λ�ò���e��ֵ��L��������1
{
	int j;
	if(i<1||i>L->length+1)
		return 0;
	i--;	//��λ��iת��Ϊ�����±�
	for(j=L->length;j>i;j--)
		L->elem[j]=L->elem[j-1];
	L->elem[i]=e;
	L->length++;
	return 1;

}
int ListDelete(SqList *&L,int i,ElemType &e)//ɾ��Ԫ�أ���L�е�i��Ԫ��ɾ������e������ֵ��L���ȼ���1
{
	int j;
	if(i<1||i>L->length)
		return 0;
	i--;	//��λ��iת��Ϊ�����±�
	e=L->elem[i];
	for(j=i;j<L->length-1;j++)
		L->elem[j]=L->elem[j+1];
	L->length--;
	return 1;
}

void delnode1(SqList *&L,ElemType x)
{
	int k = 0,i;				//k���ڼ�¼��Ϊx��Ԫ�ظ���
	for(i = 0;i < L->length;i++){		//�������±�0��ʼɨ��˳���
		if(L->elem[i] != x){		//����ǰԪ�ز�����x���������L��	
			L->elem[k] = L->elem[i];
			k++;				//������x��Ԫ����Ŀ+1
		}
	}
	L->length = k;			//˳����ȵ���k
}
void delnode2(SqList *&L,ElemType x)
{
	int k = 0,i = 0;				//k���ڼ�¼����x��Ԫ�ظ���
	while(i < L->length){
		if(L->elem[i] == x){
			k++;
		}
		else{
			L->elem[i - k] = L->elem[i];	//����Ϊx��Ԫ��ǰ��k��λ��
		}
		i++;
		
	}
	L->length -= k;			//˳����ȵ���k
}
void move1(SqList *&L)
{
	int i = 0,j = L->length - 1;
	ElemType tmp;	//tmp��Ϊ��ʱ��������i,j�������м����
	ElemType pivot = L->elem[0];	//��elem[0]Ϊ��׼���бȽ�
	while(i < j){
		while(i < j && L->elem[j] > pivot){	
			j--;	//�Ӻ���ǰɨ�裬�ҵ�һ��<=pivot��Ԫ�أ���ͣɨ��
		}
		while(i < j && L->elem[i] <= pivot){
			i++;	//��ǰ���ɨ�裬�ҵ�һ��>pivot��Ԫ�أ���ͣɨ��
		}
		if(i < j){
			tmp = L->elem[i];
			L->elem[i] = L->elem[j];
			L->elem[j] = tmp;
		}	//����L->elem[i]��L->elem[j]
	}
	//whileѭ��ִ�е�i=jΪֹ
	//ִ�е�����ط����Ѿ��ǰѴ��ڻ�׼�������ŵ��˺�������
	//С�ڻ�׼�������ŵ���ǰ�����������
	tmp = L->elem[0];
	L->elem[0] = L->elem[j];
	L->elem[j] = tmp;
	//����L->elem[0]��L->elem[j]
	//��ʱi = j i��jָ��ͬһ��Ԫ��
}
void move2(SqList *&L)
{
	int i = 0,j = L->length - 1;
	ElemType pivot = L->elem[0];	//��elem[0]��Ϊ��׼���з��뵽pivot��ȥ
	while(i < j){
	//whileѭ��ִ�е�i=jΪֹ
		while(i < j && L->elem[j] > pivot){	
			j--;	//�Ӻ���ǰɨ�裬�ҵ�һ��<=pivot��Ԫ�أ���ͣɨ��
			L->elem[i] = L->elem[j];	
			//�����С�ڵ��ڻ�׼��Ԫ��ǰ�Ƶ���i��λ��
		}
		while(i < j && L->elem[i] <= pivot){
			i++;	//��ǰ���ɨ�裬�ҵ�һ��>pivot��Ԫ�أ���ͣɨ��
			L->elem[j] = L->elem[i];
			//��������ڻ�׼��Ԫ�غ��Ƶ���j��λ��
		}
	}
	L->elem[j] = pivot;
}
