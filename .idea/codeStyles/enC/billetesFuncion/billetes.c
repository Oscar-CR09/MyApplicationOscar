void procesarBilletes(int *v, int denom)
{
    int cant = *v / denom;
    *v = *v % denom;
    printf("%d Billetes de $%d\n", cant, denom);
}