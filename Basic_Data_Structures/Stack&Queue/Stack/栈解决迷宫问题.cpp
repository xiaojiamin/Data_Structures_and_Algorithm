/*****************************************
Problem:迷宫问题
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
    int row;    //定义方块所在行
    int column; //定义方块所在列
    int location;   //表示下一可走的相邻方块的方位号
    //方位规定为定义上方为方位0，顺时针方向旋转分别定义右边的为方位1，下面的为方位2，左边的为方位3
}Box;   //定义方块类型
typedef struct{
    Box data[MaxSize];
    int top;
}StType;    //定义顺序栈类型
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
    };  //定义迷宫数组，1表示此方块不通，0表示可以通过

bool mgpath(int xi,int yi,int xe,int ye);

int main()
{
    if(!mgpath(1,1,M,N))
        printf("该迷宫问题无解！");
}
bool mgpath(int xi,int yi,int xe,int ye)
//xi,yi表示入口坐标，xe,ye表示出口坐标
{
    int row,column,k,location,find;
    StType st;
    st.top = -1;
    st.top++;
    st.data[st.top].row = xi;
    st.data[st.top].column = yi;
    st.data[st.top].location = -1;
    mg[xi][yi] = -1;
    //走过一个方块的时候将其数组元素改为-1，防止其重复行走，陷入死循环
    while(st.top > -1){
    //栈不空的时候循环
        row = st.data[st.top].row;
        column = st.data[st.top].column;
        location = st.data[st.top].location;
        if(row == xe && column == ye){
            printf("迷宫的路径如下：\n");
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
