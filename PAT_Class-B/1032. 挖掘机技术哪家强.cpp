#include<stdio.h>

const int MAXSIZE = 100010;
int school[MAXSIZE] = {0};

int main()
{
	int n,num = 0,maxCore = 0;
	scanf("%d",&n);
	int SchId,SchCore;
	for(int i = 0;i < n;i++){			//i��0��n-1��һ������n����������Ϣ 
		scanf("%d%d",&SchId,&SchCore);
		school[SchId] += SchCore;
	}
	for(int i = 1;i <= n;i++){			//ѧУ���SchId�Ǵ�1��ʼ�ģ�n������������������n��ѧУ����Ҫ�Ƚϵ�ѧУ���Ӧ����1��n 
		if(school[i] >= maxCore){
			num = i;
			maxCore = school[num];
		}
	}
	printf("%d %d",num,maxCore);
	return 0;
} 
