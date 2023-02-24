#include<stdio.h>
void main()
{
	int a[3][4],i,j,c[3][4],b[3][4];
	printf("enter the element of 3*4 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the element of B matrix are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the element of matrix of C are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}
