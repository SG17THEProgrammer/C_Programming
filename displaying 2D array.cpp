#include<stdio.h>
int main()
{
   int i, j,m,n;
   printf("Enter no of rows in an array:");
   scanf("%d",&m);
   printf("Enter no of columns in an array:");
   scanf("%d",&n);
    int arr[m][n];
   for(i=0; i<m; i++) 
   {
      for(j=0;j<n;j++) 
	  {
         printf("Enter value for arr[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   printf("Two Dimensional array elements:\n");
   for(i=0; i<m; i++) 
   {
      for(j=0;j<n;j++) 
	  {
         printf("%d ", arr[i][j]);
        
		}
        
        printf("\n");
      }
   
   return 0;
}
