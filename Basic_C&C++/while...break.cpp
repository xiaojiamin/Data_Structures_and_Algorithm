#include<stdio.h>
//��������Ҫ��֤�����ܹ��ظ�ִ�к��Ĵ��� 
 
int main()
{
	int a,b;
	//while...break��
	//EOF��C�����д���-1��Ҳ����scanf������ȡʧ�ܣ�ֻ���ڶ�ȡ�ļ�ʱ�ﵽ�ļ�ĩβ�����޷���ȡ������Ż����ʧ�� 
	 while(scanf("%d%d",&a,&b) != EOF){
	 	if(a == 0 && b ==0 )	
		 	break; 
	 	//ͬwhile...EOF��  ���������һ��break��䣻 
	 	printf("%d\n",a + b);
	 } 
	return 0;
} 
