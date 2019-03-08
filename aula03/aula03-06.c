#include <stdio.h>
main(){
    int n1, n2, n3, aux;
    printf("DIGITE TRES NUMEROS INTEIRO >>> ");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2){
        if(n1>n3){
            if(n2>n3){
                aux=n1;
                n1=n3;
                n3=aux;
            }else{
                aux=n1;
                n1=n3;
                n3=aux;
            }
        }else{
            aux=n1;
            n1=n2;
            n2=aux;
        }
    }else{
        if(n2>n3){
            if(n1>n3){
                aux=n1;
                n1=n3;
                n3=n2;
                n2=aux;
            }else{
                aux=n2;
                n2=n3;
                n3=aux;
            }
        }
    }
    printf("ORDEM CRESCENTE\n");
    printf("%d , %d , %d\n",n1,n2,n3);
}
