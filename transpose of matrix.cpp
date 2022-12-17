#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],i,j;
	printf("enter element in matrix\n");
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("transpose of given matrix is \n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			b[i][j]=a[j][i];
			printf(" %d",b[i][j]);
					}
					printf("\n");
	}
	getche();
	return 0;
}
