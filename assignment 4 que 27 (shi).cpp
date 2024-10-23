#include<stdio.h>

int main()

{

int c=10,b=20,s=5,no_of_hours,parking_charges;
char n;
printf("Please enter vehicle details c b and s");
scanf("%c",&n);
printf("Please enter no of hours");
scanf("%d",&no_of_hours);
if(n==c)

{
parking_charges = c*no_of_hours;

}

else if(n==b)

{

parking_charges= b*no_of_hours;

}

else if(n==s)

{
parking_charges=s*no_of_hours;

}

printf("%d",parking_charges);

return 0;
}
