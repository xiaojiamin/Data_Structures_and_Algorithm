#include<stdio.h>
#include<math.h>

const double pi = acos(-1.0);	
//一般用acos(-1.0)来定义π的值
 
int main()
{
	//输出：0.707107（%f默认六位小数）
	//		0.707107
	//		1.000000 
	double db1 = sin(pi*45/180);
	//sin(double x)函数返回double类型的的x的正弦值 
	double db2 = cos(pi*45/180);
	//cos(double x)函数返回double类型的的x的余弦值 
	double db3 = tan(pi*45/180);
	//tan(double x)函数返回double类型的的x的正切值 
	 
	printf("%f\n",db1); 
	printf("%f\n",db2); 
	printf("%f\n",db3);  
	return 0;
} 
