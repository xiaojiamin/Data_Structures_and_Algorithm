#include<stdio.h>

int main()
{
	int a,b,da,db;
	while(scanf("%d%d%d%d",&a,&da,&b,&db) != EOF){
		int ia = 0,ib = 0;
		int pa,pb;
		pa = 0;
		pb = 0;
		while(a){
			//循环统计a中含有的da的个数 
			if(a % 10 ==da){
				ia++;
			}
			a /= 10;
		}
		for(int i = 0;i < ia;i++){
			//由da的值和其个数得到pa 
			pa += da;
			da *=10; 
		}
		//pb的得到过程与pa一致 
		while(b){
			if(b % 10 ==db){
				ib++;
			}
			b /= 10;
		}
		for(int i = 0;i < ib;i++){
			pb += db;
			db *=10;
		}
		printf("%d\n",pa + pb);
	} 
	return 0;
}
