#include<stdio.h>
#include<math.h>

int main()
{
	//输入：TAT
	//输出: TAT0口@@  
	//		TAT
	char str[15];
	for(int i = 0;i < 3;i++){
		str[i] = getchar();
		//scanf(%s)和gets()会自动往接收到的字符串后面补上\0 
		//getchar() 则需要在末尾手动输入\0 \0的ASCII码就是0 
	} 
	puts(str);
	str[3] = 0;
	puts(str);
	return 0;
} 
