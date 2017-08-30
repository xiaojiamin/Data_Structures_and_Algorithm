#include<stdio.h>

typedef long long L;
int main()
{
    int a,b,d;
    int z[63],num;
    L sum;
    while(scanf("%d%d%d",&d,&a,&b) != EOF){
        if(d == 0)
            break;
        sum = (L)a + b;
        //需要进行强制类型转换
        num = 0;
        do{
            //十进制转化为d进制
            z[num++] = sum % d;
            //z中保存的是最后的结果
            sum /= d;
        }while(sum != 0);
        //用do...while循环而不用while循环是为了考虑到sum=0的这种特殊情况
        for(int i = num - 1;i >= 0;i--)
            printf("%d",z[i]);
        printf("\n");
    }
    return 0;
}
