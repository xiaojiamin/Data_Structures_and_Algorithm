#include<stdio.h>

int main()
{
	//%md 使不足m位的int型变量以m位右对齐输出，高位用空格补齐 大于m位的原样输出 
	//%5d输出a=123,b=1234567	
	//输出：  123
	//		1234567 
	int a = 123,b = 1234567;
	printf("%5d\n",a);
	printf("%5d\n",b);
	
	//%0md 使不足m位的int型变量以m位右对齐输出，高位用0补齐 大于m位的原样输出 
	//%05d输出a=123,b=1234567	
	//输出：00123
	//		1234567 
	int c = 123,d = 1234567;
	printf("%05d\n",c);
	printf("%05d\n",d);
	
	//%.mf 让浮点数保留m位小数（四舍六入五成双）
	//输出：12
	//		12.3
	//		12.34
	//		12.345
	//		12.3456
	//		12.34567 
	double e = 12.34567;
	printf("%.0f\n",e); 
	printf("%.1f\n",e); 
	printf("%.2f\n",e); 
	printf("%.3f\n",e); 
	printf("%.4f\n",e); 
	printf("%.5f\n",e); 
	return 0;
} 
