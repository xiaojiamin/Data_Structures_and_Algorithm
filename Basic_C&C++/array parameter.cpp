#include<stdio.h>
#include<math.h>

//�����1 3 5 
void change(int a[],int b[][5]){
	//��������Ϊ���������ݵ���������׵�ַ�����Ӻ����ж�����Ԫ���޸ľ��ǵ�ͬ�ڶ�ԭ��������޸�
	//���������Ϊ���������ǲ�����Ϊ����ֵ 
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
