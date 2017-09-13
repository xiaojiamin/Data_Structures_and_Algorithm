/*****************************************
Description:�廪��ѧ��ε��������ʵ��
Copyright: Doux
Author: Pumpkinor
Date: 2016/12/25
Email: pumpkinor@163.com
*****************************************/

#include<stdio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define STACK_INIT_SIZE 100 //�洢�ռ�ĳ�ʼ������
#define STACKINCREMENT 10   //�洢�ռ��������

/*********˳��洢ջ�ı�ʾ��ʵ��*********/
typedef int Status;
typedef int ElemType;

/*********ջ��˳��洢��ʾ*********/
typedef struct
{
    ElemType *top;  //ջ��ָ��
    ElemType *base; //ջ��ָ��
    int stacksize;  //��ǰ�ѷ���Ĵ洢�ռ䣬��Ԫ��Ϊ��λ
}SqStack;

/*********���������ĺ���ԭ��˵��*********/
Status InitStack(SqStack &S);
    //����һ����ջ
Status DestroyStack(SqStack &S);
    //����ջS
Status ClearStack(SqStack &S);
    //��S��Ϊ��ջ
Status StackEmpty(SqStack S);
    //���SΪ��ջ���򷵻�OK������ͷ���ERROR
int StackLength(SqStack S);
    //����S�е�Ԫ�ظ�������ջ�ĳ���
Status GetTop(SqStack S,ElemType &e);
    //��ջS���գ�����e����S��ջ��Ԫ��ֵ��������OK�����򷵻�ERROR
Status Push(SqStack &S,ElemType e);
    //����Ԫ��e��Ϊջ��Ԫ��
Status Pop(SqStack &S,ElemType &e);
    //��ջS���գ���ɾ��ջ��Ԫ�ز���e����S��ջ��Ԫ��ֵ��������OK�����򷵻�ERROR
Status StackTraverse(SqStack S);
//�������ջ

/*********������*********/
int main()
{
    SqStack S;
    printf("����һ����ջ\n");
    InitStack(S);
    int i,n ;
    printf("����ջ�ĳ���:\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        printf("����ջ�ĵ�%d��Ԫ��\n",i);
        ++S.top;
        scanf("%d",S.top-1);
    }
    cout << "������ջ�ǿ�ջ�𣿣�����" << endl;
    if (StackEmpty(S) == 1)
        cout << "NO !!!" << endl;
    else
        cout << "YES !!!" << endl;
    cout << "�������ջ�ĳ��ȡ���" << endl;
    int m;
    m = StackLength(S);
    cout << "ջ�ĳ�����:" << endl;
    cout << m << endl;
    cout << "�������ջ�е�����Ԫ��:" << endl;
    StackTraverse(S);
    cout << endl;
    cout << "�������ջ��Ԫ�ء���" << endl;
    int e;
    e = GetTop(S, e);
    cout << "ջ��Ԫ����:" << endl;
    cout << e << endl;
    cout << "����ջ������Ԫ�ء���" << endl;
    cout << "������Ҫ�����Ԫ�ص���ֵ:" << endl;
    cin >> e;
    Push(S,e);
    cout << "����ջ�е�Ԫ����:" << endl;
    StackTraverse(S);
    cout << endl;
    cout << "����ջ��ɾ��Ԫ�ء���" << endl;
    e = Pop(S,e);
    cout << "��ɾ����Ԫ����:" << endl;
    cout << e << endl;
    cout << "����ջ�е�Ԫ����:" << endl;
    StackTraverse(S);
    cout << endl;
    cout << "�������ջ����" << endl;
    ClearStack(S);
    cout << "����ջ�е�Ԫ����:" << endl;
    StackTraverse(S);
    cout << "��������ջ����" << endl;
    if(DestroyStack(S)==1)
        cout << "����ջ�ɹ�" << endl;
    else
        cout << "����ջʧ��" << endl;
    cout << "��ϲ���ɹ�������еĹ���,�Ͼ�����ô˧!!!" << endl;
    return 0;
}

/*********���������ĺ����㷨����*********/
Status InitStack(SqStack &S)
    //����һ����ջ
{
    S.base = (ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType));
    if(!S.base)
        exit(OVERFLOW); //�洢����ʧ��
    S.top = S.base;
    S.stacksize = STACK_INIT_SIZE;
    return OK;
}

Status DestroyStack(SqStack &S)
    //����ջS
{
    S.top = NULL;   //ջ��ָ��ָ���
    free(S.base);
    S.stacksize = 0;
    return OK;
}

Status ClearStack(SqStack &S)
    //��S��Ϊ��ջ
{
    S.top = S.base;
    return OK;
}

Status StackEmpty(SqStack S)
    //���SΪ��ջ���򷵻�OK������ͷ���ERROR
{
    if(S.top == S.base)
        return OK;
    else
        return ERROR;
}

int StackLength(SqStack S)
    //����S�е�Ԫ�ظ�������ջ�ĳ���
{
    if(S.top == S.base)
        return 0;
    else
        return(S.top - S.base);
}

Status GetTop(SqStack S,ElemType &e)
    //��ջS���գ�����e����S��ջ��Ԫ��ֵ��������OK�����򷵻�ERROR
{
    if(S.top == S.base)
        return ERROR;
    else{
        e = *(S.top - 1);
        return OK;
    }
}

Status Push(SqStack &S,ElemType e)
    //����Ԫ��e��Ϊջ��Ԫ��
{
    if(S.top - S.base >= S.stacksize){
        //ջ����׷�Ӵ洢�ռ�
        S.base = (ElemType *)realloc(S.base,(S.stacksize + STACKINCREMENT) * sizeof(ElemType));
        if(!S.base)
            exit(OVERFLOW); //�洢����ʧ��
        S.top = S.base + S.stacksize;
        S.stacksize += STACKINCREMENT;
    }
    *S.top = e;
    S.top++;
    return OK;
}

Status Pop(SqStack &S,ElemType &e)
    //��ջS���գ���ɾ��ջ��Ԫ�ز���e����S��ջ��Ԫ��ֵ��������OK�����򷵻�ERROR
{
    if(S.top == S.base)
        return ERROR;
    e = *--S.top;
    return OK;
}

Status StackTraverse(SqStack S)
//�������ջ
{
    if (S.base == NULL)
        return ERROR;
    if (S.top == S.base)
        printf("ջ��û��Ԫ��");
    ElemType *p;
    p = S.top;
    while (p > S.base)
    {
        p--;
        printf("%d ",*p);
    }
    return OK;
}