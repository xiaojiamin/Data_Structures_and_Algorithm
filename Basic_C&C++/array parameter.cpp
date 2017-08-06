#include<stdio.h>
#include<math.h>

//输出：1 3 5 
void change(int a[],int b[][5]){
	//数组名作为参数，传递的是数组的首地址，在子函数中对数组元素修改就是等同于对原数组进行修改
	//数组可以作为参数，但是不能作为返回值 
	a[0] = 1;
	a[1] = 3;
	a[2] = 5;
	b[0][0] = 1;
}

int main()
{
	int a[3] = {0};
	int b[5][5] = {0};
	change(a,b);
	for(int i = 0;i < 3;i++)
		printf("%d ",a[i]);
	return 0;
}  
