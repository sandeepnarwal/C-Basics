#include<stdio.h>
void main()
{
	int a=10,b=2;
	 
	 a +=b;// 12 2
	 a -=b;// 10 2
	 b *=a;// 10 20
	 b /=a;// 10 2
	 a %=b;// 0 2
	printf("%d %d",a,b);
}
