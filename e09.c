/*

Analise o programa abaixo. Qual o valor apresentado pela diferença pb - pa? Explique o resultado apresentado.
    Resposta: um inteiro, geralmente, ocupa 4 bytes. Supondo que o elemento 0 esteja na posição 0:
        elemento 0: posição 0
        elemento 1: posição 4
        elemento 2: posição 8
        elemento 3: posição 12
        elemento 4: posição 16
        elemento 5: posição 20
        elemento 6: posição 24
        elemento 7: posição 28
        elemento 8: posição 32
        elemento 9: posição 36
    portanto, pb - pa = 36

#include <stdio.h>
int main(void){
    float *pa, *pb;
    float vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    pa = &vet[0];                                       // pa = endereço do elemento 0 do vetor
    pb = &vet[9];                                       // pb = endereço do elemento 9 do vetor
    printf("pa = %d pb = %d", pa, pb);
    printf("\npb - pa = %d", pb - pa);                  // pb - pa = 36
    return 0;
}

*/
#include <stdio.h>
int main(void){
    float *pa, *pb;
    float vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    pa = &vet[0];                                       // pa = endereço do elemento 0 do vetor
    pb = &vet[9];                                       // pb = endereço do elemento 9 do vetor
    printf("pa = %d pb = %d", pa, pb);
    printf("\npb - pa = %d", pb - pa);                  // pb - pa = 36
    return 0;
}
