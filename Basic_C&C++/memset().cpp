#include<stdio.h>
#include<math.h>
#include<string.h>
 
 //memset(��������ֵ��sizeof(������))��ʹ��ʱҪ���string.hͷ�ļ�
 //ʹ�õ��ǰ��ֽڸ�ֵ������ÿ���ֽڸ�ͬ����ֵ��һ��ֻ�ܶ���������Ԫ�ظ�ֵȫ0��ȫ-1
 //��Ϊ0�Ķ����Ʋ���ȫΪ0��-1�Ķ����Ʋ���ȫΪ1  
int main()
{
	
	//�����0 0 0 0 0
	//		-1 -1 -1 -1 -1
	//		16843009 16843009 16843009 16843009 16843009��ʮ���ƣ�
	//16843009�Ķ������� ?00000001 00000001 00000001 00000001?
	int a[5] = {1,2,3,4,5};
	memset(a,0,sizeof(a));
	for(int i = 0;i < 5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	memset(a,-1,sizeof(a));
	for(int i = 0;i < 5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	memset(a,1,sizeof(a));
	for(int i = 0;i < 5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
} 
