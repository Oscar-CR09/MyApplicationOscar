#include <stdio.h>
#include "problema3.3.h"

void dividirFecha(long, int *, int *, int *);
int esAnyoBisiesto(int);

int main ()
{
    long fecha;
    int dia,mes,anyo;
    int cantMarzo,cantBisiesto,cantErros;
    int anyoBisiesto,hayError;
    
    cantMarzo=0;
    cantBisiesto=0;
    cantErros=0;

    printf("Fecha por; año mes dia: \n");
    scanf("%d",&fecha);
    
    while(fecha !=0)
    {
        dividirFecha(fecha,&dia,&mes,&anyo);
        anyoBisiesto=esAnyoBisiesto(anyo);
        if (mes==3)
        {
            cantMarzo=cantMarzo+1;
        }

        if (anyoBisiesto)
        {
            cantBisiesto=cantBisiesto+1;
        }

        hayError=(dia==29) && (mes==2) && !anyoBisiesto;
        if (hayError)
        {
            cantErros=cantErros+1;
        }

        printf("Fecha por; año mes dia \n");
        scanf("%d", &fecha);
    }

    printf("Fechas de Marzo: %d\n",cantMarzo);
    printf("Fechas de Bisiesto: %d\n",cantBisiesto);
    printf("Fechas con error: %d\n",cantErros);

    return 0;
}

void dividirFecha(long f, int *d, int *m, int *a)
{
    int resto;
    *a = f / 10000;
    resto = f % 10000;
    *m = resto / 100;
    *d = resto % 100;
}

int esAnyoBisiesto(int a)
{
    int multiploDe4, multiploDe100, multiploDe400;
    multiploDe4 = a % 4 == 0;
    multiploDe100 = a % 100 == 0;
    multiploDe400 = a % 400 == 0;

    return (multiploDe4 && !multiploDe100 || multiploDe400);
}