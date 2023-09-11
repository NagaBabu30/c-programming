#include<stdio.h>
int main()
{
	int num,i,t1=0,t2=1,a;
	printf("enter the number of terms");
	scanf("%d",&num);
	printf("fibonacci series:");
	for(i=1;i<=num;i++)
	{
	printf("%d",t1);
	a=t1+t2;
	t1=t2;
	t2=a;
}
return 0;
}
