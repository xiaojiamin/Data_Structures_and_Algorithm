#include<stdio.h>
#include<string.h>

const int MaxSize = 1010;

typedef struct {
	char num[100];
	//�ַ���������׽���������ָ�ʽ��ѧ�ţ����ÿ������ֵĸ�ʽ�����
	char name[100];
	//�������������ռ�һ����Ҫ��
	char sex[10];
	int age;
}Student;

int main()
{
	int N,M;
	char fNum[100];
	Student s[MaxSize];
	int i,j;
	while(scanf("%d",&N) != EOF){

		for(i = 0;i < N;i++){
			scanf("%s%s%s%d",s[i].num,s[i].name,s[i].sex,&s[i].age);
		}


		scanf("%d",&M);
        for(j = 0;j < M;j++){
                scanf("%s",fNum);
                for(i = 0;i < N;i++){
                    if(strcmp(fNum,s[i].num) == 0){
                        printf("%s %s %s %d\n",s[i].num,s[i].name,s[i].sex,s[i].age);
                        break;  //�ҵ���ȵ�Ԫ�غ�ֱ����������ѭ��
                    }
                }
                if(i == N){
                //��ѭ��������i��������Ԫ�ظ���ʱ��ʾû���ҵ�ƥ��Ĵ�
                    printf("No Answer!\n");
                }
            }


	}
	return 0;
}
