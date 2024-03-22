#include <stdio.h>
const int MAX=100;
void Lectura(int[], int);
int Busca(int[], int, int);

void main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE);
    if (RES)
        printf("\nEl elemento se encuentra en la posicion %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");
}
void Lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
int Busca(int A[], int T, int K)
{
    int I =0, BAN =0, RES;
    while (I<T && !BAN)
        if (A[I] == K)
        BAN++;
    else
        I++;
    if (BAN)
        RES = I+1;
    else
        RES = BAN;
    return (RES);
}
