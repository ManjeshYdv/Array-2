#include<stdio.h>
void main()
{
	int a[100],b[100],c[200],i,n;
	printf("enter the size of array  you want:");
	scanf("%d",&n);
	printf("enter the %d element of A:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	printf("enter the %d element of B array:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		c[i+n]=b[i];
	}
	printf("\nsingle array of after emarge:\n");
	for(i=0;i<n*2;i++)
	{
		printf("%d\t",c[i]);
	}
}
