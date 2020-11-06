//Aplicația 7.4: Să se afișeze câte elemente negative sunt într-un vector utilizând pointeri, fără indecși. (Fără indecși înseamnă că în cod nu va exista niciun v[i])

#include<stdio.h>

int countNeg (int v[20], int n)
{
    int *p, neg=0;
    p=v;
    while (p!=v+n)
    {
        if (*p<0)
            neg++;
        p++;
    }
    return neg;
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

int main()
{
    int v[20],rez,n;
    printf("Cate elemente vrei sa introduci?\n");
    scanf("%d",&n);
    citire(v,n);
    rez=countNeg(v,n);
    printf("In vector sunt %d numere negative.\n", rez);
    return 0;

}
