#include<stdio.h>
int main()
{
	int n,r,sum=0;
	scanf("%d",&n);//246
	while(n>0)//246>2
	{
		r=n%10;//r=246%10
		sum=sum+r;
		n=n/10;
	}
	printf("%d",sum);
}
