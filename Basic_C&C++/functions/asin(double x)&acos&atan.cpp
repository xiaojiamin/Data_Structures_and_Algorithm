#include<stdio.h>
#include<math.h>
 
int main()
{
	//�����1.570796��%fĬ����λС����
	//		3.141593
	//		0.000000 
	double db1 = asin(1);
	//asin(double x)��������double���͵ĵ�x�ķ�����ֵ 
	double db2 = acos(-1.0);
	//acos(double x)��������double���͵ĵ�x�ķ�����ֵ 
	double db3 = atan(0);
	//atan(double x)��������double���͵ĵ�x�ķ�����ֵ 
	 
	printf("%f\n",db1); 
	printf("%f\n",db2); 
	printf("%f\n",db3);  
	return 0;
} 
