#include<stdio.h>

const int MAXSIZE = 100010;
int school[MAXSIZE] = {0};

int main()
{
	int n,num = 0,maxCore = 0;
	scanf("%d",&n);
	int SchId,SchCore;
	for(int i = 0;i < n;i++){			//i从0到n-1，一共输入n个参赛者信息 
		scanf("%d%d",&SchId,&SchCore);
		school[SchId] += SchCore;
	}
	for(int i = 1;i <= n;i++){			//学校编号SchId是从1开始的，n个参赛者最多可能来自n个学校，需要比较的学校编号应该是1到n 
		if(school[i] >= maxCore){
			num = i;
			maxCore = school[num];
		}
	}
	printf("%d %d",num,maxCore);
	return 0;
} 
