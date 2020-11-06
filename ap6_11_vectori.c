//Aplicația 6.11: Se citește un număr n<=10 și apoi n numere întregi. Se cere să se șteargă toate duplicatele (ori de câte ori apar acestea) din vector, păstrându-se ordinea elementelor.

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

    for (i=0;i<n-1;i++)
    {
        if (v[i]==v[i+1])
        {
            for (k=i+1;k<n-1;k++)
               v[k]=v[k+1];
            i--;
            n--;
        }
    }

    afisare (v,n);

    return 0;
}
