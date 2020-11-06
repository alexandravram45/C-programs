//Aplicația 6.3: Să se citească de la tastatură un număr n<=10 iar apoi n valori de tip int. Să se afișeze dacă toate valorile pozitive sunt pare.

#include<stdio.h>

void citire ( int v[], int n)
{
    int i;
    printf("Dati elementele vectorului:\n");
    for (i=0;i<n;i++)
        scanf("%d",&v[i]);


}

int pare (int v[], int n)
{
    int i;
    for (i=0;i<n;i++)
        if (v[i]>=0 && v[i]%2==1)
           return 0;
    return 1;
}
int main()
{
    int n, v[50], i;

    printf("Cate elemente are vectorul?\n");
    scanf("%d",&n);
     while (n>10) {
        printf("Dati o valoarea mai mica decat 10.\n");
        scanf("%d",&n);
     }

    citire(v,n);
    if (pare (v,n)==1)
        printf("Toate elementele pozitive sunt pare.");
    else printf("Nu toate elementele pozitive sunt pare.");
    return 0;
}
