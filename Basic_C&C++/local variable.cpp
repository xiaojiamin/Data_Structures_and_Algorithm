#include<stdio.h>
#include<math.h>


//�����10
void change(int x)//�˴�xΪ��ʽ���� 
{
	x = x + 1;
} 
int main()
{
	int x = 10;
	change(x);//�˴�xΪʵ�ʲ��� 
	//�����Ĵ��η�ʽΪֵ���ݣ�������ʵ�ε�ֵ���ݸ��β� 
	printf("%d",x);
	return 0;
} 
