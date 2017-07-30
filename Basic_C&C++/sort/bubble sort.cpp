#include<stdio.h>
#include<math.h>

int main()
{
	int a[10]={6,5,2,1,3} ;
	//i表示排序进行轮数，一共需进行n-1轮冒泡排序 
	for(int i = 1; i <= 4; i++){
		//第i轮排序时，从a[0]到a[n-1-i]都与他们的下一个元素进行比较
		for(int j = 0; j < 5-i; j++){
			//若a[j]>a[j+1]则进行交换元素 否则则保持不变 
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			} 
		} 
	}
	for(int i = 0;i < 5; i++){
		printf("%d",a[i]);
	}
	return 0;
} 
