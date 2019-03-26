//Questao 05
#include <stdio.h>
void imprimirPares(int v[],int t){
    int i;
    printf("\nElementos Pares\n");
    for(i=0;i<t;i++){
        if(v[i]%2==0){
            printf("%d ",v[i]);
        }
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
int quantidadePares(int v[],int t){
    int p=0,i;
    for(i=0;i<t;i++){
        if(v[i]%2==0){
            p++;;
        }
    }
    return p;
}

main(){
    int vetor[10];
    adicionar(vetor,10);
    printf("\nO vetor possui %d numeros pares\n",quantidadePares(vetor,10));
    imprimirPares(vetor,10);

}
