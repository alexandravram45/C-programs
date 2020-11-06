#include<stdio.h>

int main()
{
    int i, v[50] , n, vf[20]={0}, vf_max=0, ok=0;
    printf("Cate elemente vrei sa citesti? \n");
    scanf("%d",&n);
    printf("Scrieti cele %d elemente: \n",n);
    for (i=0;i<n;i++)
    {
       scanf("%d",&v[i]);
       vf[v[i]]++;
    }

    for (i=0;i<=20;i++)
        if (vf[i]>vf_max)
         vf_max=vf[i];

    for (i=20;i>=0;i--)
       if (vf[i] == vf_max && ok==0)
        {
          printf("Numarul maxim cu cele mai multe aparitii este %d.", i);
          ok=1;
        }
    return 0;
}
