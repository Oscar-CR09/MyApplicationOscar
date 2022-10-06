#include <stdio.h>

int sigueinteNroPrimo(int* temp)
{
	*temp=*temp+1;
	while  (!esPrimo(*temp))
	{   
		*temp=*temp+1;
	}
	return *temp;
}

int main()
{
	int n;
	printf("Ingrese cuantos primos quiere ver:");
	scanf("%d",&n);
	
	int aux;
	for (int i = 0; i < n; i++) 
	{
		printf("%d ",sigueinteNroPrimo(&aux));
	}
	return 0;
}
