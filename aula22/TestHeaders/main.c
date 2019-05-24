#include <stdio.h>
#include <stdlib.h>
#include "matrizes.h"

int main()
{
    printf("Testando Bibliotecas\n");
    int **mat=matriz(2,2);
    impressao(mat,2,2);
    preencher(mat,2,2);
    impressao(mat,2,2);
    liberar(mat,2);
    impressao(mat,2,2);
    return 0;
}
