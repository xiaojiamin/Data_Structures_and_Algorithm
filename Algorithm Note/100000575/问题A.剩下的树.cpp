#include<stdio.h>

const int maxl = 10000;

int main()
{
	int L,M,N = 0;	
	//LΪ�����ܳ��ȣ�MΪ��������������������NΪ���������� 
	int a[maxl] = {0};
	//a[maxl]�������ڴ洢��ľ��״̬
	// Ԫ��Ϊ1��ʾ���±괦������Ԫ��Ϊ0��ʾ���±괦���������� 
	int c,d,num[maxl] = {0};
	//c,d�ֱ��ʾÿ���һ�����֣�num[maxl]���ڴ洢�����ֲ�����ɺ�Ľ�� 
	while(scanf("%d%d",&L,&M) != EOF){
		if(L == 0 && M == 0)	break;
		
		//while...break����ʽ�Ķ����Է��� 
		for(int i = 0;i <= L;i++){
			a[i] = 1;
		}
		//����0��L��L+1���㸳ֵΪ1����ʾ�������� 
		for(int i = 0;i < M;i++){
			scanf("%d%d",&c,&d);
			for(int j = c;j <=d;j++){
				a[j] = 0;
			}
		} 
		//����M��c,d��ֵ��������a���±���c,d֮���Ԫ�ظ�ֵΪ0����ʾ�������� 
		for(int i = 0;i <= L;i++){
			if(a[i] == 1){
				num[N]++;	
			}
		}
		//ͳ����һ�ֲ��Թ���������ʣ��Ԫ��1����������ŵ�����num�� 
		N++;	//�������� N+1 
	}
	for(int i = 0;i < N;i++)
		printf("%d\n",num[i]);	
		//��ӡ������ 
	return 0;
} 
