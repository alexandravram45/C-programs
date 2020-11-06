#include <stdio.h>

int main()
{
    int x = 10, y = 7;        // variabile de tip int
    int *p = &x;                // p va contine adresa lui x
    printf("%d\n", *p);      // afișează valoarea pointata de p. Din cauză ca p pointeaza la x, va afișa 10
    p = &y;                      // p va contine adresa lui y
    *p = *p - 2;                // va modifica valoarea de la adresa lui y (la care pointeaza p), scazand 2 din ea
    printf("%d\n", y);        // va afisa 5, deoarece valoarea lui y a fost modificata anterior prin intermediul lui p
    y = 1;                         // modifica valoarea lui y
    printf("%d\n", *p);      // va afisa 1, deoarece la adresa pointata de p (adresa lui y) se afla acum valoarea 1
    printf("%p\n", p);       // va afișa adresa de memorie la care se afla y
    scanf("%d", p);         // citeste o valoare si o depune la adresa continuta in p (va fi noua valoare a lui y)
    return 0;
}
