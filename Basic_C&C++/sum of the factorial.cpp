/*****************************************
Problem:�׳�֮�ͱ���ĩβ��λ��NO.1�����������%1000000�� 
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/15 
Description:��1!+2!+3!+...+n!�����Ҵ�ӡ�������ĺ���λ�� ����10�������37913 
*****************************************/
#include<stdio.h>
#include<math.h>
#include<time.h>
#define MOD 1000000
int main()
{
	//const int MOD=1000000;
	int n,s,i,j,a;
	s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			a*=j;
		}
		s+=a;
	}
	printf("%d\n",s%MOD);
	printf("time used is %.2lf s",(double)clock()/CLOCKS_PER_SEC);
	return 0;
} 
