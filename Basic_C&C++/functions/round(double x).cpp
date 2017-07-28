#include<stdio.h>
#include<math.h>
 
int main()
{
	//取整输出：3,3,4,4,4
	//不取整输出：3.000000，3.000000，4.000000，4.000000，4.000000 
	double db1 = round(3.40);
	double db2 = round(3.45);
	double db3 = round(3.50);
	double db4 = round(3.55);
	double db5 = round(3.60);
	//round(double x)函数用于将double型变量四舍五入，返回值类型也是double型，需进行取整 
	 
	printf("%d\n",(int)db1); 
	printf("%d\n",(int)db2); 
	printf("%d\n",(int)db3);  
	printf("%d\n",(int)db4); 
	printf("%f\n",db5);
	return 0;
} 
