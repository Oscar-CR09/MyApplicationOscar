#include <stdio.h>

int siguienteNumero()
{
    static int n=0;
    n=n+1;
}

int main()
{
    for (int i = 0; i < 10 ; i++)
    {
        printf("%d \n",siguienteNumero());
    }
    
}