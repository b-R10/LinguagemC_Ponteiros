/*
Alocação de memória
    Toda memória usada deve ser previamente alocada
    a função malloc() aloca memória(contígua)
        v = (int*)malloc(sizeof(int)*10);
    a função free() libera a área alocada
Alocação dinâmica de memória, ou seja, em tempo de execução (malloc)
Estruturas encadeadas
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int alocacaoDeMemoria(){
    int i;
    int *v;
    v = (int*)malloc(sizeof(int)*10);
    if (v != NULL){       // memória alocada
        for (i = 0; i < 10; i++)
            v[i] = i+1;
    }
    for(i=0; i<10; i++){
        printf("\n%d", v[i]);
        printf("\t%d", &v[i]);
    }
    free(v);
}

int main(){
    alocacaoDeMemoria();
    return 0;
}