/*****************************************
Problem:����ͳ�ƣ�һ������ļ��棩 //����������ļ����ǿ���̨����д������ 
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
	FILE *fin,*fout;
	fin=fopen("data.in","rb");
	fout=fopen("data.out","wb"); 
	const int INF=100000000;
	int a,n,max,min,s; 
	n=0;
	s=0;
	max=-INF;
	min=INF;							
	while(fscanf(fin,"%d",&a)==1)			
	{								
		s+=a;
		if(a>max)	max=a;
		if(a<min)	min=a;
		n++;
	} 
	fprintf(fout,"intputNum:%d\n",n);
	fprintf(fout,"max=%d,min=%d,ave:%.3lf\n",max,min,(double)s/n);
	printf("time used is %.2lf s",(double)clock()/CLOCKS_PER_SEC);
	fclose(fin);
	fclose(fout);
	return 0;
} 
