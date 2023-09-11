#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	int m1,m2,m3;
	int total;
	float cgpa;
}s;
void main()
{
	printf("enter the name");
	scanf("%s",s.name);
	printf("enter the roll");
	scanf("%d",s.roll);
	printf("enter the marks m1,m2,m3");
	scanf("%d%d%d",s.m1,s.m2,s.m3);
	s.total=s.m1+s.m2+s.m3;
	s.cgpa=s.total/3;
	printf("%s\n",s.name);
	printf("%d\n",s.roll};
	printf("%d%d%d\n",s.m1,s.m2,s.m3);
	printf("%d\n",s.total);
	printf("%f\n",s.cgpa);
	}
