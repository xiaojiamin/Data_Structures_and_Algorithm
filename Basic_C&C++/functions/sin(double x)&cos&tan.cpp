#include<stdio.h>
#include<math.h>

const double pi = acos(-1.0);	
//һ����acos(-1.0)������е�ֵ
 
int main()
{
	//�����0.707107��%fĬ����λС����
	//		0.707107
	//		1.000000 
	double db1 = sin(pi*45/180);
	//sin(double x)��������double���͵ĵ�x������ֵ 
	double db2 = cos(pi*45/180);
	//cos(double x)��������double���͵ĵ�x������ֵ 
	double db3 = tan(pi*45/180);
	//tan(double x)��������double���͵ĵ�x������ֵ 
	 
	printf("%f\n",db1); 
	printf("%f\n",db2); 
	printf("%f\n",db3);  
	return 0;
} 
