#include<stdio.h>
#include<string.h>

int main()
{
	//���룺abcdfe
	//		aaaaa
	//�����aaaaa 
	char str1[50],str2[50]; 
	gets(str1);
	gets(str2);
	strcpy(str1,str2);
	//strcpy()�������ڽ�str2���Ƹ�str1������ĸ��ư�������\0�� 
	puts(str1);
	return 0;
} 
