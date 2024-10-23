#include <stdio.h> 
#include <stdlib.h>

int main() 
{  
    int a[10], j, n, i, k, rd;
    rd = 0;
    printf("Number of elements= ");
    scanf("%d", &n);
    printf("\n Elements= ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Removed duplicates, unique elements = ");

    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; ++j) // Corrected the condition here
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]); // Added a space here for better readability
    }
    return 0;
}

