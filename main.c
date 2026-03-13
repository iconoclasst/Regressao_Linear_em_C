#include <stdio.h>
#include <stdlib.h>
#include "regressao.h"

void imprimir(int n, double* v) {
    int i;
    printf("{ ");
    for(i =0; i<n; i++) {
        printf("%.2le ", v[i]);
    }
    printf("}\n");

}

int main (void)
{

int n=5;

double x[] = {1, 2, 3, 4, 5};
double y[] = {2, 4, 5, 4, 5};

Regressao modelo = calcular_regressao(x, y, n);

printf("Interceptação b0: %.2le\n", modelo.b0);
printf("Inclinação b1: %.2le\n", modelo.b1);

printf("Valores reais: ");
imprimir(n, x);

printf("Valores preditos: ");

int i;
printf("{ ");
for(i = 0; i<n; i++) {
    printf("%.2le ", prever(modelo, x[i]));
}
printf("}\n");

return 0;
}

