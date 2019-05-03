#include <stdio.h>
//questao 01
typedef struct {
    int hora, min, seg;
}HORARIO;

typedef struct{
    int dia, mes, ano;
}DATA;

typedef struct{
    char desc[51];
    HORARIO h;
    DATA d;
}COMP;
