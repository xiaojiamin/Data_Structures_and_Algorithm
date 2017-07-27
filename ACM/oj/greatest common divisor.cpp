#include<stdio.h>
int fun(int a,int b)					//辗转相除法 
{
	if(a==0)	return b;
	return fun(b%a,a);
}
int fun2(int a,int b)
{
	int i;
	for(i=a;i>=1;i--)
	if(a%i==0&&b%i==0)
		return i;						//循环求最大公约数 
} 
int main()
{
	int a=15,b=40;
	printf("%d",fun2(a,b));
	return 0;
} 
