#include<stdio.h>
#include<math.h>

int main()
{
	//���룺TAT
	//���: TAT0��@@  
	//		TAT
	char str[15];
	for(int i = 0;i < 3;i++){
		str[i] = getchar();
		//scanf(%s)��gets()���Զ������յ����ַ������油��\0 
		//getchar() ����Ҫ��ĩβ�ֶ�����\0 \0��ASCII�����0 
	} 
	puts(str);
	str[3] = 0;
	puts(str);
	return 0;
} 
