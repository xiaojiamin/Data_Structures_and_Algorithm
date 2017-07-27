#include<stdio.h>
int fun1(int x,int y,int z)
{	int i,all;
	all=x*y*z;
	for(i=x;i<=all;i++)
	{
		if(i%x==0&&i%y==0&&i%z==0)									//实现最小公倍数的第一种方法 从三个数中任意一个数开始+1枚举i的值 碰到第一个能同时整除三个数的i时跳出循环 即为最小公倍数 
		break;	
	}
	return i;
}
int fun2(int x,int y,int z)
{
	int lcm=x;
	while(lcm%x!=0||lcm%y!=0||lcm%z!=0)								//第二种思路 依旧是从三个数中任取一个数 当lcm不能同时整除这三个数的时候使lcm自加 直到lcm能同时整除三个数时结束循环 
	{
		lcm++;
	}
	return lcm;

}
int main()
{
	//a b c 输入的三个组的人数且都小于30 
	//d 最后输出的每袋核桃的数目 
	int a,b,c,d;	
	scanf("%d%d%d",&a,&b,&c);
	//就是一个求最小公倍数的问题 
	d=fun2(a,b,c); 
	printf("%d",d);
	return 0;
} 
