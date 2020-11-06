//Aplicația 6.13: Se citește un număr n<=10 și apoi n perechi de numere întregi. Se cere să se insereze după fiecare pereche din vectorul original suma și apoi produsul numerelor din pereche.

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

void inserare(int v[], int n)
{
    int i,k;
    for (i=0;i<n;i+=4)
    {

        for (k=n+1;k>i+1;k--)
            v[k]=v[k-2];
        v[i+2]=v[i]+v[i+1];
        v[i+3]=v[i]*v[i+1];
        n=n+2;

    }

}
int main()
{
int v[50],n,i,k;
    printf("Cate perechi doresti sa citesti?\n");
    scanf("%d",&n);
     while (n>10) {
        printf("Dati o valoarea mai mica decat 10.\n");
        scanf("%d",&n);
     }
    n=2*n;
    citire(v,n);
    inserare(v,n);
    n=2*n;
    afisare(v,n);
    return 0;
}
