#include<stdio.h>

struct Point{
	int x,y;
	Point(){}		//空构造函数，默认生成，用于不经初始化地定义pt[10] 
	Point(int _x,int _y):x(_x),y(_y){}		//构造函数，用于提供x和y的初始化
}pt[10];	//这里是在定义完结构体类型之后在大括号之外定义了pt[10] 这个结构体变量 
 
int main()
{
	int num = 0;
	for(int i = 1;i <= 3;i++){
		for(int j = 1;j <= 3;j++)
			pt[num++] = Point(i,j); 	//使用定义的构造函数 
	}	
	for(int i = 0;i < num;i++)
		printf("%d,%d\n",pt[i].x,pt[i].y);
	printf("\n");
	
	Point A;	//使用默认构造函数，不经初始化就定义结构体变量A 
	A.x = 3;
	A.y = 4;
	printf("%d,%d\n",A.x,A.y);
	
	Point B(5,6);	//使用定义构造函数，初始化定义结构体变量A 
	printf("%d,%d\n",B.x,B.y);
	return 0;
} 
