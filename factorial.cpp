//factorial
#include<stdio.h>
int main()
{
	int i,n,t=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=t*i;
	}
	printf("%d",t);
}

/*
enter a number:5
120
*/
