#include<stdio.h>
struct _fraction
{
int num,den;
}
typedef Fraction;
int gcd(int a,int b)
{
  int gcd(int a,int b);
  int t;
    while (b !=0)
      {
        t = b;
        b = a%b;
        a = t;
        }
    return a;
}
Fraction input_fraction()
{
  Fraction f;
  printf("Input a fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
int main()
{
  Fraction f;
  f=input_fraction();
  printf("The fraction is %d/%d\n",f.num,f.den);
  return 0;
}