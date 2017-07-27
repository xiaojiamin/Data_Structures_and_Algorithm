/*****************************************
Problem:递归1          
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/26
Description:输入一个数n，用递归打印输出0-n，n-0 
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

//输入一个参数 
int fun1(int n)					//递归输出n-0 
{
	printf("%d\n",n);
	if(n>1)
	fun1(n-1);	
}

int fun11(int n)				//递归输出0-n 
{
	if(n>0)
	fun11(n-1);
	printf("%d\n",n);
} 

//输入两个参数 
int fun2(int a,int b)			//递归输出0-n 
{
	printf("%d\n",a);
	if(a<b)
	fun2(a+1,b);
}

int fun22(int a,int b)			//递归输出n-0
{
	printf("%d\n",b);
	if(a<b)
	fun22(a,b-1);
}

