#include<stdio.h>
#include<string.h>

int main()
{
	char str[10]; 
	gets(str);
	int len = strlen(str);
	//strlen()�������ڵõ���һ��\0ǰ���ַ����� 
	printf("%d\n",len);
	return 0;
} 
