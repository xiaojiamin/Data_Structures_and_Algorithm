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
			if(a % 10 ==da){
				ia++;
			}
			a /= 10;
		}
		for(int i = 0;i < ia;i++){
			pa += da;
			da *=10; 
		}
			printf("%d\n",pa);
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
			printf("%d\n",pb);
		printf("%d",pa + pb);
	} 
	return 0;
}
