#include<stdio.h>
int main()
{
	int i=5625,rev=0;
	for(i;i>0;i/=10){
	rev=rev*10+i%10;
		
	}	
	printf("%d",rev);
	
	
		
return 0;
}

