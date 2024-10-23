#include<stdio.h>
 
int main()
{
	int a,b,c;
 
  	printf(" Please Enter Three Sides of a Triangle : ");
  	scanf("%d%d%d", &a, &b, &c);
  	
  	if( (a+b>c) && (b + c > a) && (a + c > b) )
  	{
  		printf("\n This is a Valid Tringle");
 	}
	else
	{
		printf("\n This is an Invalid Triangle");
	}  
 	return 0;
 }
