#include <stdio.h>
#include "numeros.h"

int esPrimo(int);

int main ()
{
    int n, cont, i;
    printf("¿Cuantos primos quieres ver?\n");
    scanf("%d",&n);

    cont=0;
    i=1;

    while (cont<n) 
    {
        if (esPrimo(i))
        {
            printf("%d\n",i );
            cont=cont + 1;
        }
        
    }
    
}

int esPrimo(int n)
{
    int ok = 1;

    for (int i = 2; i < n && ok; i++)
    {
        if (n % i == 0)
        {
            ok = 0;
        }
    }
    return ok;
}
