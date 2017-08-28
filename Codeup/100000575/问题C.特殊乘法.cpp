#include<stdio.h>

int main()
{
	int a,b,cpb,sum = 0;
	while(scanf("%d%d",&a,&b) != EOF){
		while(a != 0){
			//a的每一位分别与b的每一位相乘求和 
			cpb = b;
			//由于b需要被拆解成一位一位的状态多次，所以用cpb复制b的值 
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
