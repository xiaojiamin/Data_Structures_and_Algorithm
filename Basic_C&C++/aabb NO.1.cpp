/*****************************************
Problem:aabb����&&NO.1 (�ȸ���aabb���������жϸ������ǲ�����ȫƽ����)
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/15 
Description:�����������aabb����λ��ȫƽ���� �����Ϊ7744���ֳ�7744���⣩ 
*****************************************/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,n;
	double m;
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			n=a*1100+b*11;
			m=sqrt(n);
			if(floor(m+0.5)==m)
				printf("%d\n",n);
		}
	} 
} 
