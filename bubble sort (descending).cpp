#include <stdio.h>
int  main ()
    {
 
        int arr[30];
 
        int i, j, a, n;
        printf("Enter the no. of elements:");
        scanf("%d", &n);
 
        printf("Enter the elements:");
        for (i = 0; i < n; ++i)
	        scanf("%d", &arr[i]);
 
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (arr[i] < arr[j]) 
                {
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
 
        printf("\nElements in  descending order are:\n");
 
        for (i = 0; i < n; ++i) 
        {
            printf("%d ", arr[i]);
        }
        return 0;
 
    }
