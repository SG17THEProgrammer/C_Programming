/*When the sum of the cube of the individual digits of a number  
 is equal to that number, the number is called Armstrong number. 
 For example 153 => 1+125+27 = 153*/
#include <stdio.h>
int main()
{
    int num,r,sum,temp;
    int s,e;

    printf("Input starting number of range: ");
    scanf("%d",&s);

    printf("Input ending number of range : ");
    scanf("%d",&e);

    printf("Armstrong numbers in given range are: ");
    for(num=s;num<=e;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }
printf("\n");
}

