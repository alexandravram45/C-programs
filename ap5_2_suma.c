#include<stdio.h>

void suma (int n)
{
    int i,s=0;
    for (i=1;i<=n;i++)
    {
        s=s+i;
        printf("%d",i);
        if (i!=n) printf ("%c",'+');
    }
    printf("%c %d",'=',s);
}
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);
    while (n<0)
    {
        printf("Valoarea nu poate fi negativa\n");
        printf("n=");
        scanf("%d",&n);

    }
    suma (n);
    return 0 ;
}
