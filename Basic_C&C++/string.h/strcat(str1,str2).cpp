#include<stdio.h>
#include<string.h>

int main()
{
	//输入：abcdfe
	//		aaaaa
	//输出：abcdfeaaaaa 
	char str1[50],str2[50]; 
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	//strcat()函数用于将str2接到str1后面。 
	puts(str1);
	return 0;
} 
