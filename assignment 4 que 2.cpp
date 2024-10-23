#include <stdio.h>
int main()
{  int p,c,m;

   printf("Input the marks obtained in Physics :");
   scanf("%d",&p);
   printf("Input the marks obtained in Chemistry :");
   scanf("%d",&c);
   printf("Input the marks obtained in Mathematics :");
   scanf("%d",&m);
   printf("Total marks of Maths, Physics and Chemistry : %d\n",p+c+m);

   if (m>=65)
         if(p>=55)
             if(c>=50)
	        if((m+p+c)>=180)
	           printf("The  candidate is eligible for admission.\n");
	        else
	          printf("The candidate is not eligible.\n");
             else
	    printf("The candidate is not eligible.\n");
         else
	   printf("The candidate is not eligible.\n");
    else
     printf("The candidate is not eligible.\n");
     return 0;
}

