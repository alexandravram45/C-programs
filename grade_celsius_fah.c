#include<stdio.h>

//4.13 - Din grade C in grade F
void gradeC_F (float tempC)
{
   float tempF=0;
   tempF= (tempC*1.8) +32;
   printf("Temperatura in grade Fahrenheit este: %f \n", tempF);
}

//Din grade F in grade C
void gradeF_C (float tempF)
{
    float tempC=0;
    tempC=(tempF-32)*5/9;
    printf("Temperatura in grade Celsius este: %f \n", tempC);
}
int main()
{
    float temp_Celsius, temp_Fah;
    printf("Dati temperatura in grade Celsius pe care doriti sa o convertiti in grade Fahrenheit: ");
    scanf("%f", &temp_Celsius);
    gradeC_F(temp_Celsius);

    printf("Dati temperatura in grade Fahrenheit pe care doriti sa o convertiti in grade Celsius: ");
    scanf("%f",&temp_Fah);
    gradeF_C(temp_Fah);

    return 0;
}
