#define REGRESSAO_H

typedef struct {
    double b0;
    double b1;
} Regressao;

Regressao calcular_regressao(double *x, double *y, int n);

double prever(Regressao r, double x);
