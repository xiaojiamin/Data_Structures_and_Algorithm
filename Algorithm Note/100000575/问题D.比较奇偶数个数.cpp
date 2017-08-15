#include<stdio.h>

int main()
{
	int even,odd,n,a[1000] = {0};
	while(scanf("%d",&n) != EOF){
		even = odd = 0;
		for(int i = 0;i < n;i++)
			scanf("%d",&a[i]);
		for(int i = 0;i < n;i++){
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
