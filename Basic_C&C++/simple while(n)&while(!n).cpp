#include<stdio.h>
#include<math.h>

int main()
{
	//�����15 16 
	int n = 12345,count = 0;
	while(n){
		count = count + n % 10;
		n = n / 10;
	}
	//while(n)��if(n!=0)�ļ�д  ��nΪ�� ִ��while 
	printf("%d\n",count);
	while(!n){
		count++;
		n++;
	}
	//while(!n)��while(n==0)�ļ�д ��nΪ�� ��ִ��while	
	printf("%d\n",count);
	return 0;
} 
