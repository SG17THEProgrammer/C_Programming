#include <stdio.h>

/*A sparse martix is matrix which  has more zero elements than nonzero elements */
int main ()
{
	int arr[10][10];
	int i,j,r,c;
	int total=0;	
     printf("Input the number of rows of the matrix : ");
     scanf("%d", &r); 
     printf("Input the number of columns of the matrix : ");
     scanf("%d", &c); 
	 printf("\nInput elements in the first matrix :\n");
       for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
	           printf("element - [%d][%d] : ",i,j);
	           scanf("%d",&arr[i][j]);
			if (arr[i][j]==0)
			{
				++total;
			}
            }
        }  
	if (total>((r*c)/2))
	
		printf ("\nThe given matrix is sparse matrix. \n");
	
	else
		printf ("\nThe given matrix is not a sparse matrix.\n");
	
	return 0;
}

