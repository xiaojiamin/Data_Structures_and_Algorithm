#include<stdio.h>

int main()
{
	int even,odd,n,a[1000] = {0};
	while(scanf("%d",&n) != EOF){
		even = odd = 0;
		for(int i = 0;i < n;i++){ 
			//用数组存储这n个数，在输入数据的同时对输入数据的奇偶进行判断
			//用even和odd统计奇偶数个数 
			scanf("%d",&a[i]);
			if(a[i] % 2 == 0)
				even++;
			else
				odd++;
		}
		if(even > odd)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
} 
