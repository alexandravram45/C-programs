//Aplicația 7.9: Se citesc n<=10 valori întregi. Folosind doar pointeri, fără niciun fel de indexare, să se afișeze toate valorile care au cel puțin un duplicat. (Inclusiv citirea se va face cu pointeri.)
#include<stdio.h>
#include<limits.h>

void citire(int v[], int n)
{
    int *p;
    p=v;
    while(p!=v+n)
    {
        printf("v[%d]=",p-v);
        scanf("%d",p);
        p++;
    }
}
void cautare (int v[10], int n)
{
    int *p,*q,aux,ok;
    for (p=v;p<v+n;p++)
        {
            ok=0;
            for (q=p+1;q<v+n;q++)
            {
                if (*p==*q && ok==0)
                {
                    ok=1;
                    *q=INT_MIN;
                }

            }
        if (ok==0)
            *p=INT_MIN;
        }

}

void afisare(int v[], int n)
{
    int *p,ok=0;
    printf("\n");
    for (p=v;p<v+n;p++)
        if (*p!=INT_MIN)
        {
            printf("%d\n",*p);
            ok=1;
        }
        if (ok==0)
            printf("Toate elementele sunt diferite");

}

int main()
{
    int v[10],n;
    printf("Cate elemente vrei sa introduci?\n");
    scanf("%d",&n);
    while (n>10)
    {
        printf("Numarul trebuie sa fie mai mic sau egal decat 10.\nCate elemente vrei sa introduci?\n");
        scanf("%d",&n);
    }
    citire(v,n);
    cautare(v,n);
    afisare(v,n);

}
