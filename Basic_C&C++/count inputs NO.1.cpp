/*****************************************
Problem:����ͳ�ƣ���׼��������棩 
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/15 
Description:���뼸��������ͳ�����������������е����ֵ����Сֵ��ƽ���� 
*****************************************/
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	const int INF=100000000;
	int a,n,max,min,s; 
	n=0;
	s=0;
	max=-INF;
	min=INF;							/*scanf()�������ص�ֵ������Ϊ����ȷ��ָ����ʽ��������ĸ�����Ҳ������ȷ���յ�ֵ�ı���������
����˵��ȷ����ֵ�ĸ�������ʱscanf("%d",&i)Ҫ������һ��int�������ֻҪ����ʽ����һ��int�����������1.
����scanf("%d%d%d",&i��&j��&k)��������ʱ10 20 d��scanf����Ϊ2 */ 
	while(scanf("%d",&a)==1)			//scanf()�����ķ���ֵ�ǳɹ���������ĸ������˴�������ʱ��Ϊint��ʱ������ֵ��Ϊ1�����򷵻�ֵΪ0. 
	{									//���Ǵ˳��򲢲����ڽ�������ʱ��Entry ����ʱû������������ִ��sacnf()����ʱ�س� ��һ��Ϊ������һ����䣬����������Ϊ�س������޷��ж�ѭ������Ϊ�񣬼���������ѭ�� 
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
