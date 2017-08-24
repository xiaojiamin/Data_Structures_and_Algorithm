#include<stdio.h>

int dis[100010] = {0};
//saving the distance between the i-th and the first exits
//dis[1] = 0;
//dis[n+1] is between N-th and 1-th
int main()
{
    int n,k,twodis,sum,pairdis;
    while(scanf("%d",&n) != EOF){
            sum = 0;
        for(int i = 2;i <= n + 1;i++){
            scanf("%d",&twodis);
            sum += twodis;
            dis[i] =sum;
        }
        scanf("%d",&k);
        int a,b;
        for(int i = 0;i < k;i++){
            scanf("%d%d",&a,&b);
            if(a > b){
                int temp;
                temp = a;
                a = b;
                b = temp;
            }
            pairdis = dis[b] - dis[a];
            if(pairdis >= sum - pairdis){
                printf("%d",sum - pairdis);
            }
            else{
                printf("%d",pairdis);
            }
        }

    }

	return 0;
}
