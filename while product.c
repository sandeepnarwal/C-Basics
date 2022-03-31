#include<stdio.h>
int main()
{
	int n,r,product=1;
	printdf("enter the number:-\t");
	scanf("%d",&n);//246
	while(n>0)//246>2
	{
		r=n%10;//r=246%10
		product=product*r;
		n=n/10;
	}
	printf(" enter the number\t%d",product);
}
