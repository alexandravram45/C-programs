//Aplicația 6.12: Se citește un număr n<=10 și apoi n numere întregi. Se cere să se insereze după fiecare valoare din vectorul original pătratul ei.

#include<stdio.h>
void citire ( int v[], int n)
{
    int i;
    printf("Dati elementele vectorului:\n");
    for (i=0;i<n;i++)
        scanf("%d",&v[i]);


}

void afisare (int v[], int n)
{
    int i;
    for (i=0;i<n;i++)
        printf("%d ",v[i]);
}

void inserare (int v[], int n)
{
    int i,k;
    for (i=0;i<n;i++)
    {
        for (k=n;k>i;k--)
           v[k]=v[k-1];
        v[i+1]=v[i]*v[i];
        n++;
        i++;
     }
}
int main()
{
    int v[50],n,i,k;
    printf("Cate elemente are vectorul?\n");
    scanf("%d",&n);
     while (n>10) {
        printf("Dati o valoarea mai mica decat 10.\n");
        scanf("%d",&n);
     }
    citire(v,n);
    n=2*n;
    inserare(v,n);
    afisare(v,n);
    return 0;


}
