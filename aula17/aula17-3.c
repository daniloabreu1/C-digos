//questao 05
#include <stdio.h>
int negativos(float *vet, int n){
    int i,r=0;
    for(i=0;i<n;i++){
        if(*(vet+i)<0){
            r++;
        }
    }
    return r;
}
main(){
    float v[5]={-1, 2, -11, 4,0};
    printf("quantidade de negativos: %d\n",negativos(v,5));
}
