#include <stdio.h>
int main()
{
     int i,j,k,arr[10][10],rsum[10],csum[10],n;
	 
     printf("Input the size of the square matrix : ");
     scanf("%d", &n); 
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("enter value for arr[%d][%d] : ",i,j);
	           scanf("%d",&arr[i][j]);
            }
        }  
	 printf("The matrix is :\n");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d ",arr[i][j]);
	    printf("\n");
	 }

     /* Sum of rows */
     for(i=0;i<n;i++)
     {
	  rsum[i]=0;
	  for(j=0;j<n;j++)
	  rsum[i]=rsum[i]+arr[i][j];
     }
 
      /* Sum of Column */
      for(i=0;i<n;i++)
      {
	  csum[i]=0;
	  for(j=0;j<n;j++)
		csum[i]=csum[i]+arr[j][i];
      }
 
      printf("The sum of rows and columns of the matrix is :\n");
      for(i=0;i<n;i++)
      {
	   for(j=0;j<n;j++)
	      printf("% 4d" ,arr[i][j]);
	   printf("% 8d" ,rsum[i]);
	   printf("\n");
       }
       printf("\n");
	    for(j=0;j<n;j++)
             {
	        printf("% 4d" ,csum[j]);
             }
            printf("\n\n");
			
			return 0; 
  }

