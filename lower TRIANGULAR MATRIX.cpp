#include <stdio.h>

int main()
 {
  int arr[10][10],i,j,n;
  int  determinant=0;

     printf("Input the size of the square matrix : ");
     scanf("%d", &n); 
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - arr[%d][%d] : ",i,j);
	           scanf("%d",&arr[i][j]);
            }
        }  
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr[i][j]);
	    printf("\n");
	 }

   printf("\nThe upper triangular matrix is:\n");
   for(i=0;i<n;i++)
     {
      printf("\n");
      for(j=0;j<n;j++)
           if(i>=j)
             printf("% 4d",arr[i][j]);
           else
             printf("% 4d",0);
  }
       printf("\n\n");
       return 0;
}

