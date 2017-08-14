#include<stdio.h>
#include<string.h>

int main()
{
	char a[15],b[15];
	while(scanf("%s%s",a,b) != EOF){
		int lena = strlen(a);
		int lenb = strlen(b);
		int suma = 0;
		int k = 1;
		if(a[0] == '-'){
			for(int i = lena - 1;i > 0;i--){
				if(a[i] != ','){
					suma += (a[i] - 48) * k;
					k *= 10;
				}
			}
			suma = - suma;
		}
		else{
			for(int i = lena - 1;i >= 0;i--){
				if(a[i] != ','){
					suma += (a[i] - 48) * k;
					k *= 10;
				}
			}
		}
		
		k = 1;
		if(b[0] == '-'){
			int sumb = 0;
			for(int i = lenb - 1;i > 0;i--){
				if(b[i] != ','){
					sumb += (b[i] - 48) * k;
					k *= 10;
				}
			}
			sumb = - sumb;
			suma += sumb;
		}
		else{
			for(int i = lenb - 1;i >= 0;i--){
				if(b[i] != ','){
					suma += (b[i] - 48) * k;
					k *= 10;
				}
			}
		}
		printf("%d\n",suma);
	}
	
	return 0;
} 
