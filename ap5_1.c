#include<stdio.h>

void afisare_serie (int n)
{
    while (n>10)
    {
        n=n-n/10;
        if (n>=10) printf("%d\n",n);
    }
}
int main()
{
    int n;
    printf("n=");
    scanf("%d",&n);

    while (n<=10)
{
    printf("Numarul este prea mic, mai incercati. \n");
    printf("n=");
    scanf("%d",&n);
}
    afisare_serie(n);
    return 0;

}
