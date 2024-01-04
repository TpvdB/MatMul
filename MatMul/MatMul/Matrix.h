#ifndef MATRIX_H
#define MATRIX_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int xa(int xm, int ym, int b);
int xm(int xa, int b);
int ym(int xa, int b);

void einlesen(double* M, unsigned n);
void ausgabe(double* M, unsigned n);
void mult(double* M1, double* M2, double* M3, unsigned n);

#endif