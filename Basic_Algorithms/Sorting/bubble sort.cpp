#include<stdio.h>
#include<math.h>

int main()
{
	int a[10]={6,5,2,1,3} ;
	//i��ʾ�������������һ�������n-1��ð������ 
	for(int i = 1; i <= 4; i++){
		//��i������ʱ����a[0]��a[n-1-i]�������ǵ���һ��Ԫ�ؽ��бȽ�
		for(int j = 0; j < 5-i; j++){
			//��a[j]>a[j+1]����н���Ԫ�� �����򱣳ֲ��� 
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			} 
		} 
	}
	for(int i = 0;i < 5; i++){
		printf("%d",a[i]);
	}
	return 0;
} 
