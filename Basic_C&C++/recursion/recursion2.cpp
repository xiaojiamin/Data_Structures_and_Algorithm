/*****************************************
Problem:递归2          
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/26
Description:用递归来实现求一个数组的各个元素之和。way1:第一项加上（后面所有项的和）递归 
*****************************************/
#include<stdio.h>
int fun1(int a[],int n);
int fun2(int a[],int n);

int main()
{
	int a[5]={1,2,3,4,5};
	printf("%d\n",fun1(a,0));
	printf("%d\n",fun2(a,0));
	printf("%d\n",sizeof(a)/sizeof(int));			//这里 确认数组长度sizeof(a)/sizeof(int)是正确的5 
	printf("%d",sizeof(a));
	return 0; 
}
int fun1(int a[],int n)			//one
{
	int s;
	if(n==5)						//写成 if(n==4)	return a[4];也ok应该 
	return 0;
	s=a[n]+fun1(a,n+1);
	return s;
}

int fun2(int a[],int n)			//two    这里有问题  
{
	int s;
	if(n==sizeof(a)/4)				//sizeof(a)就变成了4 什么鬼 
	return 0;
	s=a[n]+fun2(a,n+1);
	return s;
}
