#include <stdio.h>

int main()
{
    int cp,sp,mp, amt; 
    
    /* Input cost price and selling price of a product */
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    printf("Enter maintenance price: ");
    scanf("%d", &mp);
    
    if(sp > (cp+mp))
    {
        /* Calculate Profit */
        amt = sp - (cp+mp);
        printf("Profit = %d", amt);
    }
    else if((cp+mp) > sp)
    {
        /* Calculate Loss */
        amt = (cp+mp) - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        /* Neither profit nor loss */
        printf("No Profit No Loss.");
    }

    return 0;
}
