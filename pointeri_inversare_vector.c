// varianta cu pointeri- Inverseaza elementele dintr-un vector
#include <stdio.h>

int main()
{
    int v[10];
    int *end,*p,*r;
    int tmp;
    end=v;                                              // end pointeaza la prima pozitie libera din vector
    for(;;){                                               // bucla infinita pentru citire
        printf("v[%d]=",end-v);                  // nr de elemente deja introduse in vector
        scanf("%d",end);                    // citeste direct in vector, dar nu va considera valoarea decat deca este !=0
        if(*end==0)break;                         // daca s-a introdus 0, iesire din bucla
        end++;                                          // trece la urmatoarea adresa
    }
    for(p=v, r=end-1 ; p<r ; p++, r--){      // inversare valori
        tmp=*p;
        *p=*r;
        *r=tmp;
    }
    for(p=v;p<end;p++){                         // afisare valori
        printf("%d\n",*p);
    }
    return 0;
}

