/*****************************************
Problem:�ݹ�2          
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/26
Description:�õݹ���ʵ����һ������ĸ���Ԫ��֮�͡�way1:��һ����ϣ�����������ĺͣ��ݹ� 
*****************************************/
#include<stdio.h>
int fun1(int a[],int n);
int fun2(int a[],int n);

int main()
{
	int a[5]={1,2,3,4,5};
	printf("%d\n",fun1(a,0));
	printf("%d\n",fun2(a,0));
	printf("%d\n",sizeof(a)/sizeof(int));			//���� ȷ�����鳤��sizeof(a)/sizeof(int)����ȷ��5 
	printf("%d",sizeof(a));
	return 0; 
}
int fun1(int a[],int n)			//one
{
	int s;
	if(n==5)						//д�� if(n==4)	return a[4];ҲokӦ�� 
	return 0;
	s=a[n]+fun1(a,n+1);
	return s;
}

int fun2(int a[],int n)			//two    ����������  
{
	int s;
	if(n==sizeof(a)/4)				//sizeof(a)�ͱ����4 ʲô�� 
	return 0;
	s=a[n]+fun2(a,n+1);
	return s;
}
