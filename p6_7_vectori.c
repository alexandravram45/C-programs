//Aplicația 6.7: Se citește un număr n (n<=10) și apoi n numere întregi. Se cere să se sorteze aceste numere astfel încât numerele impare să fie înaintea celor pare.

#include<stdio.h>
void citire ( int v[], int n)
{
    int i;
    printf("Dati elementele vectorului:\n");
    for (i=0;i<n;i++)
        scanf("%d",&v[i]);


}
void sortare (int v[],int n)
{
    int i,j,aux;
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
        {
            if (v[i]%2==0 && v[j]%2==1)
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
}

int main()
{
    int v[50],n,i;
    printf("Cate elemente are vectorul?\n");
    scanf("%d",&n);
     while (n>10) {
        printf("Dati o valoarea mai mica decat 10.\n");
        scanf("%d",&n);
     }
    citire(v,n);
    sortare(v,n);
    for (i=0;i<n;i++)
        printf("%d ",v[i]);
    return 0;
}



