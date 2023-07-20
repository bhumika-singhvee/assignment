#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a number");
	scanf("%d",&b);
	printf("enter a number");
	scanf("%d",&c);
	printf("enter a number");
	scanf("%d",&d);
	printf("enter a number");
	scanf("%d",&e);
	printf("enter a number");
	scanf("%d",&f);
	int result;
	result=a+b*c*(d-e*f);
	printf("%d",result);
	return 0;
}
