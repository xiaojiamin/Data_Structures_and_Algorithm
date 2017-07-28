#include<stdio.h>
#include<math.h>

int main()
{
	//输出：-6 -5
	//		5 6 
	double db1 = -5.2, db2 = 5.2;
	printf("%.0f %.0f\n",floor(db1),ceil(db1));
	printf("%.0f %.0f\n",floor(db2),ceil(db2)); 
	//floor(double x) 向下取整 
	//ceil(double x) 向上取整 
 
	return 0;
} 
