#include<stdio.h>
int main()
{
 	int i, j, rows, columns, a[10][10];
  
 	printf("Enter number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\nEnter the matrix elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
    printf("The upper triangular matrix:") ;
 	for(rows = 0; rows < i; rows++)
  	{
  		printf("\n");
   		for(columns = 0; columns < j; columns++)
    	{
    		if(columns >= rows)
    		{
    			printf("%d ", a[rows][columns]);
			}
			else
			{
				printf("0  ");
			}
   	 	}
  	}
  	
 	return 0;
}
