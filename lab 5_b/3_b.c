#include<stdio.h>
void main()
{
	int a[3][3],i,j,n[3][3];
	printf("enter the element of 3*3 matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("element of 3*3 matrix are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]<5)
			{
				n[i][j]=15;
			}
			else
			{
				n[i][j]=a[i][j];
			}
			printf("%d\t",n[i][j]);
		}
		printf("\n");
	}
	
}
