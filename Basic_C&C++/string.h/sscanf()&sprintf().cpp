#include<stdio.h>
#include<string.h>

int main()
{

	//�����123
	//		456 
	int n; 
	char str1[50] = "123"; 
	sscanf(str1,"%d",&n);
	//sscanf(str1,"%d",&n);���ǰ�str�е��ַ���%d����ʽд��n�С� (�����ң�����str1��n)
	printf("%d\n",n);
	int m = 456;
	char str2[50];
	sprintf(str2,"%d",m);
	//sprintf(str2,"%d",m);���ǰ�m��%d����ʽ������д��n�С�(�������󣬼���m��str2)
	printf("%s\n",str2);
	return 0;
} 
