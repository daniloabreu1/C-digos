//QUESTAO 01
#include <stdio.h>
#include <string.h>
//comprimento da string
int comprimento(char texto[21]){
    int r=0, i;
    for(i=0;texto[i]!='\0';i++){
        r++;
    }
    return r;
}
//apenas imprime invertida
void impressaoInvertida(char texto[21]){
    int t = comprimento(texto);
    for(t=t-1;t>=0;t--){
        printf("%c",texto[t]);
    }
}
//inverte a string
void swapString(char original[21]){
    int i,j,t = comprimento(original);
    char aux;
    for(i=0,j=t-1;i<t/2;i++,j--){
        aux=original[i];
        original[i]=original[j];
        original[j]=aux;
    }
}
//coloca a string invertida em outra string
void trocaString(char origem[21], char destino[21]){
    int i,j,t = comprimento(origem);
    for(i=0,j=t-1;i<t;i++,j--){
        destino[i]=origem[j];
    }
    destino[i]='\0';
}
main(){
    char frase[21],invertida[21];
    printf("DIGITE UM TEXTO ");
    gets(frase);
    printf("FRASE ORIGINAL:\n");
    puts(frase);
    printf("COMPRIMENTO DA STRING %d\n",comprimento(frase));
    printf("FUNCAO QUE IMPRIME INVERTIDA\n");
    impressaoInvertida(frase);
    printf("\nFRASE INVERTIDA:\n");
    swapString(frase);
    puts(frase);
    printf("FUNCAO QUE COPIA A FRASE INVERTIDA PARA OUTRA\n");
    trocaString(frase, invertida);
    printf("Original %s\nInvertida %s\n",frase,invertida);

}
