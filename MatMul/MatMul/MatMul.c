#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "Matrix.h"


int main()
{
    unsigned n;
    double* M1, *M2, *M3;
    printf("Bitte gib die Dimension (n) der Matrizen (nxn) an\n");
    scanf("%u", &n);
    M1 = (double*)malloc(n * n * sizeof(double));
    M2 = (double*)malloc(n * n * sizeof(double));
    M3 = (double*)malloc(n * n * sizeof(double));
    printf("Bitte geben sie die Werte für die erste Matrix ein\n");
    einlesen(M1, n);
    printf("Bitte geben sie die Werte für die zweite Matrix ein\n");
    einlesen(M2, n);
    mult(M1, M2, M3, n);
    printf("Ergebnis:\n");
    ausgabe(M3, n);
    free(M1);
    free(M2);
    free(M3);
}