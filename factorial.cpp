#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,f=1;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%d factorial =%d",n,f);
	getch();
	return 0;
}


