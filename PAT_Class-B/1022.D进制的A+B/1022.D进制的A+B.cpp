#include<stdio.h>

int main()
{
    int a,b,d,sum;
    while(scanf("%d%d%d",&a,&b,&d) != EOF){
        sum = a + b;
        int z[31],num = 0;
        do{
            //十进制转化为d进制
            z[num++] = sum % d;
            //z中保存的是最后的结果
            sum /= d;
        }while(sum != 0);
        //用do...while循环而不用while循环是为了考虑到sum=0的这种特殊情况
        for(int i = num - 1;i >= 0;i--)
            printf("%d",z[i]);
    }
    return 0;
}
