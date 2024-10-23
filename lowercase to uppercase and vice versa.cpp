#include<stdio.h>
int main()
{
	char s[15];
	int i;
	printf("enter any string(containing character):");
	gets(s) ;           
	//gets will read complete string with spaces(if present in the string)
	
	for(i=0;s[i]!=s[15];i++) 
	{
		if(s[i]>=65 && s[i]<=90)
			{
				
			s[i]=s[i]+32;
			printf("%c",s[i]);
		}
			
	    else if  (s[i]>=97 && s[i]<=122)
			{
			s[i]=s[i]-32;
			printf("%c",s[i]);
		}
				
}
s[i]=0;
			
return 0;
}
