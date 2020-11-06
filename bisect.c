#include<stdio.h>
#include<conio.h>
void bisect (int an) {
if (an<0)
    printf("Anul nu poate fi negativ.\n");
else {
    if ((an%4==0) && ((an%400==0) || (an%100!=0)))
        printf("Anul e bisect.\n");
    else printf("Anul nu e bisect.\n");
}
}
int main(){
int an;
printf("Apasati o litera+Enter pt a inchide programul, Enter pentru a continua. \n Tastati anul:");
while ( scanf("%d",&an) )
{
    bisect(an);
    printf("Tastati anul:");
}
return 0;
}
