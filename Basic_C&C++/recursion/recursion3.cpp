/*****************************************
Problem:递归3          
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/26
Description:用递归来实现求一个数组的各个元素之和。way2:二分法递归
*****************************************/
#include<stdio.h>
int fun1(int a[],int n,int m);
//int fun2(int a[],int n);

int main()
{
	int a[5]={1,2,3,4,5};
	int b[6]={1,2,3,4,5,6};
	printf("%d\n",fun1(a,4,0));
	printf("%d\n",fun1(b,5,0));
	return 0; 
}
int fun1(int a[],int n,int m)			//从第m个元素开始 共有n个元素 
{
	if(n==m) 
	return a[n]; 
	//取中间一个元素应该是开头加结尾除以2而不是一直都用结尾序号除以2
	//正确写法 
	//int min=(n+m)/2;							//或者（n+m）>>1 右移一位相当于除以2，左移一位相当于乘以2  
												//不同之处是优先级 除法优先级高于加减法 >>或者<<优先级低于加减法
												//如 1024/2+8=520    1024>>1+8=2 
												 
	//return fun1(a,min,m)+fun1(a,n,min+1);		
	return fun1(a,(n+m)/2,m)+fun1(a,n,(n+m)/2+1);	//当然引入中间变量min能显著增加可读性 
	}
//错误写法

  // return fun1(a,n/2,m)+fun1(a,n,n/2+1);
 /* 这项写 n/2 就没办法正确指向子序列的中间一个元素 如数组a[5] 第一次fun1(a,4,o){
  																					fun1(a,2,0)+fun1(a,4,3);}
																					  			fun1(a,4,3){
																					  						fun1(a,2,3)+fun1(a,4,3);
																					  			} 
  这项写 (n+m)/2 就可以正确指向子序列的中间一个元素 如数组a[5] 第一次fun1(a,4,o){
  																					fun1(a,2,0)+fun1(a,4,3);}
																					  			fun1(a,4,3){
																					  						fun1(a,(4+3)/2,3)+fun1(a,4,(4+3)/2+1);
																					  					==  fun1(a,3,3)+fun1(a,4,4);
																					  			} 
																					  			*/
												
													
