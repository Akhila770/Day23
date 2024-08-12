//perfect number
#include<stdio.h>
int main()
{
	int n,f,temp,i,sum;
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;
	sum=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			f=i;
			sum=sum+f;
		}
	}
	if(sum==temp)
	{
		printf("it is a perfect number.");
	}
	else
	{
		printf("it is not a perfect number.");
	}
}
