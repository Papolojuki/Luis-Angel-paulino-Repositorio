#include <stdio.h>
#include <math.h>
const int MAX = 100;
void Lectura(int[], int);
float Media(int[], int);
float Varianza(int[], int, float);
float Desviacion(float);
void Frecuencia(int[], int, int[]);
int Moda(int[], int);

void main(void)
{
    int TAM, MOD, ALU[MAX], FRE[11] = {0};
    float MED, VAR, DES;
    do
    {
        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM>MAX || TAM<1);
    Lectura(ALU, TAM);
    MED = Media(ALU, TAM);
    VAR = Varianza(ALU, TAM, MED);
    DES = Desviacion(VAR);
    Frecuencia(ALU, TAM, FRE);
    MOD = Moda(FRE, 11);
    printf("\n Media:   %.2f", MED);
    printf("\n Varianza:   %.2f", VAR);
    printf("\n Desviacion:   %.2f", DES);
    printf("\n Moda:   %d", MOD);
}
void Lectura(int A[], int T)
{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese elelemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}
float Media(int A[], int T)
{
    int I;
    float SUM = 0.0;
    for (I=0; I<T; I++)
        SUM += A[I];
    return(SUM/T);
}
float Varianza(int A[], int T, float M)
{
    int I;
    float SUM = 0.0;
    for (I=0; I<T; I++)
        SUM += pow ((A[I] - M), 2);
    return(SUM/T);
}
float Desviacion(float V)
{
    return(sqrt(V));
}
void Frecuencia(int A[], int P, int B[])
{
    int I;
    for (I=0; I<P; I++)
        B[A[I]]++;
}
int Moda(int A[], int T)
{
    int I, MOD = 0, VAL = A[0];
    for (I=1; I<T; I++)
        if (MOD<A[I])
    {
        MOD = I;
        VAL = A[I];
    }
    return (MOD);
}
