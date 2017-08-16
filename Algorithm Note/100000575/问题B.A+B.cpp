#include<stdio.h>
#include<string.h>

int main()
{
	char a[15],b[15];
	while(scanf("%s%s",a,b) != EOF){
		//用字符串来记录输入，以方便消灭逗号 
		int lena = strlen(a);
		int lenb = strlen(b);
		int suma = 0;
		int k = 1;
		if(a[0] == '-'){
			//处理输入数字正负问题，这样处理颇为繁琐，不知到能不能写的简单一些 
			for(int i = lena - 1;i > 0;i--){
				if(a[i] != ','){
					suma += (a[i] - 48) * k;
					k *= 10;
					//倒序将每一位数字由字符串还原成数字，消灭其中的逗号 
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
		//a和b的处理方式一致，最后用suma存储最后结果，只是为了少定义一个变量节省一波空间 
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
