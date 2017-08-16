#include<stdio.h>

int main()
{
	int a,b,cpb,sum = 0;
	while(scanf("%d%d",&a,&b) != EOF){
		while(a != 0){
			//分别取a的每一位与b的每一位相乘，求和
			cpb = b;
			//对a的每移位都要与b的每一位相乘，所以b相应的要分解成一位一位数字状态多次，所以用cpb复制b的值参与操作
			while(cpb != 0){
				sum += (a % 10) * (cpb % 10);
				cpb /= 10; 
			}
			a /= 10;
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
