#include<stdio.h>
int fun1(int x,int y,int z)
{	int i,all;
	all=x*y*z;
	for(i=x;i<=all;i++)
	{
		if(i%x==0&&i%y==0&&i%z==0)									//ʵ����С�������ĵ�һ�ַ��� ��������������һ������ʼ+1ö��i��ֵ ������һ����ͬʱ������������iʱ����ѭ�� ��Ϊ��С������ 
		break;	
	}
	return i;
}
int fun2(int x,int y,int z)
{
	int lcm=x;
	while(lcm%x!=0||lcm%y!=0||lcm%z!=0)								//�ڶ���˼· �����Ǵ�����������ȡһ���� ��lcm����ͬʱ��������������ʱ��ʹlcm�Լ� ֱ��lcm��ͬʱ����������ʱ����ѭ�� 
	{
		lcm++;
	}
	return lcm;

}
int main()
{
	//a b c �����������������Ҷ�С��30 
	//d ��������ÿ�����ҵ���Ŀ 
	int a,b,c,d;	
	scanf("%d%d%d",&a,&b,&c);
	//����һ������С������������ 
	d=fun2(a,b,c); 
	printf("%d",d);
	return 0;
} 
