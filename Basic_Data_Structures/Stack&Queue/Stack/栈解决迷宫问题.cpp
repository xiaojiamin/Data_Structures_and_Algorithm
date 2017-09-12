/*****************************************
Problem:�Թ�����
Copyright: Doux
Author: Pumpkinor
Date: 2016/12/25
Email: pumpkinor@163.com
*****************************************/
#include<stdio.h>

#define MaxSize 300
#define M 8
#define N 8


typedef struct{
    int row;    //���巽��������
    int column; //���巽��������
    int location;   //��ʾ��һ���ߵ����ڷ���ķ�λ��
    //��λ�涨Ϊ�����Ϸ�Ϊ��λ0��˳ʱ�뷽����ת�ֱ����ұߵ�Ϊ��λ1�������Ϊ��λ2����ߵ�Ϊ��λ3
}Box;   //���巽������
typedef struct{
    Box data[MaxSize];
    int top;
}StType;    //����˳��ջ����
int mg[N+2][M+2]={
    {1,1,1,1,1,1,1,1,1,1},
    {1,0,0,1,0,0,0,1,0,1},
    {1,0,0,1,0,0,0,1,0,1},
    {1,0,0,0,0,1,1,0,0,1},
    {1,0,1,1,1,0,0,0,0,1},
    {1,0,0,0,1,0,0,0,0,1},
    {1,0,1,0,0,0,1,0,0,1},
    {1,0,1,1,1,0,1,1,0,1},
    {1,1,0,0,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
    };  //�����Թ����飬1��ʾ�˷��鲻ͨ��0��ʾ����ͨ��

bool mgpath(int xi,int yi,int xe,int ye);

int main()
{
    if(!mgpath(1,1,M,N))
        printf("���Թ������޽⣡");
}
bool mgpath(int xi,int yi,int xe,int ye)
//xi,yi��ʾ������꣬xe,ye��ʾ��������
{
    int row,column,k,location,find;
    StType st;
    st.top = -1;
    st.top++;
    st.data[st.top].row = xi;
    st.data[st.top].column = yi;
    st.data[st.top].location = -1;
    mg[xi][yi] = -1;
    //�߹�һ�������ʱ��������Ԫ�ظ�Ϊ-1����ֹ���ظ����ߣ�������ѭ��
    while(st.top > -1){
    //ջ���յ�ʱ��ѭ��
        row = st.data[st.top].row;
        column = st.data[st.top].column;
        location = st.data[st.top].location;
        if(row == xe && column == ye){
            printf("�Թ���·�����£�\n");
            for(k = 0;k <= st.top;k++){
                printf("\t(%d,%d)",st.data[k].row,st.data[k].column);
                if((k + 1) % 5 == 0){
                    printf("\n");
                }
            }
            return true;
        }
        find = 0;
        while(location < 4 && find == 0){
            location++;
            switch(location){
                case 0:
                    row = st.data[st.top].row - 1;
                    column = st.data[st.top].column;
                    break;
                case 1:
                    row = st.data[st.top].row;
                    column = st.data[st.top].column + 1;
                    break;
                case 2:
                    row = st.data[st.top].row + 1;
                    column = st.data[st.top].column;
                    break;
                case 3:
                    row = st.data[st.top].row;
                    column = st.data[st.top].column - 1;
                    break;
            }
            if(mg[row][column] == 0){
                find = 1;
            }
        }
            if(find == 1){
                st.data[st.top].location = location;
                st.top++;
                st.data[st.top].row = row;
                st.data[st.top].column = column;
                st.data[st.top].location = -1;
                mg[row][column] = -1;
            }
            else{
                mg[st.data[st.top].row][st.data[st.top].column] = 0;
                st.top--;
            }
    }
    return false;
}
