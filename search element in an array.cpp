#include <stdio.h>
int main()
{
    int arr[100];
    int size, i, toSearch, found=0;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);
    
    for(i=0; i<size; i++)
    {
        
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

    return 0;
}
