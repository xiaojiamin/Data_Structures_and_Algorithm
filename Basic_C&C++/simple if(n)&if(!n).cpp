#include<stdio.h>
#include<math.h>

int main()
{
	//输出：m is ture
	//		n is ture 
	int m,n;
	m=n=1;
	//连续赋值 
	if(m){
		printf("m is ture\n");
	}
	//if(m)是if(m!=0)的简写  即m为真 执行if 
	if(!n)
	{
		
	}else{
		printf("n is ture\n");
	}
	//if(!n)是if(n==0)的简写 即n为真 不执行if	
	return 0;
} 
