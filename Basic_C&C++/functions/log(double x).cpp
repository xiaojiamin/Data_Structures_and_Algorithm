#include<stdio.h>
#include<math.h>

int main()
{
	//输出：0.000000（%f默认六位小数） 
	double db = log(1.0);
	//log(double x)函数返回double类型的x的以e为底的自然对数 
	printf("%f\n",db);
	return 0;
} 
