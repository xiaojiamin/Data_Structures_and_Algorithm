#include<stdio.h>
#include<string.h>

const int MaxSize = 1010;

typedef struct {
	char num[100];
	//字符串会更容易进行输出各种格式的学号，不用考虑数字的格式输出等
	char name[100];
	//存放姓名的数组空间一定够要大
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
                        break;  //找到相等的元素后直接跳出查找循环
                    }
                }
                if(i == N){
                //当循环计数器i等于数组元素个数时表示没有找到匹配的答案
                    printf("No Answer!\n");
                }
            }


	}
	return 0;
}
