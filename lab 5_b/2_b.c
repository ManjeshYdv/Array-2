#include<stdio.h>
void main()
{
	int a[3][3],i,j,sum=0;
	printf("enter element of 3*3 matrixa: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum+=a[i][j];
		}
	}
	printf("sum of all element of matrix=%d",sum);
	
}
