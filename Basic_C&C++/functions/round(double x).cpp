#include<stdio.h>
#include<math.h>
 
int main()
{
	//ȡ�������3,3,4,4,4
	//��ȡ�������3.000000��3.000000��4.000000��4.000000��4.000000 
	double db1 = round(3.40);
	double db2 = round(3.45);
	double db3 = round(3.50);
	double db4 = round(3.55);
	double db5 = round(3.60);
	//round(double x)�������ڽ�double�ͱ����������룬����ֵ����Ҳ��double�ͣ������ȡ�� 
	 
	printf("%d\n",(int)db1); 
	printf("%d\n",(int)db2); 
	printf("%d\n",(int)db3);  
	printf("%d\n",(int)db4); 
	printf("%f\n",db5);
	return 0;
} 
