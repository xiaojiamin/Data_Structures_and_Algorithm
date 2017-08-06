#include<stdio.h>
#include<math.h>

int main()
{
	
	//输出： q =  6422260(数组第六个元素的地址)
	//		 p =  6422240(数组的首地址)
	//		 q - p = 5(两个int型指针相减，等价于在求这两个指针之间相差几个int，所以结果不是20) 
	int a[10] = {1,4,9,14,25,36,49};
	int *p = a;
	int *q = &a[5];			//只能赋值给指针变量 赋值给整型变量会报错 所以能不能呢 
	printf("q = %d\n",q); 
	printf("p = %d\n",p); 
	printf("q - p = %d\n",q - p); 
	return 0;
} 
