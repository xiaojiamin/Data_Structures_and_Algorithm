#include<cstdio>

int main()
{
    int s1,p1,f1;
    int s2,p2,f2;
    int c1,b1,j1;
    int c2,b2,j2;
    int n;
    char a,b,c;
    while(scanf("%d",&n) != EOF){
        s1 = s2 = p1 = p2 = f1 = f2 = 0;
        c1 = c2 = b1 = b2 = j1 = j2 = 0;
        for(int i = 0;i < n;i++){
            scanf("%c",&c);
            scanf("%c %c",&a,&b);
            if(a == b){
                p1++;
                p2++;
            }
            else if(a == 'C'){
                if(b == 'B'){
                    s2++;
                    f1++;
                    b2++;
                }
                else{
                    s1++;
                    f2++;
                    c1++;
                }
            }
            else if(a == 'J'){
                if(b == 'C'){
                    s2++;
                    f1++;
                    c2++;
                }
                else{
                    s1++;
                    f2++;
                    j1++;
                }
            }
            else if(a == 'B'){
                if(b == 'J'){
                    s2++;
                    f1++;
                    j2++;
                }
                else{
                    s1++;
                    f2++;
                    b1++;
                }
            }
        }
        printf("%d %d %d\n",s1,p1,f1);
        printf("%d %d %d\n",s2,p2,f2);
        if(b1 > c1){
            if(j1 > b1){
                printf("J ");
            }
            else{
                printf("B ");
            }
        }
        if(c1 > b1){
            if(j1 > c1){
                printf("J ");
            }
            else{
                printf("C ");
            }
        }
        if(c1 == b1){
            if(j1 > c1){
                printf("J ");
            }
            else{
                printf("B ");
            }
        }
        if(b2 > c2){
            if(j2 > b2){
                printf("J");
            }
            else{
                printf("B");
            }
        }
        if(c2 > b2){
            if(j2 > c2){
                printf("J");
            }
            else{
                printf("C");
            }
        }
        if(c2 == b2){
            if(j2 > c2){
                printf("J ");
            }
            else{
                printf("B ");
            }
        }
    }

    return 0;
}
