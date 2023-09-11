#include<stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	printf("enter the year is leap year",year);
	else
	printf("enter the number is not leap year",year);
	return 0;
}
