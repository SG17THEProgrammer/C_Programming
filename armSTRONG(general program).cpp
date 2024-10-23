#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int i,j,n;
	printf("enter the no. of digits: ");
	scanf("%d",&j);
	printf("enter any no. you want to check:");
	scanf("%d",&n);
	int p=n;
	int sum=0;
	for(i=0;i<j;i++)
	{
		int last_digit=n%10;
		int power = pow(last_digit,j);
			printf("\n%d",power);
		sum +=power;
		printf("\n%d",sum);
		n=n/10;
			}
		
	if (sum==p)
	{
	printf("\n%d is an armstrong number",p);
	}
	else
	{
	printf("\n%d is not an armstrong number",p);
	}
	return 0;
}
