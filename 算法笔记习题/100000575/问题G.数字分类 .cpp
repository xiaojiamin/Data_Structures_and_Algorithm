#include<stdio.h>

int main()
{
    int numbers[1010] = {0};
    int N;
    int A1,A2,A3,A4,A5;
    int numA2;
    double numA4;
    while(scanf("%d",&N) != EOF){
        numA2 = A1 = A2 = A3 = A4 = A5 = 0;
		numA4 = 0.0;
		int flag1,flag2,flag3,flag4,flag5;
		flag1 = flag2 = flag3 = flag4 = flag5 = 0; 
        for(int i = 0;i < N;i++){
            scanf("%d",&numbers[i]);
            if(numbers[i] % 5 == 0){
                if(numbers[i] % 2 ==0){
                    A1 += numbers[i];
					flag1 = 1;
                }
            }
            else if(numbers[i] % 5 == 1){
                if(numA2 % 2 == 0){
                    A2 += numbers[i];
                }
                else{
                    A2 -= numbers[i];
                }
                numA2++;
				flag2 = 1;
            }
            else if(numbers[i] % 5 == 2){
                A3++;
				flag3 = 1;
            }
            else if(numbers[i] % 5 == 3){
                A4 += numbers[i];
                numA4++;
				flag4 = 1;
            }
            else if(numbers[i] % 5 == 4){
                if(numbers[i] > A5){
                    A5 = numbers[i];
                }
				flag5 = 1;
            }
        }
        double argA4 = A4 / numA4;
        if(flag1)
            printf("%d ",A1);
        else
            printf("N ");
        if(flag2)
            printf("%d ",A2);
        else
            printf("N ");
        if(flag3)
            printf("%d ",A3);
        else
            printf("N ");
        if(flag4)
            printf("%.1f ",argA4);
        else
            printf("N ");
        if(flag5)
            printf("%d",A5);
        else
            printf("N");


    }
    return 0;
}
