#include<stdio.h>
#include<math.h>

int main()
{
	//���룺Wo Ai De Ren Ye Ai Wo
	//		QAQ
	//		T_T
	//		WoAiNi
	//�����Wo Ai De Ren Ye Ai Wo
	//		QAQ
	//		T_T
	//		WoAiNi
	char str1[20];
	char str2[5][10];
	gets(str1);
	//gets()ʶ���з�\n��Ϊ�������� 
	for(int i = 0;i < 3;i++){
		gets(str2[i]);
	}	
	puts(str1);
	//puts()���һ���ַ�����������һ�����з�\n 
	for(int i = 0;i < 3;i++){
		puts(str2[i]);
	}
	
	return 0;
} 
