/* Afiseaza tabla inmultirii*/
#include<stdio.h>
int main()
 {
     int i,j,numar;
     for (i=0;i<=10;i++){
            printf("Tabla inmultirii cu %d: \n", i);
        for (j=0;j<=10;j++)
        {
             numar = i*j;
             printf("%d * %d = %d \n",i,j,numar);
        }

     }
    return 0;
 }
