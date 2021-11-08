#include<stdio.h>
void main()
{
	int a,b,c;
	a=40;
	b=30;
	c=20;
		
	printf("%d\n",(a>b)&&(b>c));
	printf("%d\n",(a<b)&&(b>c));
	printf("%d\n",(a<b)&&(b<c));
	printf("%d\n",(a>b)&&(b<c));
	printf("%d\n",(a<b)||(b>c));
}
