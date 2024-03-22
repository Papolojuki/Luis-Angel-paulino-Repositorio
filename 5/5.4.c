#include <stdio.h>
const int MAX = 10;
void Lectura(int VEC[], int T);
void Imprime (int VEC[], int T);
void Producto(int *X, int *Y, int *Z, int T);

void main(void)
{
    int VE1[MAX], VE2[MAX], VE3[MAX];
    printf("\nProducto de los vectores");
    Imprime(VE3, MAX);
}
void Lectura(int VEC[], int T)
{
    int I;
    printf("\n");
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &VEC[I]);
    }
}
void Imprime(int VEC[], int T)
{
    int I;
    for (I=0; I<T; I++)
        printf("\n VEC[%d]: %d", I+1, VEC[I]);
}
void Producto(int *X, int *Y, int *Z, int T)
{
    int I;
    for (I=0; I<T; I++)
        Z[I] = X[I] * Y[I];
}
