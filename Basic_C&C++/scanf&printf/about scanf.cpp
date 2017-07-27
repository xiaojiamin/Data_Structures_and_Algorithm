#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n); 
	switch(n){
		
		case 1:		//case和1之间要有空格 
		//输入数据：12:23:33
		//输出数据：12:23:33 
		int hh,mm,ss;
		scanf("%d:%d:%d",&hh,&mm,&ss);
		//原样输入 如12:23:45这种时间 
		printf("%d:%d:%d\n",hh,mm,ss);	
		//原样输出 
		break;
		
		case 2:
		//输入数据：1 a bcd
		//输出数据：a=1,c= ,str=a 
		int a;
		char c,str1[10];
		scanf("%d%c%s",&a,&c,str1);	 
		//1.scanf的%c是可以读入空格和换行的 
		//2.输入字符串数组时不用&，因为数组名就是数组的首地址
		printf("a = %d,c = %c,str = %s\n",a,c,str1);
		break;
		
		case 3:
		//输入数据：abcd efg
		//输出数据：abcd 
		char str2[10];
		scanf("%s",str2);
		//字符数组实用%s输入时，用空格或者换行作为读入结束的标志 
		printf("%s\n",str2);
		break;	//不能用continue（只能用在循环中） 
	}
	return 0;
} 
