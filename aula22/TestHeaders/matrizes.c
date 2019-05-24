#include <stdio.h>
#include <stdlib.h>
#include "matrizes.h"

int** matriz(int lin,int col){
    int i,**m;
    m=(int**)malloc(sizeof(int*)*lin);
    for(i=0;i<lin;i++){
        m[i]=(int*)calloc(col,sizeof(int));
    }
    return m;
}
void impressao(int **m,int lin, int col){
    int i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%d ",m[i][j]);
        }
        putchar('\n');
    }
}
void preencher(int **m,int lin, int col){
    int i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("[%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}
void liberar(int **m,int col){
    int i;
    for(i=0;i<col;i++){
        free(m[i]);
    }
    free(m);
}

