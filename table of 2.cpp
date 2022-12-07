#include<stdio.h>
#include<conio.h>
int main()
{
int n=2,m=1,p;;

printf("Welcome in c\n");
while(m<=10){
	p = n*m;
	printf("%d * %d = %d\n",n,m,p);
	m= m+1;
}
getch();
}
