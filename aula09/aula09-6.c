//Questao 06
#include <stdio.h>
void imprimir(int v[],int t){
    int i;
    printf("Vetor\n");
    for(i=0;i<t;i++){
        printf("%d ",v[i]);
    }
    putchar('\n');
}
void adicionar(int v[],int t){
    int i;
    printf("Digite %d elementos para o vetor\n",t);
    for(i=0;i<t;i++){
        scanf("%d",&v[i]);
    }
}
int maiorElemento(int v[],int t){
    int m=v[0],i;
    for(i=1;i<t;i++){
        if(v[i]>m){
            m=v[i];
        }
    }
    return m;
}
int menorElemento(int v[],int t){
    int m=v[0],i;
    for(i=1;i<t;i++){
        if(v[i]<m){
            m=v[i];
        }
    }
    return m;
}
main(){
    int vetor[10];
    adicionar(vetor,10);
    imprimir(vetor,10);
    printf("\nMaior elemento %d \n", maiorElemento(vetor,10));
    printf("\nMenor elemento %d\n",menorElemento(vetor,10));
}
