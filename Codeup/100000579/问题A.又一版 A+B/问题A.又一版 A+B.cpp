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
        //��Ҫ����ǿ������ת��
        num = 0;
        do{
            //ʮ����ת��Ϊd����
            z[num++] = sum % d;
            //z�б���������Ľ��
            sum /= d;
        }while(sum != 0);
        //��do...whileѭ��������whileѭ����Ϊ�˿��ǵ�sum=0�������������
        for(int i = num - 1;i >= 0;i--)
            printf("%d",z[i]);
        printf("\n");
    }
    return 0;
}
