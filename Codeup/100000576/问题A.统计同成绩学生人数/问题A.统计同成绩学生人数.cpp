#include<stdio.h>

const int max = 1000;
int main()
{
    int n,numfind,counter,grade[max];
    while(scanf("%d",&n) != EOF){
        if(n == 0)
            break;
        counter = 0;
        for(int i = 0;i < n;i++)
            scanf("%d",&grade[i]);
        scanf("%d",&numfind);
        for(int i = 0;i < n;i++){
            if(grade[i] == numfind)
                counter++;
        }
        printf("%d\n",counter);
    }
    return 0;
}
