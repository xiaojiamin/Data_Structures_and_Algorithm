#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n); 
	switch(n){
		
		case 1:		//case��1֮��Ҫ�пո� 
		//�������ݣ�12:23:33
		//������ݣ�12:23:33 
		int hh,mm,ss;
		scanf("%d:%d:%d",&hh,&mm,&ss);
		//ԭ������ ��12:23:45����ʱ�� 
		printf("%d:%d:%d\n",hh,mm,ss);	
		//ԭ����� 
		break;
		
		case 2:
		//�������ݣ�1 a bcd
		//������ݣ�a=1,c= ,str=a 
		int a;
		char c,str1[10];
		scanf("%d%c%s",&a,&c,str1);	 
		//1.scanf��%c�ǿ��Զ���ո�ͻ��е� 
		//2.�����ַ�������ʱ����&����Ϊ����������������׵�ַ
		printf("a = %d,c = %c,str = %s\n",a,c,str1);
		break;
		
		case 3:
		//�������ݣ�abcd efg
		//������ݣ�abcd 
		char str2[10];
		scanf("%s",str2);
		//�ַ�����ʵ��%s����ʱ���ÿո���߻�����Ϊ��������ı�־ 
		printf("%s\n",str2);
		break;	//������continue��ֻ������ѭ���У� 
	}
	return 0;
} 
