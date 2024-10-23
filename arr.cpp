#include<stdio.h>
int main()
{
	int arr[3]={5,6,9},i,j ;
	j=sizeof(arr)/sizeof(int);
	printf("Value of j = %d\n",j);
	printf("Array - ");
	for(i=0;i<j;i++)
	{
	
	printf("%d\n",arr[i]);
}
	return 0;
}
