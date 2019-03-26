//Questao 10
#include <stdio.h>
void imprimir(float v[],int t){
    int i;
    putchar('\n');
    for(i=0;i<t;i++){
        printf("%.1f ",v[i]);
    }
    putchar('\n');
}
void adicionar(float v[],int t){
    int i;
    printf("Digite %d notas para o vetor\n",t);
    for(i=0;i<t;i++){
        scanf("%f",&v[i]);
    }
}
float mediaElementos(float v[],int t){
    float m=0;
    int i;
    for(i=0;i<t;i++){
        m+=v[i];
    }
    return m/(float)t;
}

main(){
    float vetor[15];
    adicionar(vetor,15);
    imprimir(vetor,15);
    printf("\nMedia geral das notas %.2f \n", mediaElementos(vetor,15));

}
