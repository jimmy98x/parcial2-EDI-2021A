#include <stdio.h>
#include <stdlib.h>

#define TAM 20

void capturaRenCol(int *n);
void llenaArrBiAzar(int arrBi[TAM][TAM], int n);
void muestraArrBi(int arrBi[TAM][TAM], int n);

int main()
{
    int num;
    int arregloBi[TAM][TAM], arregloSum[TAM];

    capturaRenCol(&num);
    llenaArrBiAzar(arregloBi, num);
    muestraArrBi(arregloBi, num);
}


void capturaRenCol(int *n)
{
    do {
        printf("Valor de n: ");
        scanf("%d", n);
    }while(*n>TAM);
}

void llenaArrBiAzar(int arrBi[TAM][TAM], int n)
{
    int r, c;

    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            if(r!=c)
                arrBi[r][c] = 0;
             else
                if(r=c)
                    arrBi[r][c] = 1;

        }

    }

}

void muestraArrBi(int arrBi[TAM][TAM], int n)
{
    int r, c;

    for(r=0; r<n; r++)
    {
    for(c=0; c<n; c++)
        printf("%4d", arrBi[r][c]);

        printf("\n");
    }
}
