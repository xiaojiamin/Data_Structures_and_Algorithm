/*****************************************
Problem:�ݹ�1          
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/26
Description:����һ����n���õݹ��ӡ���0-n��n-0 
*****************************************/
#include<stdio.h>
int fun1(int n);
int fun11(int n);
int fun2(int a,int b);
int fun22(int a,int b);
int main()
{
	int n;
	scanf("%d",&n);
	//fun11(n);
	int m=0;
	fun22(m,n);
	return 0;
}

//����һ������ 
int fun1(int n)					//�ݹ����n-0 
{
	printf("%d\n",n);
	if(n>1)
	fun1(n-1);	
}

int fun11(int n)				//�ݹ����0-n 
{
	if(n>0)
	fun11(n-1);
	printf("%d\n",n);
} 

//������������ 
int fun2(int a,int b)			//�ݹ����0-n 
{
	printf("%d\n",a);
	if(a<b)
	fun2(a+1,b);
}

int fun22(int a,int b)			//�ݹ����n-0
{
	printf("%d\n",b);
	if(a<b)
	fun22(a,b-1);
}

