#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("enter the number a");
	scanf("%d",&a);
	printf("enter the number b");
	scanf("%d",&b);
	printf("enter the number c");
	scanf("%d",&c);
	int result;
	result=a+(b*c);
	printf("%d",result);
	return 0;
}
