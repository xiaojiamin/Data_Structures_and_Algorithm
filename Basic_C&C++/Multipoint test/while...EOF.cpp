#include<stdio.h>
//��������Ҫ��֤�����ܹ��ظ�ִ�к��Ĵ��� 
 
int main()
{
	int a,b;
	//while...EOF��
	//EOF��C�����д���-1��Ҳ����scanf������ȡʧ�ܣ�ֻ���ڶ�ȡ�ļ�ʱ�ﵽ�ļ�ĩβ�����޷���ȡ������Ż����ʧ�� 
	 while(scanf("%d%d",&a,&b) != EOF){
	 	//�����ַ���ʱ����scanf("%s",str) != EOF  ���� gets(str) != NULL  
	 	printf("%d\n",a + b);
	 } 
	return 0;
} 
