#include <stdio.h>
int main()
{
    int a,b,sum,l;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
     
    sum=0;

    for(l=1;l<=b;l++)
	{
        sum+= a;
    }

    printf("Multiplication of %d and %d is: %d\n",a,b,sum);

    return 0;
}

