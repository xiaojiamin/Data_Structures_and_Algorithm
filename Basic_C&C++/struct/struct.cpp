#include<stdio.h>

struct Point{
	int x,y;
	Point(){}		//�չ��캯����Ĭ�����ɣ����ڲ�����ʼ���ض���pt[10] 
	Point(int _x,int _y):x(_x),y(_y){}		//���캯���������ṩx��y�ĳ�ʼ��
}pt[10];	//�������ڶ�����ṹ������֮���ڴ�����֮�ⶨ����pt[10] ����ṹ����� 
 
int main()
{
	int num = 0;
	for(int i = 1;i <= 3;i++){
		for(int j = 1;j <= 3;j++)
			pt[num++] = Point(i,j); 	//ʹ�ö���Ĺ��캯�� 
	}	
	for(int i = 0;i < num;i++)
		printf("%d,%d\n",pt[i].x,pt[i].y);
	printf("\n");
	
	Point A;	//ʹ��Ĭ�Ϲ��캯����������ʼ���Ͷ���ṹ�����A 
	A.x = 3;
	A.y = 4;
	printf("%d,%d\n",A.x,A.y);
	
	Point B(5,6);	//ʹ�ö��幹�캯������ʼ������ṹ�����A 
	printf("%d,%d\n",B.x,B.y);
	return 0;
} 
