#include<stdio.h>
int main()
{
	int i,j,a[3][3],flag;
	printf("enter array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j>i&&a[i][j]!=0)
			{
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("matrix is lower traingular");
	}
	return 0;
}
