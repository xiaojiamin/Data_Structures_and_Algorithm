#include<stdio.h>
#include<math.h>

const double eps = 1e-8;	//将极小数eps定义为10的-8次方
const double Pi = acos(-1.0);
//为了方便将比较操作写成宏定义的形式 

//等于运算符 == 
//由于浮点数在计算机中存储是不精确的，所以a,b相等即a的取值区间在[b-eps,b+eps] 也即a-b属于[-eps,eps] 
#define Equ(a,b) ((fabs((a) - (b))) < (eps))
//大于运算符 > 
//a大于b 即a要大于b+eps 也即a-b>eps 
#define More(a,b) (((a) - (b)) > (eps)) 
//小于运算符 < 
//a小于b 即 a要小于b-eps 也即a-b<-eps 
#define Less(a,b) (((a) - (b)) < (-eps)) 
//大于等于运算符 >= 
//等于要求a在[b-eps,b+eps]之间，大于要a>b+eps a要大于或等于b 即等于运算符和大于运算符区间的和 a>b-eps 也即 a-b>-eps 
#define MoreEqu(a,b) (((a) - (b)) > (-eps)) 
//小于等于运算符 <= 
//等于要求a在[b-eps,b+eps]之间，小于要a<b-eps a要小于或等于b 即等于运算符和小于运算符区间的和 a<b+eps 也即 a-b<eps 
#define LessEqu(a,b) (((a) - (b)) < (eps)) 

int main()
{
	double a,b;
	
	printf("please input tow double number between 0.00 to 15.00:\n");
	scanf("%lf,%lf",&a,&b);
	//double型必须要用%lf输入,这里%f无法输入double   输出时可以用%f 
	//float		%f
	//int 	%d
	//long long 	%lld 
	//char 	%c
	//string	%s
	if(Equ(a,b)){
		printf("a = b\n");
	}else if(More(a,b)){
		printf("a > b\n");
	}else if(Less(a,b)){
		printf("a < b\n");
	}
	if(MoreEqu(a,b)){
		printf("a >= b\n");
	}
	if(LessEqu(a,b)){
		printf("a <= b\n");
	}
	
		
	return 0;
} 
