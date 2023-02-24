#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j;
	int r1,c1,r2,c2,k,sum=0;
	printf("enter no. of row and columns of first matrix:");
	scanf("%d%d",&r1,&c1);
	printf("enter no. of row and columns of second matrix:");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("the matrix cannot multiplied with each other");
	}
	else
	{
		printf("enter the element of first matrix (%d*%d)",r1,c1);
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter the element of second matrix (%d*%d)",r2,c2);
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<r2;k++)
				{
					sum+=a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
		printf("product of matrix are:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
}
