//Aplicația 7.5: Să se afișeze minimul elementelor din vector utilizând pointeri, fără indecși.

#include<stdio.h>
#include<limits.h>

int minV (int v[20], int n)
{
    int *p, el_min=INT_MAX;
    p=v;
    while (p!=v+n)
    {
        if (*p<el_min)
            el_min=*p;
        p++;
    }
    return el_min;
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
    rez=minV(v,n);
    printf("Cel mai mic element din vector este %d.",rez);
    return 0;

}

