#include<stdio.h>
#include<string.h>

int main()
{
	//���룺aaabaaa
	//		aabb
	//�����str1 < str2 
	char str1[10],str2[10]; 
	gets(str1);
	gets(str2);
	int cmp = strcmp(str1,str2);
	//strcmp()�������ڷ��������ַ�����С�ȽϵĽ�������հ�λ���ֵ���Ƚϡ�
	// ����aaacccccc��aab�ַ������бȽϣ�aaacccccc���ֵ����С��aab 
	if(cmp < 0){
		//����ֵΪһ����ֵ 
		printf("str1 < str2\n");
	}
	else if(cmp > 0){
		//����ֵΪһ����ֵ 
		printf("str1 > str2\n");
	}
	else{
		//����ֵΪ0 
		printf("str1 = str2\n");
	}
	printf("%d\n",cmp);
	return 0;
} 
