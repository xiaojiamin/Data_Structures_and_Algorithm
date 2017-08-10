#include<stdio.h>
//多点测试需要保证程序能够重复执行核心代码 
 
int main()
{
	int T,a,b;
	//while(T--)型
	scanf("%d",&T);
	//在给定测试数据组数的情况下，可以用while(T--)来执行核心代码T次 
	 while(T--){ 
	 	scanf("%d%d",&a,&b);
	 	printf("%d\n",a + b);
	 } 
	return 0;
} 
