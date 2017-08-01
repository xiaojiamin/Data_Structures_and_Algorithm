#include<stdio.h>
#include<math.h>

int main()
{
	//输入：Wo Ai De Ren Ye Ai Wo
	//		QAQ
	//		T_T
	//		WoAiNi
	//输出：Wo Ai De Ren Ye Ai Wo
	//		QAQ
	//		T_T
	//		WoAiNi
	char str1[20];
	char str2[5][10];
	gets(str1);
	//gets()识别换行符\n作为结束输入 
	for(int i = 0;i < 3;i++){
		gets(str2[i]);
	}	
	puts(str1);
	//puts()输出一串字符后紧跟着输出一个换行符\n 
	for(int i = 0;i < 3;i++){
		puts(str2[i]);
	}
	
	return 0;
} 
