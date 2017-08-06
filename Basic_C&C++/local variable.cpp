#include<stdio.h>
#include<math.h>


//输出：10
void change(int x)//此处x为形式参数 
{
	x = x + 1;
} 
int main()
{
	int x = 10;
	change(x);//此处x为实际参数 
	//函数的传参方式为值传递，即仅将实参的值传递给形参 
	printf("%d",x);
	return 0;
} 
