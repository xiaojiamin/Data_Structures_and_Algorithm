#include<cstdio>


int mouth[13][2] = {{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
    //用数组存储每个月的天数，直观，简单
    //数组mouth[0][0]赋值为{0,0}，方便下表与月份对应
bool isLeap(int year)
{   //判断是否为闰年
    //即，能被4整除并且不能被100整除的年份是闰年，能被400整除的也是闰年
    return(year % 4 ==0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    int t1,t2;
    int y1,y2,m1,m2,d1,d2;
    int temp;
    while(scanf("%d%d",&t1,&t2) != EOF){
        if(t1 > t2){
            temp = t1;
            t1 = t2;
            t2 = temp;
        }

        y1 = t1 / 10000;
        y2 = t2 / 10000;
        m1 = t1 % 10000 /100;
        m2 = t2 % 10000 /100;
        d1 = t1 % 1000000;
        d2 = t2 % 1000000;
        int ans = 1;
        while(y1 < y2 - 1){
            if(isLeap(y1))
               ans++;
            y1++;
            ans += 365;

        }
        while(m1 < m2 || d1 < d2){
            d1++;
            if(d1 == mouth[m1][isLeap(y1) + 1]){
                m1++;
                d1 = 1;
            }
            if(m1 == 13){
                y1++;
                m1 = 1;
            }
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
