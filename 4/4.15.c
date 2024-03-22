#include <stdio.h>


/*Productoria.
El programa calcula la productoria de los N primeros numeros naturales. */

int productoria(int);           /* Prototipo de funcion.*/

void main(void)
{
    int NUM;

    /* Se escribe un do-while para verificar que el numero del cual se quiere calcular la productoria sea correcto. */

    do
    {
        printf("Ingresa el numero del cual quieres calcular la productoria: ");
        scanf("%d", &NUM);
    }
    while (NUM > 100 || NUM < 1);
    printf("\nLa productoria de %d es: %d", NUM, productoria(NUM));
}

int productoria(int N)
/* La funcion calcula la productoria de N. */

{
    int I, PRO = 1;
    for (I = 1; I <= N; I++)
        PRO *= I;
    return(PRO);
}
