#include<stdio.h>

int main()
{
    int a,b,d,sum;
    while(scanf("%d%d%d",&a,&b,&d) != EOF){
        sum = a + b;
        int z[31],num = 0;
        do{
            //ʮ����ת��Ϊd����
            z[num++] = sum % d;
            //z�б���������Ľ��
            sum /= d;
        }while(sum != 0);
        //��do...whileѭ��������whileѭ����Ϊ�˿��ǵ�sum=0�������������
        for(int i = num - 1;i >= 0;i--)
            printf("%d",z[i]);
    }
    return 0;
}
