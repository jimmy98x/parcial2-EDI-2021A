#include <stdio.h>
#include <stdlib.h>

#define TAM 20

void capturaRenCol(int *n, int *m);
void llenaArrBiAzar(int arrBi[TAM][TAM], int n, int m, int rango);
void Trans(int arrBi[TAM][TAM], int n, int m);
void muestraArrBi(int arrBi[TAM][TAM], int n, int m);

int main()
{
    int N, M;
    int arregloBi[TAM][TAM];

    capturaRenCol(&N, &M);
    llenaArrBiAzar(arregloBi, N, M, 100);
    muestraArrBi(arregloBi, N, M);
    Trans(arregloBi, N, M);
}


void capturaRenCol(int *n, int *m)
{
    do {
        printf("Valor de n: ");
        scanf("%d", n);
        printf("Valor de m: ");
        scanf("%d", m);
    }while(*n>TAM);
}

void llenaArrBiAzar(int arrBi[TAM][TAM], int n, int m, int
rango)
{
    int r, c;

    srand(time(NULL));
    for(r=0; r<n; r++)
        for(c=0; c<m; c++)
    arrBi[r][c] = rand()%rango;
}

void muestraArrBi(int arrBi[TAM][TAM], int n, int m)
{
    int r, c;

    for(r=0; r<n; r++)
    {
    for(c=0; c<m; c++)
        printf("%4d", arrBi[r][c]);

        printf("\n");
    }
    printf("\n");
}

void Trans(int arrBi[TAM][TAM], int n, int m)
{
    int r, c;

    for(c=0; c<m; c++)
    {
    for(r=0; r<n; r++)
        printf("%4d", arrBi[r][c]);

        printf("\n");
    }
}
