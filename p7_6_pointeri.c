//Aplicația 7.6: Se citește un număr n (n<=10) și apoi n numere întregi. Se cere să se sorteze aceste numere în ordine descrescătoare utilizând pointeri, fără indecși. (Inclusiv citirea se va face cu pointeri.)

#include<stdio.h>
void sortare (int v[10], int n)
{
    int *p,*q,aux;
    for (p=v;p<v+n-1;p++)
        for (q=p+1;q<v+n;q++)
        {
            if (*p<*q)
            {
                aux=*p;
                *p=*q;
                *q=aux;
            }
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
    for (p=v;p<v+n;p++)
        printf("v[%d]=%d\n",p-v,*p);
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
    sortare(v,n);
    afisare(v,n);
    return 0;

}

