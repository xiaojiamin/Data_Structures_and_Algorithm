#include<stdio.h>
#include<math.h>

const double eps = 1e-8;	//����С��eps����Ϊ10��-8�η�
const double Pi = acos(-1.0);
//Ϊ�˷��㽫�Ƚϲ���д�ɺ궨�����ʽ 

//��������� == 
//���ڸ������ڼ�����д洢�ǲ���ȷ�ģ�����a,b��ȼ�a��ȡֵ������[b-eps,b+eps] Ҳ��a-b����[-eps,eps] 
#define Equ(a,b) ((fabs((a) - (b))) < (eps))
//��������� > 
//a����b ��aҪ����b+eps Ҳ��a-b>eps 
#define More(a,b) (((a) - (b)) > (eps)) 
//С������� < 
//aС��b �� aҪС��b-eps Ҳ��a-b<-eps 
#define Less(a,b) (((a) - (b)) < (-eps)) 
//���ڵ�������� >= 
//����Ҫ��a��[b-eps,b+eps]֮�䣬����Ҫa>b+eps aҪ���ڻ����b ������������ʹ������������ĺ� a>b-eps Ҳ�� a-b>-eps 
#define MoreEqu(a,b) (((a) - (b)) > (-eps)) 
//С�ڵ�������� <= 
//����Ҫ��a��[b-eps,b+eps]֮�䣬С��Ҫa<b-eps aҪС�ڻ����b �������������С�����������ĺ� a<b+eps Ҳ�� a-b<eps 
#define LessEqu(a,b) (((a) - (b)) < (eps)) 

int main()
{
	double a,b;
	
	printf("please input tow double number between 0.00 to 15.00:\n");
	scanf("%lf,%lf",&a,&b);
	//double�ͱ���Ҫ��%lf����,����%f�޷�����double   ���ʱ������%f 
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
