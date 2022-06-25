#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You will be vacinated");
	}
	else
	{
		printf("You will not be vacinated");
	}
	getch();
}
