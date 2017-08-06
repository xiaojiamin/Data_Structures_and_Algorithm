 #include<stdio.h>
#include<math.h>

//方法二
//输出：a = 20 b = 10 
void swap1(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
} 

//方法二的典型错误1 
 void errswap1(int *a,int *b){
 	//需要在一开始就给temp一个合适的初始化值 如int x； temp = &x； 
	int *temp;	 //指针变量temp未被初始化，存放的地址是随机的 
	*temp = *a;		//这是讲a所指向的地址中的元素存放到temp所指向的地址，由于temp的初始地址是随机的，当temp指向系统工作空间时，就会出错 
	*a = *b;
	*b = *temp;
} 

//方法二的典型错误2 
void errswap2(int *a,int *b){
	//错误在于 只是交换了复制进来的两个地址，实参的地址并未交换  
	int *temp = a;
	a = b;
	b = temp;
} 

//上述方法可以通过指针的引用来改正
void righterrswap2(int *&a,int *&b){
	//原错误在于 只是交换了复制进来的两个地址，实参的地址并未交换
	//用指针的引用可以使得对传递进来的指针的操作作用到原指针变量上去  
	int *temp = a;
	a = b;
	b = temp;
} 
 
//方法三 
//输出：a = 20 b = 10 
void swap2(int &a,int &b){
	//对引用变量的操作就是对原变量的操作 
	int temp;
	temp = a;
	a = b;
	b = temp;
} 

int main()
{
	//方法一 
	//输出：a = 20 b = 10 
	int a1 = 10,b1 = 20;
	int temp;
	temp = a1;
	a1 = b1;
	b1 = temp;
	printf("a = %d b = %d\n",a1,b1); 
	//用指针 传递a2和b2的地址 
	//输出：a = 20 b = 10 
	int a2 = 10,b2 = 20;
	int *p1 = &a2,*p2 = &b2; 
	swap1(p1,p2);
	printf("a = %d b = %d\n",a2,b2); 
	//当temp没有指向系统工作区间时能交换ab的值 
	//输出：a = 10 b = 20 或者错误 
	errswap1(p1,p2);
	printf("a = %d b = %d\n",a2,b2); 
	
	//只是交换了形参的指向，并没有交换实参的指向 
	//输出：a = 10 b = 20 
	errswap2(p1,p2);
	printf("a = %d b = %d\n",*p1,*p2); 
	
	//使用指针的引用可以改变实参的指向
	//输出：a = 20 b = 10  
	righterrswap2(p1,p2);
	printf("a = %d b = %d\n",*p1,*p2); 
	
	//引用 a和b相当于a3和b3的别名 共享存储空间 
	int a3 = 10,b3 = 20;
	swap2(a3,b3);
	printf("a = %d b = %d\n",a3,b3); 
	
	return 0;
} 
