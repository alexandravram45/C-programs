#include<stdio.h>

void count (int v[50], int n)
{
    int i, nr_poz=0, nr_neg=0;
    for (i=0;i<n;i++)
        if (v[i]>=0)
            nr_poz++;
        else nr_neg++;
    if (nr_poz==0 && nr_neg ==0)
       printf("Nu avem elemente.\n");
    else
       printf("In vector sunt %d numere pozitive.\nIn vector sunt %d numere negative.", nr_poz, nr_neg);
}

int main()
{
    int i, v[50] ,n;
    printf("Cate elemente vrei sa citesti? \n");
    scanf("%d",&n);
    printf("Scrieti cele %d elemente: \n",n);
    for (i=0;i<n;i++)
        scanf("%d",&v[i]);
    count(v,n);


return 0;

}

