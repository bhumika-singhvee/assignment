#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a number");
	scanf("%d",&b);
	printf("enter a number");
	scanf("%d",&c);
	printf("enter a number");
	scanf("%d",&d);
	int result;
	result=a+b+c-d;
	printf("%d",result);
	return 0;
}
