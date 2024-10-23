#include<stdio.h>
int main()
{
	int a[100],max,min,maxpos,minpos,i,n,temp;
	
	printf("Enter number of elements you want in an array:");
    scanf("%d",&n);

	printf("Enter %d integers: ",n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	max=a[0];
	min=a[0];
	maxpos=0;
	minpos=0;
	
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxpos=i;
		}
		if(a[i]<min)
		{
			min=a[i];
			minpos=i;
		}
	}
	
	temp=a[maxpos];
	a[maxpos]=a[minpos];
	a[minpos]=temp;
	
	printf("After interchange array elements are: ");
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		
	return 0;
}
