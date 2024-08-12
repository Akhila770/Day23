// strong number count
#include<stdio.h>
int main()
{
	int i,j,n,rem,fact,sum,temp;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
			fact=1;
			for(j=1;j<=rem;j++)
			{  
				fact=fact*j;
		    	
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
}
