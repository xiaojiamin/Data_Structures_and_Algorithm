#include<stdio.h>
#include<string.h>

int main()
{
	//���룺abcdfe
	//		aaaaa
	//�����abcdfeaaaaa 
	char str1[50],str2[50]; 
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	//strcat()�������ڽ�str2�ӵ�str1���档 
	puts(str1);
	return 0;
} 
