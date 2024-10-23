#include<stdio.h> 
int main()
{
int i,count=1; char a[30];
printf("Enter the sentence\n"); 
gets(a);
for(i=0;a[i]!='\0';i++)
{ 
if(a[i]==' ')
{ 
count++; 
} 
}
printf("words in this sentence is %d",count);
 return 0; 
 }
