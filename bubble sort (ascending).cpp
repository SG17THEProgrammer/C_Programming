#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, temp;
	

    printf("Input the size of array : ");
    scanf("%d", &n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j] <arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements in ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr[i]);
    }
	        printf("\n\n");
	        return 0;
}

