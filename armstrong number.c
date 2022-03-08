#include<stdio.h>
int main()
{
	int n , r, sum =0 , temp ;
	printf(" enter the number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=(sum+r*r*r);
		n=n/10;
	}
	if(sum==temp)
   
   	printf(" this is an armstrong number");
   	else
   	printf(" this is not an armstrong number");
   	return 0;
   	}
	// n is quaficaint
           r is reminder

