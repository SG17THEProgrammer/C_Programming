#include<stdio.h>
int main()
{
	int arr[50],i,n,sum=0;
	printf("Input the number of elements to be stored in the array:");
	scanf("%d",&n);
	
	printf("Input 4 elements in the array :\n");
	for(i=0;i<n;i++)
	{
	 printf("element - %d : ",i);
	 scanf("%d",&arr[i]);
	  }
	for(i=0;i<n;i++)
	{
		sum =sum+arr[i];
		
	  } 
	  printf("Sum of all elements stored in the array is : %d",sum) ;
	  return 0;
}
