/*Aplicația 5.8: Se cere un număr n, fără semn.  Să se afișeze:
- numărul n în baza 2
- numărul de biți de 1 din n
- numărul de perechi de biți consecutivi diferiți (01 sau 10) din n
 */

#include<stdio.h>
int main()
{
    int n, p=1, n2Baza=0, rest, contor1=0,grupe=0,c,aux;
     printf("n=");
     scanf("%d",&n);
        while (n>0)
    {
            rest=n%2;
            if (rest==1)
                contor1++;
            n2Baza+= rest*p;
            p=p*10;
            n=n/2;
    }
        aux=n2Baza;
        c=aux%10;
        aux/=10;
        while(aux>0)
    {
            if (aux%10 != c)
                grupe++;
            c=aux%10;
            aux/=10;
    }
        printf("Numarul in baza 2: %d \nNumarul de biti de 1: %d \nNumarul de secvente de biti consecutivi diferiti: %d \n",n2Baza,contor1,grupe);


    return 0;
}
