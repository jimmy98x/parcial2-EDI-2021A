#include <stdio.h>
#include <stdlib.h>

#define TAM 20

void capturaRenCol(int *n, int *m);
void llenaArrBiAzar(int arrBi[TAM][TAM], int n, int m, int rango);
void promedio(int arrBi[TAM][TAM],float arrProm[TAM], int n, int m);
void muestraArrBi(int arrBi[TAM][TAM], int n, int m);

int main()
{
    int N, M;
    int arregloBi[TAM][TAM];
    float arregloProm[TAM];

    capturaRenCol(&N, &M);
    llenaArrBiAzar(arregloBi, N, M, 100);
    muestraArrBi(arregloBi, N, M);
    promedio(arregloBi, arregloProm, N, M);
}


void capturaRenCol(int *n, int *m)
{
    do {
        printf("Valor de N: ");
        scanf("%d", n);
        printf("Valor de M: ");
        scanf("%d", m);
    }while(*m > TAM);
}

void llenaArrBiAzar(int arrBi[TAM][TAM], int n, int m, int rango)
{
    int r, c;

    srand(time(NULL));
    for(r=0; r<n; r++)
        for(c=0; c<m; c++)
    arrBi[r][c] = rand()%rango;
}

void promedio(int arrBi[TAM][TAM], float arrProm[TAM], int n, int m)
{
    int r, c, suma;


    for(c=0; c<m; c++)
    {
        suma=0;
        for(r=0; r<n; r++)
        {
                suma = suma + arrBi[r][c];

        }
         arrProm[r] = suma/n;
        printf("Promedio columna %d: %f\n",c, arrProm[r]);
    }
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
}
