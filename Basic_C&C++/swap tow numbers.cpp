 #include<stdio.h>
#include<math.h>

//������
//�����a = 20 b = 10 
void swap1(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
} 

//�������ĵ��ʹ���1 
 void errswap1(int *a,int *b){
 	//��Ҫ��һ��ʼ�͸�tempһ�����ʵĳ�ʼ��ֵ ��int x�� temp = &x�� 
	int *temp;	 //ָ�����tempδ����ʼ������ŵĵ�ַ������� 
	*temp = *a;		//���ǽ�a��ָ��ĵ�ַ�е�Ԫ�ش�ŵ�temp��ָ��ĵ�ַ������temp�ĳ�ʼ��ַ������ģ���tempָ��ϵͳ�����ռ�ʱ���ͻ���� 
	*a = *b;
	*b = *temp;
} 

//�������ĵ��ʹ���2 
void errswap2(int *a,int *b){
	//�������� ֻ�ǽ����˸��ƽ�����������ַ��ʵ�εĵ�ַ��δ����  
	int *temp = a;
	a = b;
	b = temp;
} 

//������������ͨ��ָ�������������
void righterrswap2(int *&a,int *&b){
	//ԭ�������� ֻ�ǽ����˸��ƽ�����������ַ��ʵ�εĵ�ַ��δ����
	//��ָ������ÿ���ʹ�öԴ��ݽ�����ָ��Ĳ������õ�ԭָ�������ȥ  
	int *temp = a;
	a = b;
	b = temp;
} 
 
//������ 
//�����a = 20 b = 10 
void swap2(int &a,int &b){
	//�����ñ����Ĳ������Ƕ�ԭ�����Ĳ��� 
	int temp;
	temp = a;
	a = b;
	b = temp;
} 

int main()
{
	//����һ 
	//�����a = 20 b = 10 
	int a1 = 10,b1 = 20;
	int temp;
	temp = a1;
	a1 = b1;
	b1 = temp;
	printf("a = %d b = %d\n",a1,b1); 
	//��ָ�� ����a2��b2�ĵ�ַ 
	//�����a = 20 b = 10 
	int a2 = 10,b2 = 20;
	int *p1 = &a2,*p2 = &b2; 
	swap1(p1,p2);
	printf("a = %d b = %d\n",a2,b2); 
	//��tempû��ָ��ϵͳ��������ʱ�ܽ���ab��ֵ 
	//�����a = 10 b = 20 ���ߴ��� 
	errswap1(p1,p2);
	printf("a = %d b = %d\n",a2,b2); 
	
	//ֻ�ǽ������βε�ָ�򣬲�û�н���ʵ�ε�ָ�� 
	//�����a = 10 b = 20 
	errswap2(p1,p2);
	printf("a = %d b = %d\n",*p1,*p2); 
	
	//ʹ��ָ������ÿ��Ըı�ʵ�ε�ָ��
	//�����a = 20 b = 10  
	righterrswap2(p1,p2);
	printf("a = %d b = %d\n",*p1,*p2); 
	
	//���� a��b�൱��a3��b3�ı��� ����洢�ռ� 
	int a3 = 10,b3 = 20;
	swap2(a3,b3);
	printf("a = %d b = %d\n",a3,b3); 
	
	return 0;
} 
