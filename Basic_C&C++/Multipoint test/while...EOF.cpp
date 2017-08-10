#include<stdio.h>
//多点测试需要保证程序能够重复执行核心代码 
 
int main()
{
	int a,b;
	//while...EOF型
	//EOF在C语言中代表-1，也即是scanf函数读取失败，只有在读取文件时达到文件末尾导致无法读取的现象才会读入失败 
	 while(scanf("%d%d",&a,&b) != EOF){
	 	//读入字符串时，有scanf("%s",str) != EOF  或者 gets(str) != NULL  
	 	printf("%d\n",a + b);
	 } 
	return 0;
} 
