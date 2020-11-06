//Aplicatia 3.12

#include<stdio.h>
void showBits(unsigned a){
    int i;
    for(i=sizeof(a)*8-1;i>=0;i--)
        printf("%d",(a>>i)&1);
    printf("\n");
}

int main(){
int i, x, numar_secvente=1;
printf("x=");
scanf("%d", &x);
printf("Bitii numarului %d sunt: ",x);showBits(x);
for (i=0;i<sizeof(x)*8-1;i++)
    if (( (x>>i)&1 ) != (x>>(i+1)&1))
    numar_secvente++;
printf("Numarul de secvente de biti consecutivi egali este %d.",numar_secvente);
return 0;
}
