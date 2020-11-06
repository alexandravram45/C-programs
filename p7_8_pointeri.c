//Aplicația 7.8: Se dă vectorul {7, -5, 4, 3, -9, 2, -8}. Să se insereze înainte de fiecare valoare din vectorul original negativul ei. Utilizați pointeri, fără indecși.

#include<stdio.h>

void inserare (int v[20], int *n)
{
    int *p,*q,aux;
    for (p=v;p<v+*n;p++)
    {
        for (q=v+*n;q>p;q--)
            *q=*(q-1);
        (*n)++;
        *p=-*p;
        *p++;
    }
}

void citire (int v[], int n)
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

void afisare (int v[], int n)
{
    int *p;
    printf("\n");
    for (p=v;p<v+n;p++)
        printf("v[%d]=%d\n",p-v,*p);
}

int main()
{
    int v[20],n;
    printf("Cate elemente vrei sa introduci?\n");
    scanf("%d",&n);
    while (n>10)
    {
        printf("Numarul trebuie sa fie mai mic sau egal decat 10.\nCate elemente vrei sa introduci?\n");
        scanf("%d",&n);
    }
    citire(v,n);
    inserare(v,&n);
    afisare(v,n);
    return 0;

}

