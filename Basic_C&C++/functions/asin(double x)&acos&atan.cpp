#include<stdio.h>
#include<math.h>
 
int main()
{
	//输出：1.570796（%f默认六位小数）
	//		3.141593
	//		0.000000 
	double db1 = asin(1);
	//asin(double x)函数返回double类型的的x的反正弦值 
	double db2 = acos(-1.0);
	//acos(double x)函数返回double类型的的x的反余弦值 
	double db3 = atan(0);
	//atan(double x)函数返回double类型的的x的反正切值 
	 
	printf("%f\n",db1); 
	printf("%f\n",db2); 
	printf("%f\n",db3);  
	return 0;
} 
