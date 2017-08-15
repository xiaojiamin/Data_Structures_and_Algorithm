#include<stdio.h>

int main()
{
	int a,b,cpb,sum = 0;
	while(scanf("%d%d",&a,&b) != EOF){
		while(a != 0){
			cpb = b;
			while(cpb != 0){
				sum += (a % 10) * (cpb % 10);
				cpb /= 10; 
			}
			a /= 10;
		}
		printf("%d",sum);
	}
	
	return 0;
}
