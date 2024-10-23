#include<stdio.h>
int main()
{
 int x,y,i,r=1,t;
 printf("Enter a number:");
 scanf("%d",&x);
 printf("Enter the power:");
 scanf("%d",&y);
 for(i=1;i<=y;i++)
 {
  t=x;
  r=r*t;
 }
 printf("Result: %d^%d=%d",x,y,r);
return 0;
}
