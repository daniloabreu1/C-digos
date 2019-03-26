//Questao 07
#include <stdio.h>
void imprimir(int v[],int t){
    int i;
    putchar('\n');
    for(i=0;i<t;i++){
        printf("%d ",v[i]);
    }
    putchar('\n');
}
void adicionar(int v[],int t){
    int i;
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
int posicaoMaior(int v[],int t){
    int m=v[0],i,p=0;
    for(i=1;i<t;i++){
        if(v[i]>m){
            m=v[i];
            p=i;
        }
    }
    return p+1;
}
main(){
    int vetor[10];
    adicionar(vetor,10);
    imprimir(vetor,10);
    printf("Maior elemento %d \n", maiorElemento(vetor,10));
    printf("Que esta na posicao %d\n",posicaoMaior(vetor,10));
}
