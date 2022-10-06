#include <stdio.h>

void incrementar();

int i;

int main ()
{
    while (i<10)
    {
        printf("%d", i);
        incrementar();
    }
    
    return 0;
}

void incrementar()
{
    i=i+1;
}