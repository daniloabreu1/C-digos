#include <stdio.h>
main(){
    float s;
    printf("DIGITE O VALOR DO SALARIO: ");
    scanf("%f",&s);
    if(s>5000){
        printf("IMPOSTO >>> %.2f\n",s*0.3);
    }else{
        if(s>3000){
            printf("IMPOSTO >>> %.2f\n",s*0.25);
        }else{
            if(s>1600){
                printf("IMPOSTO >>> %.2f\n",s*0.2);
            }else{
                printf("ISENTO\n");
            }
        }
    }
}
