#include <stdio.h>

void main(void)
{
    char p1;
    FILE *ar;
    if ((ar = fopen("arc.txt", "r")) != NULL)
{
while (!feof(ar))

{
    p1 = fget(ar);
    putchar(p1);
    }
    fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");
    }
