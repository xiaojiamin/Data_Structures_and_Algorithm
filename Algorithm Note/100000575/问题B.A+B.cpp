#include<stdio.h>
#include<string.h>

int main()
{
	char a[15],b[15];
	while(scanf("%s%s",a,b) != EOF){
		//���ַ�������¼���룬�Է������𶺺� 
		int lena = strlen(a);
		int lenb = strlen(b);
		int suma = 0;
		int k = 1;
		if(a[0] == '-'){
			//�������������������⣬����������Ϊ��������֪���ܲ���д�ļ�һЩ 
			for(int i = lena - 1;i > 0;i--){
				if(a[i] != ','){
					suma += (a[i] - 48) * k;
					k *= 10;
					//����ÿһλ�������ַ�����ԭ�����֣��������еĶ��� 
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
		//a��b�Ĵ���ʽһ�£������suma�洢�������ֻ��Ϊ���ٶ���һ��������ʡһ���ռ� 
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
