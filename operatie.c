/*Aplicația 5.9: Să se implementeze un calculator cu următoarele opțiuni:
 1-Adunare, 2-Scădere, 3-Înmulțire, 4-Împărțire, 5-Ieșire.
  După ce se afișează pe ecran acest meniu, se va cere un cod de operație.
  Dacă s-a introdus 5, programul se va termina. Altfel, se cer două numere reale și se
  afișează rezultatul operației selectate, ciclul repetându-se.
*/

#include<stdio.h>

int adunare(int x, int y)
{
    return x+y;
}

int scadere(int x, int y)
{
    if (x>y) return x-y;
        else return y-x;
}
int inmultire(int x, int y)
{
    return x*y;
}
float impartire(int x, int y)
{
    float r;
    x=(float)x;
    y=(float)y;
    r=(float) x/y;
    return r;
}
int main()
{
    printf("MENIU \n 1-Adunare, 2-Scadere, 3-Inmultire, 4-Impartire, 5-Iesire.\n");
    int caz,nr1,nr2,op;
    float op2;
    printf("Primul numar: ");
    scanf("%d",&nr1);
    printf("Al doilea numar: ");
    scanf("%d",&nr2);
    printf("Ce operatie doriti sa efectuati? \n");
    while (scanf("%d",&caz)){
        switch (caz)
    {
        case 1: op=adunare (nr1,nr2);break;
        case 2: op=scadere (nr1,nr2);break;
        case 3: op=inmultire(nr1,nr2);break;
        case 4: op2=impartire(nr1,nr2);break;
        default:op=-1;break;
    }
    if (caz==4)
        printf("Rezultat: %f\n",op2);
    else {
        if (op != -1)
            printf("Rezultat: %d\n",op);

        else {
                printf("Ati iesit din meniu.");
                break;
         }
         }
    printf("Ce operatie doriti sa efectuati? \n");
    }
    return 0;
}
