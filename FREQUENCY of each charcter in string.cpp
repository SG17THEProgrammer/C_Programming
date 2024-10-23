#include<stdio.h> 
int main()
{
int i,b,count=0; char c;
char a[100];
printf("Enter the sentence:"); 
gets(a);
for(b='a';b<='z';b++)
{ count=0; for(i=0;a[i]!='\0';i++)
{ if(a[i]==b)

{ count++; 
} 
}
printf("letter %c is repeated %d times\n",b,count);
} return 0; 
}

