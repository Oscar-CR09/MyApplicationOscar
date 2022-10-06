#include <stdio.h>

double valorAbsoluto (double);

int main ()
{
    double v,a;
    printf("Ingrese un valor numerico:\n");
    scanf("%lf",&v);
    a=valorAbsoluto(v);

    printf("El valor absoluto de %lf es %lf\n",v,a);
    return 0;
}

double valorAbsoluto (double d)
{
    return d<0?-d:d;
}