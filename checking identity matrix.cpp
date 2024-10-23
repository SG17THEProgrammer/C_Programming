#include<stdio.h>
int main()
{
 	int i, j, r, c, a[10][10], Flag = 1;
  
 	printf("Please enter number of rows and columns :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0; c < j; c++)
    	{
      		scanf("%d", &a[r][c]);
    	}
  	}

 	for(r = 0; r < i; r++)
  	{
   		for(c = 0; c < j; c++)
    	{
    		if(a[r][c] != 1 && a[c][r] != 0)
    		{
    			Flag = 0;
    			break;
			}
   	 	}
  	}
  	if(Flag == 1)
  	{
  		printf("The Matrix that you entered is an Identity Matrix ");
	}
	else
	{
		printf("The Matrix that you entered is Not an Identity Matrix ");
	}
  	
 	return 0;
}
