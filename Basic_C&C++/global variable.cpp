#include<stdio.h>
#include<math.h>

int x;
//Êä³ö£º11 
void change()
{
	x = x + 1;
} 
int main()
{
	x = 10;
	change();
	printf("%d",x);
	return 0;
} 
