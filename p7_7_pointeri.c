//Aplicația 7.7: Să se șteargă din vector toate elementele pare, păstrând neschimbată ordinea elementelor, după care să se afișeze noul vector. Utilizați pointeri, fără indecși.

#include<stdio.h>
void stergere (int v[10], int *n)
{
    int *p,*q,aux;
    for (p=v;p<v+*n;p++)
       if (*p%2==0)
       {
           for (q=p;q<v+*n-1;q++)
              *q=*(q+1);
           (*n)--;
           *p--;
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
    int v[10],n;
    printf("Cate elemente vrei sa introduci?\n");
    scanf("%d",&n);
    while (n>10)
    {
        printf("Numarul trebuie sa fie mai mic sau egal decat 10.\nCate elemente vrei sa introduci?\n");
        scanf("%d",&n);
    }
    citire(v,n);
    stergere(v,&n);
    afisare(v,n);
    return 0;

}

