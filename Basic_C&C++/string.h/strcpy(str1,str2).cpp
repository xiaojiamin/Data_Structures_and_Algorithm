#include<stdio.h>
#include<string.h>

int main()
{
	//输入：abcdfe
	//		aaaaa
	//输出：aaaaa 
	char str1[50],str2[50]; 
	gets(str1);
	gets(str2);
	strcpy(str1,str2);
	//strcpy()函数用于将str2复制给str1，这里的复制包括最后的\0。 
	puts(str1);
	return 0;
} 
