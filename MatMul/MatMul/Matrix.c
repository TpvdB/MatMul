#include "Matrix.h"

int xa(int xm, int ym, int b) {
	return xm + ym * b;
}

int xm(int xa, int b) {
	return xa % b;
}

int ym(int xa, int b) {
	return xa / b;
}

void einlesen(double* M, unsigned n) {
	double value;
	for (int array_index = 0; array_index < n * n; array_index++)
	{
		scanf("%lf", &value);
		M[array_index] = value;
	}
}

void ausgabe(double* M, unsigned n) {
	for (int ym = 0; ym < n; ym++)
	{
		for (int xm = 0; xm < n; xm++) {
			printf("%lf ", M[xa(xm, ym, n)]);
							    //~ M(xm, ym)
		}
		printf("\n");
	}
}

void mult(double* M1, double* M2, double* M3, unsigned n) {
	unsigned M3_array_index;
	for (int ym = 0; ym < n; ym++)
	{
		for (int xm = 0; xm < n; xm++) 
		{
			M3_array_index = xa(xm, ym, n);
			M3[M3_array_index] = 0;
			for (int source_index = 0; source_index < n; source_index++)
			{
				M3[M3_array_index] += M1[xa(source_index, ym, n)] * M2[xa(xm, source_index, n)];
				// M3(xm, ym)			 M1(source_index, ym)		    *  	 M2(xm, source_index)
			}
		}
	}
}