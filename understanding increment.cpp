#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	a=10;
	b=11;
	c=12;
	d=13;
	e=a++;
	b=c++;
	c=++a;
	d=++b;
	printf("%d\n%d\n%d\n%d\n%d",a,b,c,d,e);
return 0;
}
