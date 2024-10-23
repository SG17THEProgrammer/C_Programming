#include <stdio.h>    
int main()    
{    
    //Initialize array 
	int p;    
	printf("enter the no. of elements in an array: ");
	scanf("%d",&p);
    int arr[p],i;
	 
	printf("enter the elements of an array: ")  ;
	for(i=0;i<p;i++)
	{
		scanf("%d",&arr[i]);
	}
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
    //n determine the number of times an array should be rotated    
    int n ;  
	printf("how many times you want to left rotate the array: ")  ;
	scanf("%d",&n);
        
    //Displays original array    
    printf("\nOriginal array: \n");    
    for (int i = 0; i < length; i++) 
	{     
        printf("%d ", arr[i]);     
    }      
        
    //Rotate the given array by n times toward left    
    for(int i = 0; i < n; i++)
	{    
        int j, first;    
        //Stores the first element of the array    
        first = arr[0];    
        
        for(j = 0; j < length-1; j++){    
            //Shift element of array by one    
            arr[j] = arr[j+1];    
        }    
        //First element of array will be added to the end    
        arr[j] = first;    
    }    
        
    printf("\n");    
        
    //Displays resulting array after rotation    
    printf("Array after left rotation: \n");    
    for(int i = 0; i < length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    
