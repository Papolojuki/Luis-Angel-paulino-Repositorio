#include <stdio.h>
const int MAX=100;
void Lectura(int[], int);
int Binaria(int[], int, int);
void main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a busar: ");
    scanf("%d", &ELE);
    RES = Binaria(VEC, TAM, ELE);

    if (RES)
        printf("\n El elemento seencuentra en la posicion: %d", RES);
    else
        printf("\n El elemento no se encuentra en el arreglo");
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
int Binaria(int A[], int T, int E)
{
    int ELE, IZQ = 0, CEN, DER = T-1, BAN = 0;
    while ((IZQ <= DER) && (!BAN))
    {
        CEN = (IZQ + DER)/2;
        if (E == A[CEN])
            BAN = CEN;
        else
            if (E>A[CEN])
                IZQ = CEN + 1;
            else
                DER = CEN - 1;
    }
    return (BAN);
}
