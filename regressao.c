#include <stdio.h>
#include <stdlib.h>
#include "regressao.h"

Regressao calcular_regressao(double *x, double *y, int n) {
    double x_mean, y_mean;
    int i;
    for(i = 0; i<n; i++) {
        x_mean += x[i]
        y_mean += y[i]
    }

    x_mean = x_mean/n;
    y_mean = y_mean/n;

    double num, den;

    for(i = 0; i<n;i++) {
        num += (x[i] - x_mean) * (y[i] - y_mean);
        den += (x[i] - x_mean) * (x[i] - x_mean);
    }

    Regressao r;

    r.b1 = num/den;
    r.b0 = y_mean - r.b1 * x_mean;

    return r;
}

double prever(Regressao r, double x) {
    double result = r.b0 + r.b1 * x;
    
    return result;
}

