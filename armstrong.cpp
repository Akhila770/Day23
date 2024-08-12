//armstrong number

#include<stdio.h>
int main()
{
	int n,i,temp,l,s;
	printf("enter a number:");
	scanf("%d",&n);
	temp=n;
	l=0;
	int dup = n;
	while(n>0)
	{
		l=l+1;
		n=n/10;
	}
	printf(" lenght of a number is %d\n",l);
	s=0;
	while(dup>0)
	{
		i=dup%10;
	int pow = 0;
	int mul =1;
	while(pow<l){
		mul = mul*i;
		pow++;
	}
	s+=mul;
		dup=dup/10;
	}
	
    if(temp==s)
    {
    	printf("given number is armstrong.");
	}
	else
	{
		printf("given number is not armstrong number.");
	}
}

/*output
enter a number:153
given number is armstrong
*/
