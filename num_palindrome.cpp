//given number is palindrome or not
#include<stdio.h>
int main()
{
	int n,rev=0,rem,temp;
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;
    while(n>0)
    {
    	rem=n%10;
    	rev=rev*10+rem;
    	n=n/10;
	}
	if(rev==temp)
	{
		printf("given number is palindrome.");
	}
	else
	{
		printf("given number is  not palindrome.");
	}
	return 0;
}


/*
enter a number:34243
given number is palindrome.
*/
