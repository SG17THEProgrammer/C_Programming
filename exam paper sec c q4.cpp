#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=1;j++)
		{
			printf("%d",(j&1));
		}
		printf("\n");
		}
		return 0;	
}
