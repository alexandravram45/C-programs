#include<stdio.h>
void showBits(unsigned a){
    int i;
    for(i=7;i>=0;i--)
        printf("%d",(a>>i)&1);
    printf("\n");
}

int main () {


  //Aplicatia 3.7
int a,i,suma=0;
printf("a=");
scanf("%d", &a);
for (i=0;i<4;i++)
    suma=suma+ ( (a>>i)&1 );
printf("Suma primilor 4 biti ai numarului %d este: %d \n",a,suma);

  //Aplicatia 3.9
unsigned int x,nr_biti=0;
printf("x=");
scanf("%d", &x);
for (i=sizeof(x)*8-1;i>=0;i--)
    nr_biti=nr_biti+ ( (a>>i)&1 );
printf("In numarul %d sunt %d biti de 1. \n",x,nr_biti);


  //Aplicatia 3.8
int y,z;
printf("y=");
scanf("%d", &y);
printf("z=");
scanf("%d", &z);
printf("Bitii numarului %d: ",y);showBits(y);
printf("Bitii numarului %d: ",z);showBits(z);
printf("Bitii numarului %d & %d: ",y,z);showBits(y&z);
printf("Rezultatul in baza 10: %d \n",y&z);
printf("Bitii numarului %d | %d: ",y,z);showBits(y|z);
printf("Rezultatul in baza 10: %d \n",y|z);
printf("Bitii numarului %d ^ %d: ",y,z);showBits(y^z);
printf("Rezultatul in baza 10: %d \n",y^z);

return 0;



}
