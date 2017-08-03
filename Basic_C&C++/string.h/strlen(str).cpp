#include<stdio.h>
#include<string.h>

int main()
{
	char str[10]; 
	gets(str);
	int len = strlen(str);
	//strlen()函数用于得到第一个\0前的字符个数 
	printf("%d\n",len);
	return 0;
} 
