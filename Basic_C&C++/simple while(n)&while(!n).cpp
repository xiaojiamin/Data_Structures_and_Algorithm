#include<stdio.h>
#include<math.h>

int main()
{
	//输出：15 16 
	int n = 12345,count = 0;
	while(n){
		count = count + n % 10;
		n = n / 10;
	}
	//while(n)是if(n!=0)的简写  即n为真 执行while 
	printf("%d\n",count);
	while(!n){
		count++;
		n++;
	}
	//while(!n)是while(n==0)的简写 即n为真 不执行while	
	printf("%d\n",count);
	return 0;
} 
