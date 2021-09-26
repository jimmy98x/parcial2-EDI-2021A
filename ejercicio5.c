#include <stdio.h>
#include <stdlib.h>

#define TAM 20

void capturaRenCol(int *n);
void llenaArrBiAzar(int arrBi[TAM][TAM], int n);
void Sim(int arrBi[TAM][TAM], int n);
void muestraArrBi(int arrBi[TAM][TAM], int n);

int main()
{
    int N;
    int arregloBi[TAM][TAM];

    capturaRenCol(&N);
    llenaArrBiAzar(arregloBi, N);
    muestraArrBi(arregloBi, N);
    Sim(arregloBi, N);
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
          scanf("%d",arrBi[r][c]);
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
    printf("\n");
}

void Sim(int arrBi[TAM][TAM], int n)
{
    int r, c, cont=0;

    for(r=0; r<n; r++)
    {
    for(c=0; c<n; c++)
        if(arrBi[r][c] = arrBi[c][r])
        {
            cont=cont+1;
        }
    }
    if(cont=25)
       printf("La matriz es simetrica");
       else
        if(cont!=25)
            printf("La matriz no es simetrica");
}
