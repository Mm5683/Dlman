#include<stdio.h>
void main(int argc,char argv[])
{
	int i,j,n=10;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			printf("%d %d\n",i,j);
		}

	}



}
