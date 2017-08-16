#include<stdio.h>

typedef long long LL;

int main()
{
	int T;	//	int型的范围是-2^32次方到2^32-1
	LL a,b,c;
	while(scanf("%d",&T) != EOF){
		if(T > 0 && T <= 10){
		
		int t = T;
		while(T){
			--T;
			scanf("%lld%lld%lld",&a,&b,&c);		//注意long long 型用%lld输入
			if(a + b > c){
				printf("Case #%d: true\n",t - T);
			}
			else{
				printf("Case #%d: false\n",t - T);
			}	
		}
		}
	}
	return 0;
} 
