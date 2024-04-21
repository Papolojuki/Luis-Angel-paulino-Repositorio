#include <stdio.h>
#include <math.h>

int main() {
    float monto_prestamo, tasa_interes_anual = 0.12, pago_mensual, interes_mensual, principal, saldo_pendiente;
    int num_pagos = 12, mes;

    printf("Introduce el monto del prestamo: ");
    scanf("%f", &monto_prestamo);
    saldo_pendiente = monto_prestamo;

    FILE *archivo;
    archivo = fopen("tabla_amortizacion.txt", "w");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.");
        return 1;
    }

    fprintf(archivo, "Tabla de Amortizacion del Prestamo\n");
    fprintf(archivo, "Mes \t Pago Mensual \t Interes \t Principal \t Saldo Pendiente\n");

    pago_mensual = monto_prestamo * tasa_interes_anual / 12 / (1 - pow(1 + tasa_interes_anual / 12, -num_pagos));

    for (mes = 1; mes <= num_pagos; mes++) {
        interes_mensual = saldo_pendiente * tasa_interes_anual / 12;
        principal = pago_mensual - interes_mensual;
        saldo_pendiente -= principal;

        fprintf(archivo, "%d \t %.2f \t %.2f \t %.2f \t %.2f\n", mes, pago_mensual, interes_mensual, principal, saldo_pendiente);
    }

    fclose(archivo);

    printf("La tabla de amortizacion se ha guardado en el archivo 'tabla_amortizacion.txt'.\n");

    return 0;
}
