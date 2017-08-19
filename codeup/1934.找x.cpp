#include<stdio.h>

int main()
{
	int n,x,k,a[210] = {0};
	while(scanf("%d",&n) != EOF){
		for(int i = 0;i < n;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&x);
		for(k = 0;k < n;k++){
			if(a[k] == x){
				printf("%d\n",k);
				break;
			}
			
		}
		if(k == n)
			printf("-1\n");
	}
	return 0;
} 
