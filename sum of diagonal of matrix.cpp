#include<stdio.h>
int main()
{
    int mat[50][50];
    int i,j,row,col,sum=0;
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d%d",&row,&col);
    printf("\nEnter the elements of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("\nThe matrix in tabular form :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    //To add diagonal elements
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }

    printf("\nThe sum of diagonal elements of a square matrix = %d\n",sum);
    return 0;
}
