#include<stdio.h>

#define max 100

int main()
{

    int a[max],b[max];
    int n,m,YES;
    while(scanf("%d",&n) != EOF){
        for(int i = 0;i < n;i++){
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);
        for(int i = 0;i < m;i++){
            scanf("%d",&b[i]);
        }
        for(int i = 0;i < m;i++){
            YES = 0;
            for(int j = 0;j < n;j++){
                if(a[j] == b[i]){
                    YES++;
                    break;
                }
            }
            if(YES)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
