#include <stdio.h>
main(){
    int n=10,*pn;
    pn=&n;
    printf("%d %d\n",*pn,(*pn)+=5);
}
