/*
Faça uma solução para realizar as seguintes operações usando ponteiros e alocação de memória (conforme pg23) com a função malloc( ):

Inserir 10 valores em um vetor de inteiros
Duplicar os elementos do vetor
Imprimir os valores do vetor 

Use a estrutura switch-case para a escolha das opções acima.
O usuário decidirá quando encerrar o programa.
Quando escolher essa opção, libere memória usando a função free( ).
Use modularidade
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>

int switchCase(){
    int a;
    printf("Insira uma das opções:"
           "\n\t1 - Inserir 10 valores em um vetor de inteiros"
           "\n\t2 - Duplicar os elementos do vetor"
           "\n\t3 - Imprimir os valores do vetor"
           "\n\t0 - Finalizar programa\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    case 3:
        return 3;
        break;
    default:
        printf("Programa finalizado.");
        return 0;
    }
}

void alocacaoDeMemoria(){
    int *v;
    v = (int*)malloc(sizeof(int)*10);
    if (v != NULL)
        for(int i=0;i<10;i++)
            v[i] = i+1;
}
void case1(){
    int *v;
    for(int i = 0; i<10; i++){
        printf("V[%d] = ", i+1);
        scanf("%d", &v[i]);
    }
}
void case2(){
    int *v;
    for(int i = 0; i<10; i++)
        v[i] *= 2;
}
void case3(){
    int *v;
    for(int i = 0; i<10; i++)
        printf("\n%d", v[i]);
}


int main(){
    setlocale(LC_ALL, "portuguese");
    int *v;
    v = (int*)malloc(sizeof(int)*10);
    alocacaoDeMemoria();
    int escolha = 10;
    while(escolha != 0){
        escolha = switchCase();
        if(escolha == 1){
            case1();
        } else if(escolha == 2) {
            case2();
        } else if(escolha == 3) {
            case3();
        } else if(escolha == 0) {
            free(v);
        }
    }
    return 0;
}