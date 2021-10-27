#include<stdio.h>
#include<limits.h>
void main()
{
	printf("shrot int:\n\tsigned:%hd to %hd\n",SHRT_MIN, SHRT_MAX);
	printf("\tunsigned: %d to %hu", 0, USHRT_MAX);
	printf("\nlong int:\n\tsigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("\tunsigned: %d to %lu", 0,ULONG_MAX);
	printf("\nint:\n\tsigned:%d to %d\n",INT_MIN,INT_MAX);
	printf("\tunsigned: %d to %u" ,0,UINT_MAX);
	printf("\nlong long int:\n\tsigned:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("\tunsigned: %d to %llu" ,0,ULONG_LONG_MAX);	
}
