#include<stdio.h>

typedef long long LL;

int main()
{
	int T;	//	int型的范围是-2^32到2^32-1
	LL a,b,c;
	while(scanf("%d",&T) != EOF){
		if(T > 0 && T <= 10){
		
		int t = T;
		while(T){
			--T;
			scanf("%lld%lld%lld",&a,&b,&c);		//输出long long 要用%lld 
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
