#include<stdio.h>
void main()
{
	int a,b,sum,sub,mul,rem;
	float div;
	a=11;
	b=2;
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a*1.0/b;
	rem=a%b;
	printf("sum of %d and %d is %d\n:",a,b,sum);
	printf("sub of %d and %d is %d\n:",a,b,sub);
	printf("mul of %d and %d is %d\n:",a,b,mul);
	printf("div of %d and %d is %f\n:",a,b,div);
	printf("rem of %d and %d is %d:",a,b,rem);
}
