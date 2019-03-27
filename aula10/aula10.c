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

}
void sub(int a[LIM][LIM],int b[LIM][LIM],int c[LIM][LIM],int lin,int col){

}
void escalar(int a[LIM][LIM],int c[LIM][LIM],int e,int lin,int col){

}

void mult(int a[LIM][LIM],int b[LIM][LIM],int c[LIM][LIM],int lin1,int col1,int lin2,int col2){

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

            }
            case 2:{
            }
            case 3:
                {

            }
            case 4:{

                break;
            }
            case 0:
                printf("\nSaindo...\n");break;
            default:
                printf("\nErro\n");
        }
    }while(o!=0);
}
