#include <stdio.h>
double square(double num)
{
    return (num * num);
}
int main()
{
    int num;
    double n;
     
    printf("Input any number which you want to square : ");
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %.2f\n", num, n); 
    return 0;
}

