	#include<stdio.h> 
int main()
{
	char b,c,s,x;
	int y;
	printf("enter which vehicle u are parking(b,c,s):");
	scanf("%c",&x);
	printf("no of hours:");
	scanf("%d",&y);
	if(x=b)
		printf("your parking charge1:%d",y*20);
	else 
		if(x=c)
		printf("your parking charge2:%d",y*10);
			else
			printf("your parking charge3: %d",y*5) ;
		
return 0;			
}

