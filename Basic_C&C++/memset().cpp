#include<stdio.h>
#include<math.h>
#include<string.h>
 
 //memset(数组名，值，sizeof(数组名))在使用时要添加string.h头文件
 //使用的是按字节赋值，即对每个字节赋同样的值，一般只能对数组所有元素赋值全0或全-1
 //因为0的二进制补码全为0，-1的二进制补码全为1  
int main()
{
	
	//输出：0 0 0 0 0
	//		-1 -1 -1 -1 -1
	//		16843009 16843009 16843009 16843009 16843009（十进制）
	//16843009的二进制是 ?00000001 00000001 00000001 00000001?
	int a[5] = {1,2,3,4,5};
	memset(a,0,sizeof(a));
	for(int i = 0;i < 5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	memset(a,-1,sizeof(a));
	for(int i = 0;i < 5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	memset(a,1,sizeof(a));
	for(int i = 0;i < 5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
} 
