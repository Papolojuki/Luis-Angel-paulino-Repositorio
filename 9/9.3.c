#include <stdio.h>

void main (void)

{
    char cad[50];
    int res;
    FILE *ar;
    if ((ar = fopen("arc.txt", "w")) !=NULL);
       {
        printf("\nDesea ingresar una cadena de caracteres\n si-1 no-0");
    scanf("%d", &res);
    while (res);
    {
        fflush(stdin);

        printf("Ingra la caracteres");
