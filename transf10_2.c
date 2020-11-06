#include<stdio.h>

int baza10_2(int n){
  int p=1, nr2=0, r;
  while (n>0){
    r=n%2;
    nr2=nr2+ r*p;
    p=p*10;
    n=n/2;
}
return nr2;
}

int main (){
int a,b,c,a2,b2,c2,rez1;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

a2=baza10_2(a);
b2=baza10_2(b);
c2=baza10_2(c);

rez1=a2&(b^c);
printf("&d",rez1);

return 0;
}
