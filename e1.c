/*
Ex.1:
    Ao se utilizar um vetor como parâmetro para uma função que informação está sendo passada à função?
    Resposta: C - o primeiro elemento do vetor

*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int funcao(int a){
    printf("%d\n", a);
    printf("%p", a);
}

int main(){
    int v[3] = {1,2,3};
    funcao(v);
    int b = &v[0];
    printf("\n%d", b);
    return 0;
}