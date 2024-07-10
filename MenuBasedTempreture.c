#include <stdio.h>
int main () {
    int choice;
    float temp,convertedTemp;

    printf("Tempreture Conversion Menu\n");
    printf("1.Fahrenheit to Celcius\n");
    printf("2.Celcius to Fahrenheit\n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :
       printf("Enter the Fahrenheit Temperature : ");
       scanf("%f",&temp);
       convertedTemp = (temp-32)/1.8;
       printf("The Temperature in Celsius is :%f\n ",convertedTemp);
        break;

    case 2 :
       printf("Enter the Celsius  Temperature : ");
       scanf("%f",&temp);
       convertedTemp = (1.8*temp)+32;
       printf("The Temperature in Fahrenheit is :%f\n ",convertedTemp);
        break;    
    
    default:
         printf("Not a Correct Option");
        break;
    }
}