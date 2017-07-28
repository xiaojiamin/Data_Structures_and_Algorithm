#include<stdio.h>
#include<math.h>

int main()
{
	//输出：8.000000（%f默认六位小数） 
	double db = pow(2.0,3.0);
	//pow(double r,double p)函数要求r,p都是double型 返回r的p次方 
	printf("%f\n",db);
	return 0;
} 
