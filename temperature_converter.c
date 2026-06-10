#include <stdio.h>

int main(){
    int choice;
    float c,f,k;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n ");
    printf("2. Fahrenhite to celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenhite to Kelvin\n");
    printf("6. Kelvin to Fahrenhite\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch(choice){

        case 1:
        printf("Enter Celsiius: ");
        scanf("%f", &c);
        f = (c*9/5)+ 32;
        printf("Fahrenhite = %.2f\n", f);
        break;

        case 2:
        printf("Enter Fahrenhite: ");
        scanf("%f", &f );
        c = (f-32)*5/9;
        printf("Celsius = %.2f\n",c);

        case 3:
        printf("Enter Celsius: ");
        scanf("%f", &k);
        k = c + 273.15;
        printf("kelvin = %.2f\n",k);
        break;

        case 4:
        printf("Enter Kelvin: ");
        scanf("%f", &k);
        c = k - 273.15;
        printf("Celsius = %.2f\n",c);
        break;

        case 5:
        printf("Enter Fahrenhite: ");
        scanf("%f", &f);
        k = (f-32)*5/9 + 273.15;
        printf("kelvin = %.2f\n",k);
        break;

        case 6:
        printf("Enter Kelvin: ");
        scanf("%f", &k);
        f = (k-273.15)*9/5 + 32;
        printf("Fahrenhite = %.2f\n",f);
        break;

        default:
        printf("Tnvalid choice!");



    }
    return 0;
}
