#include<stdio.h>
int main()
{
 //Declaring Variable
  int num1, num2, i, sum = 0,count = 0;
  float avg;

//Input Number
 printf("Enter Starting Number: ");
 scanf("%d",&num1);

 printf("Enter Ending Number: ");
  scanf("%d",&num2);

 for(i=num1;i<=num2;i++)
  {   if(i%2==0)
      {
        continue ;
      }
      else
      {
        sum = sum + i;
        count++;
      }
  }
  avg = (float)sum/count;
 
  printf("\nAverage of odd Numbers in Given Range : %f", avg);

}
