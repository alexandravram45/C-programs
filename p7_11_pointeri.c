//Aplicația 7.11: Să se implementeze, fără a se folosi indecși, următorul program: se citește pe rând câte o valoare întreagă și se inserează într-un vector, astfel încât vectorul să fie mereu sortat crescător. După fiecare inserare se va afișa noul vector. Programul se termină la citirea valorii 0. Presupunem că vectorul va avea maxim 100 de elemente.
#include<stdio.h>

void inserare (int v[], int n, int *dimV)
{
    int *p, *q, ok=0;
    p=v;
    while (ok==0)
    {
        if (n<=*p)
        {
            for (q=v+*dimV;q>p;q--)
                *q=*(q-1);
            *p=n;
            ok=1;
            (*dimV)++;
        }
        else if (p==v+*dimV)
        {
           ok=1;
           *p=n;
           (*dimV)++;
        }
        else *p++;
    }


}

void afisare (int v[], int n)
{
    int *p;
    printf("\n");
    for (p=v;p<v+n;p++)
        printf("%d ",*p);
}

int main()
{
    int v[100]={0}, n, dimV=1;
    printf("\nDati valoarea pe care vreti sa o introduceti in vector:\n");
    scanf("%d",&n);
    *v=n;
    afisare(v,dimV);
    while(n!=0)
    {
        printf("\nDati valoarea pe care vreti sa o introduceti in vector:\n");
        scanf("%d",&n);
        if (n!=0)
        {
            inserare(v,n,&dimV);
            afisare(v,dimV);
        }


    }
    return 0;
}
