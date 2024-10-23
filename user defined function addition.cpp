#include <stdio.h> 
int add(int num1, int num2) 
{ 
int sum; 
sum = num1+num2; 
return sum; 
} 

int main() 
{ 
int var1, var2; 
printf("Enter 1st number: ");
scanf("%d",&var1);
printf("Enter 2nd number: ");
scanf("%d",&var2); 
int res = add(var1, var2); 
printf ("addition of %d and %d is %d",var1,var2, res); 
return 0; 
}

