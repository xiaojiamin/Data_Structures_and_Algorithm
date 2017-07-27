#include<stdio.h>

typedef long long L;		
//给复杂的数据类型起一个别名 L完全等价于long long 
int main()
{
	//输出：358024679135801 
	L a = 123456789012345LL;
	long long b = 234567890123456LL;
	//long long 类型数据大于2的31次方减1时要在数值末尾加LL 
	printf("%lld\n",a + b); 	//long long 型数据用%lld 输出 
	return 0;
} 
