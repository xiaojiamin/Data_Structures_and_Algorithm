#include<stdio.h>

typedef long long L;		
//�����ӵ�����������һ������ L��ȫ�ȼ���long long 
int main()
{
	//�����358024679135801 
	L a = 123456789012345LL;
	long long b = 234567890123456LL;
	//long long �������ݴ���2��31�η���1ʱҪ����ֵĩβ��LL 
	printf("%lld\n",a + b); 	//long long ��������%lld ��� 
	return 0;
} 
