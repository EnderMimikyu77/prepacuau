
#include <stdio.h>
#include <string.h>
int main()
{
    int opcion = 0;
    char nombre[20];
    char correo[50];
    float num1 = 0;
    float num2 = 0;
    float suma = 0;
    
    printf("-----MENU-----\n");
    printf("1. Agregar usuario\n");
    printf("2. Sumar dos numeros\n");
    printf("3. Mensaje\n");
    printf("Selecciona la opcion deseada: \n");
    scanf("%d",&opcion);
    switch(opcion){
        case 1:
            printf("Dame tu nombre\n");
            scanf("%s",nombre);
            printf("Escribe tu correo\n");
            scanf("%s",correo);
        break;
        case 2:
            printf("Escribe num1\n");
            scanf("%f",&num1);
            printf("Escribe num2\n");
            scanf("%f",&num2);
            suma = num1 + num2;
            printf("Suma es igual a %f",suma);
        break;
        case 3:
            printf("Hola mundo");
        break;
        default:
            printf("Tas menso");
        break;
    }

    return 0;
}



