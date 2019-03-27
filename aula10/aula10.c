#include <stdio.h>
#define LIM 10
int menu(){
    int o;
    system("cls");
    printf("1 - Para Somar Duas Matrizes\n");
    printf("2 - Para Subtrair Duas Matrizes\n");
    printf("3 - Para Multiplicar Uma Matriz Por Escalar\n");
    printf("4 - Para Multiplicar Duas Matrizes\n");
    printf("0 - Para Sair\n\n");
    printf("Escolha >>> ");
    scanf("%d",&o);
    return o;
}
void preencher(int m[LIM][LIM],int lin,int col){
    int i,j;
    putchar('\n');
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("[%d][%d] = ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
}
void imprimir(int m[LIM][LIM],int lin,int col){
    int i,j;
    putchar('\n');
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf("%d ",m[i][j]);
        }
        putchar('\n');
    }
}
void somar(int a[LIM][LIM],int b[LIM][LIM],int c[LIM][LIM],int lin,int col){
    int i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}
void sub(int a[LIM][LIM],int b[LIM][LIM],int c[LIM][LIM],int lin,int col){
    int i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
}
void escalar(int a[LIM][LIM],int c[LIM][LIM],int e,int lin,int col){
    int i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            c[i][j]=a[i][j]*e;
        }
    }
}
//falta implementar o cálculo de matrizes
void mult(int a[LIM][LIM],int b[LIM][LIM],int c[LIM][LIM],int lin1,int col1,int lin2,int col2){
    int i,j,k;
    for(i=0;i<lin1;i++){
        for(j=0;j<col;j++){
            for(k=0;k){

            }
        }
    }
}
int validar(int l1,int c1,int l2,int c2){
    if((l1==l2)&&(c1==c2)){
        if((l1<=LIM)&&(c1<=LIM)){
            return 1;
        }
    }
    return 0;
}
int validarMult(int l1,int c1,int l2,int c2){
    if(l2==c1){
        if((l1<=LIM)&&(c1<=LIM)&&(c2<=LIM)){
            return 1;
        }
    }
    return 0;
}
main(){
    int o,e,linha1,linha2, coluna1, coluna2,a[LIM][LIM],b[LIM][LIM],c[LIM][LIM];
    do{
        o=menu();
        switch(o){
            case 1:{
                printf("\nDigite Linhas e Colunas da Matriz A: ");
                scanf("%d %d",&linha1,&coluna1);
                printf("\nDigite Linhas e Colunas da Matriz B: ");
                scanf("%d %d",&linha2,&coluna2);
                if(validar(linha1,coluna1,linha2,coluna2)){
                    preencher(a,linha1,coluna1);
                    preencher(b,linha2,coluna2);
                    somar(a,b,c,linha1,coluna1);
                    imprimir(a,linha1,coluna1);
                    printf("+");
                    imprimir(b,linha1,coluna1);
                    printf("=");
                    imprimir(c,linha1,coluna1);
                }else{
                    printf("Dimensoes Distintas\n");
                }
                system("pause");
                break;
            }
            case 2:{
                printf("\nDigite Linhas e Colunas da Matriz A: ");
                scanf("%d %d",&linha1,&coluna1);
                printf("\nDigite Linhas e Colunas da Matriz B: ");
                scanf("%d %d",&linha2,&coluna2);
                if(validar(linha1,coluna1,linha2,coluna2)){
                    preencher(a,linha1,coluna1);
                    preencher(b,linha2,coluna2);
                    sub(a,b,c,linha1,coluna1);
                    imprimir(a,linha1,coluna1);
                    printf("-");
                    imprimir(b,linha1,coluna1);
                    printf("=");
                    imprimir(c,linha1,coluna1);
                }else{
                    printf("Dimensoes Distintas\n");
                }
                system("pause");
                break;
            }
            case 3:
                {
                printf("\nDigite Linhas e Colunas da Matriz A: ");
                scanf("%d %d",&linha1,&coluna1);
                if((linha1<=LIM)&&(coluna1<=LIM)){
                    preencher(a,linha1,coluna1);
                    printf("Digite o escalar: ");
                    scanf("%d",&e);
                    escalar(a,c,e,linha1,coluna1);
                    imprimir(a,linha1,coluna1);
                    printf("\nx\n");
                    printf("\n%d\n=\n",e);
                    imprimir(c,linha1,coluna1);
                }else{
                    printf("Dimensoes Distintas\n");
                }
                system("pause");
                break;
            }
            case 4:{
                printf("\nDigite Linhas e Colunas da Matriz A: ");
                scanf("%d %d",&linha1,&coluna1);
                printf("\nDigite Linhas e Colunas da Matriz B: ");
                scanf("%d %d",&linha2,&coluna2);
                if(validarMult(linha1,coluna1,linha2,coluna2)){
                    preencher(a,linha1,coluna1);
                    preencher(b,linha2,coluna2);
                    mult(a,b,c,linha1,coluna1,linha2,coluna2);
                    imprimir(a,linha1,coluna1);
                    printf("x");
                    imprimir(b,linha2,coluna2);
                    printf("=");
                    imprimir(c,linha1,coluna2);
                }else{
                    printf("Dimensoes Distintas\n");
                }
                system("pause");
                break;
            }
            case 0:
                printf("\n%d\n",o);break;
            default:
                printf("\nerro\n");
        }
    }while(o!=0);
}
