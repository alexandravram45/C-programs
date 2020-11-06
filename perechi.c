//4.14 - Perechi de nr distincte
#include<stdio.h>
#include<limits.h>
void perechi (int n,int v[50])
{
    int i,j,ok=0;
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
        {
            if (v[i]==v[j])
               v[j]=INT_MIN;
        }
    for (i=0;i<n-1;i++)
        for (j=i+1;j<n;j++)
            if (v[i]!=INT_MIN && v[j]!=INT_MIN )
        {
              ok=1;
              printf("%d si %d \n",v[i],v[j]);
        }

    if (ok==0)
        printf("Toate numere sunt egale.");
}

int main()
{
    int i,n,v[50];
    printf("Da numarul de numere cu care vrei sa faci perechi: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        {
            printf("Numarul %d: ",(i+1));
            scanf("%d",&v[i]);
        }
    perechi(n,v);
    return 0;
}
