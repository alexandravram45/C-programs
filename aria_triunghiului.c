//4.11 / Se dau 3 nr a,b,c. Calc aria triunghiului.
#include<stdio.h>
#include<math.h>
int aria_triunghi (int a, int b, int c)
{
int semip;
double s;
  semip=(a+b+c)/2;
  s= sqrt (semip*(semip-a)*(semip-b)*(semip-c));
  if ( semip*(semip-a)*(semip-b)*(semip-c) < 0 )
        printf("Valorile laturilor date nu pot forma un triunghi. \n ");
  else
        printf("Aria triunghiului este: %f",s);

}
int main()
{
  int a,b,c;
  printf("Dati laturile triunghiului:\na=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  printf("c=");
  scanf("%d",&c);
  aria_triunghi(a,b,c);
  return 0;

}
