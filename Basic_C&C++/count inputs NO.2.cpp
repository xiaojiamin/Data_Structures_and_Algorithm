/*****************************************
Problem:����ͳ�ƣ��ض�������ļ��棩 //�ļ�����������ݣ�����̨����ʾ���� ,�������������ȫ�����¶����ļ� 
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/15 
Description:���뼸��������ͳ�����������������е����ֵ����Сֵ��ƽ���� 
*****************************************/
#define LOCAL 
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	#ifdef LOCAL
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	#endif
	const int INF=100000000;
	int a,n,max,min,s; 
	n=0;
	s=0;
	max=-INF;
	min=INF;							
	while(scanf("%d",&a)==1)			
	{								
		s+=a;
		if(a>max)	max=a;
		if(a<min)	min=a;
		n++;
	} 
	printf("intputNum:%d\n",n);
	printf("max=%d,min=%d,ave:%.3lf\n",max,min,(double)s/n);
	printf("time used is %.2lf s",(double)clock()/CLOCKS_PER_SEC);
	return 0;
} 
