#include<stdio.h>
int main()
{
	int a=10,b=5,c=20;
	if ((a>b)&&(a>c))
		printf("a is greatest");
		else 
			if ((b>a)&&(b>c))
				printf("b is greatest");
	else
		printf("c is greatest");
return 0;
}
