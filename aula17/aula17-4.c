//questao 05
#include <stdio.h>
#include <math.h>
int raizes(float a,float b,float c, float *x1,float *x2){
    int r=0;
    float d;
    if(a==0){
        r= -2;
        //não calcula as raizes
    }else{
        d=pow(b,2)-4*a*c;
        if(d<0){
            r= 0;
        }else{
            if(d==0){
                *x1=(-b+sqrt(d))/2*a;
                *x2=*x1;
                r=1;
            }else{
                *x1=(-b+sqrt(d))/2*a;
                *x2=(-b-sqrt(d))/2*a;;
                r=2;
            }
        }
    }
    return r;
}
main(){
    float a=10, b=6, c=10,x1, x2;
    int r=raizes(a,b,c,&x1,&x2);
    if(r==-2){
        printf("Nao eh equacao do segundo grau\n");
    }else{
        printf("quantidade de raizes: %d\n",r);
        printf("Raizes %f - %f\n",x1,x2);
    }

}
