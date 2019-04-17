//Questao 05
#include <stdio.h>
#include <math.h>
void calcula_hexagono(float l,float *area,float *perimetro){
    *area=(3*(pow(l,2))*sqrt(3))/2;
    *perimetro=6*l;
}
main(){
    float area, perimetro,lado;
    printf("digite o tamnho do lado: ");
    scanf("%f",&lado);
    calcula_hexagono(lado,&area,&perimetro);
    printf("Area = %.3f\nPerimetro = %.3f",area,perimetro);
}
