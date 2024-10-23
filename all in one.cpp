/*#include <stdio.h>
int main()
{
	int a=25,b=3;
	printf("Before Swapping\n");
	printf("a=%d\nb=%d\n" ,a,b);
	int temp=a*b;
	a=temp/a;
	b=temp/b;
	printf("After Swapping\n");
	printf("a=%d\nb=%d",a,b);
	return 0;
}*/
/*	#include<stdio.h>  
 int main()    
{    
int a=25, b=12;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;   //a=30 (10+20)    
b=a-b;   //b=10 (30-20)    
a=a-b;   //a=20 (30-10)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
} */  

/*#include <stdio.h>

int main()
{
    int a=12,b=20;
   printf("before swapping\n");
    printf("a=%d\n", a);
    printf("b = %d\n", b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("after swapping\n");
    printf("a  = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}*/

/*#include <stdio.h>

int main()
{
	int a=25,b=12,c=35,temp;
	temp=a>b?b:a;
	temp=temp>c?c:temp;
	printf("lowest mark is %d",temp);
}*/


/*#include<stdio.h>
int main() 
{
    int intI;
    float floatType;
    double doubleType;
    char charType;
	long double longdoubleType;
	short int shortintType;
	printf("Size of longdoubleType: %zu bytes\n", sizeof(longdoubleType));
	printf("Size of shortintType: %zu bytes\n", sizeof(shortintType));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}*/
/*#include<stdio.h>
int main() 
{	
	int a,temp;
	temp=(2**4)a;		
	printf("temp");
	return 0
}*/

/*#include <stdio.h>
int main()
{
    int number;
 
    printf("Enter a number to check even or odd");
    scanf("%d", &number);
 
    if((number & 1)==0)
          printf("%d is even.", number);
    else
        printf("%d is odd.", number);
        
 	return 0;  
}*/
/*#include <stdio.h>
int main()
{
	int m=20,i=25,k=5; 
	m=++i-  -k;
	printf("%d%d",m,k,i);
	return 0;
}*/

	 #include<stdio.h>
int main()
{
  int a = 2,b = 5;
  a = a^b;
  b = b^a;
  printf("%d %d",a,b);
  return 0;
} 







