/*****************************************
Problem:aabb����&&NO.2 (ö��ƽ�������жϸ�����ƽ����aabb��ʽ)
Copyright: Doux
Author: Pumpkinorth
Date:2017/03/15 
Description:�����������aabb����λ��ȫƽ���������Ϊ7744���ֳ�7744���⣩ 
*****************************************/
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	int x,n,a,b;
	for(x=1;;x++)				//��1�������ʵ������Ϊ���Ϸ�Χ������������ݶԼ��������΢����� 
	{
		n=x*x;
		if(n<1000)	continue;
		if(n>9999)	break;
		a=n/100;
		b=n%100;
		if(a/10==a%10&&b/10==b%10)
		printf("%d\n",n);
	} 
		// clock()��C������ļ�ʱ�����Ժ���Ϊ��λ ��ҪӦ��time.hͷ�ļ���������CLOCKS_PER_SEC ��任������Ϊ��λ�ĳ�������ʱ��  
	printf("time used is %.2lf s",(double)clock()/CLOCKS_PER_SEC);		
	return 0;
} 
