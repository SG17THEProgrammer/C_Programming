#include<stdio.h>
 int main()
{
char a[100];
int dgt=0,alp=0,spc=0;
 printf("Enter the string\n"); 
gets(a);
for(int i=0;a[i]!='\0';i++)
{
if(a[i]>=65 && a[i]<=90|| a[i]>=97 && a[i]<=122) 
alp++;
else if (a[i]>=48 && a[i]<=57)
 	dgt++;
else 
spc++;
 }
printf(" total no alphabet is %d ",alp);
 printf(" \ntotal no digits is %d ",dgt);
printf(" \ntotal no special character is %d ",spc);
return 0; 
}

