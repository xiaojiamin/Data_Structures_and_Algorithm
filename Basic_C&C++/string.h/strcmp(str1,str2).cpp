#include<stdio.h>
#include<string.h>

int main()
{
	//输入：aaabaaa
	//		aabb
	//输出：str1 < str2 
	char str1[10],str2[10]; 
	gets(str1);
	gets(str2);
	int cmp = strcmp(str1,str2);
	//strcmp()函数用于返回两个字符串大小比较的结果，按照按位按字典序比较。
	// 比如aaacccccc和aab字符串进行比较，aaacccccc的字典序就小于aab 
	if(cmp < 0){
		//返回值为一个负值 
		printf("str1 < str2\n");
	}
	else if(cmp > 0){
		//返回值为一个正值 
		printf("str1 > str2\n");
	}
	else{
		//返回值为0 
		printf("str1 = str2\n");
	}
	printf("%d\n",cmp);
	return 0;
} 
