#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&a>c)
	printf("largest number is a");
	if(b>c&b>a)
	printf("largest number is b");
	else
	printf("largest number is c");
	return 0;	
}
