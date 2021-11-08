#include<stdio.h>
void main()
{
  int a,b,c,d,e,f,g,h;
  a=20;
  b=10;
  c=a>b;
  d=a>=b;
  e=a<b;
  f=a<=b;
  g=a==b;
  h=a!=b;

  printf("%d > %d----> %d\n",a , b ,c);
  printf("%d >= %d----> %d\n",a , b ,d);
  printf("%d < %d----> %d\n",a , b ,e);
  printf("%d <= %d----> %d\n",a , b ,f);
  printf("%d == %d----> %d\n",a , b ,g);
  printf("%d != %d----> %d\n",a , b ,h);   
}
