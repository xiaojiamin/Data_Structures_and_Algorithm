#include<stdio.h>

const int maxl = 10000;

int main()
{
	int L,M,N = 0;	
	//L为树的总长度，M为接下来移走树的组数，N为多点测试轮数 
	int a[maxl] = {0};
	//a[maxl]数组用于存储树木的状态
	// 元素为1表示该下标处有树，元素为0表示该下标处树被移走了 
	int c,d,num[maxl] = {0};
	//c,d分别表示每组的一对数字，num[maxl]用于存储所有轮测试完成后的结果 
	while(scanf("%d%d",&L,&M) != EOF){
		if(L == 0 && M == 0)	break;
		
		//while...break；形式的多点测试方案 
		for(int i = 0;i <= L;i++){
			a[i] = 1;
		}
		//将从0到L这L+1个点赋值为1，表示种上了树 
		for(int i = 0;i < M;i++){
			scanf("%d%d",&c,&d);
			for(int j = c;j <=d;j++){
				a[j] = 0;
			}
		} 
		//输入M组c,d的值，将数组a的下标在c,d之间的元素赋值为0，表示移走了树 
		for(int i = 0;i <= L;i++){
			if(a[i] == 1){
				num[N]++;	
			}
		}
		//统计这一轮测试过后数组中剩余元素1的数量，存放到数组num中 
		N++;	//测试轮数 N+1 
	}
	for(int i = 0;i < N;i++)
		printf("%d\n",num[i]);	
		//打印输出结果 
	return 0;
} 
