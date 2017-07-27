/*****************************************
Problem:递归4          
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/31 
Description:用递归来实现求一个数组的各个元素之和。way3:最后一项与前面其他项之和相加
***************************************/
#include<stdio.h>
int fun1(int a[],int n);

int main()
{
	int a[5]={1,2,3,4,5};
	int b[6]={1,2,3,4,5,6};
	printf("%d\n",fun1(a,4));
	printf("%d\n",fun1(b,5));
	return 0; 
}
int fun1(int a[],int n)			
{
//	if(n==0) return a[0];
	if(n<0)	return 0;			//好吧 这样写是一样的效果 
	return fun1(a,n-1)+a[n];
}
