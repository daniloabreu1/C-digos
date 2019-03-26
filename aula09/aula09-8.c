//Questao 08
#include <stdio.h>
void imprimirInvertido(int v[],int t){
    int i;
    putchar('\n');
    for(i=t-1;i>=0;i--){
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
main(){
    int vetor[6];
    adicionar(vetor,6);
    imprimirInvertido(vetor,6);
}
