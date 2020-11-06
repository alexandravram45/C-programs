//Aplicația 7.3: Scrieți un program care interschimbă valorile a două variabile de tip întreg utilizând pointeri.

/*
a[0] <==> *a
a[1] <==> *(a + 1)
a[k] <==> *(a + k)
&a[0] <==> a
&a[1] <==> a + 1
&a[k] <==> a + k
*/

#include<stdio.h>

void intersch (int  *p, int *q)
{
    int aux;

    aux=*p;
    *p=*q;
    *q=aux;
    printf("a=%d \nb=%d",*p,*q);


}

int main()
{
    int a ,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    intersch(&a,&b);
    return 0;
}
