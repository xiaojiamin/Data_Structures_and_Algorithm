#include<stdio.h>
#include<string.h>

int main()
{

	//输出：123
	//		456 
	int n; 
	char str1[50] = "123"; 
	sscanf(str1,"%d",&n);
	//sscanf(str1,"%d",&n);就是把str中的字符以%d的形式写入n中。 (从左到右，即从str1到n)
	printf("%d\n",n);
	int m = 456;
	char str2[50];
	sprintf(str2,"%d",m);
	//sprintf(str2,"%d",m);就是把m以%d的形式从左到右写入n中。(从右至左，即从m到str2)
	printf("%s\n",str2);
	return 0;
} 
