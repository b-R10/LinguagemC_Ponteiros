/*

Encontre os erros dos programas seguintes e explique-os.

Programa 1
#include <stdio.h>
int main(void) {
    int vet[] = {1,2,3,4,5,6,7};
    size = 7, i, *pi = vet;             // o endereço apontado por pi recebe o valor de vet[0],
                                        // mas, não se sabe para onde ele está apontando
    for (i=0; i < size; i++, pi +=2)
        printf(" % d", *pi);            // deveria ser: %d
    return 0;
    8                                   // 8 não cabe dentro dessa função
}

Programa 2

#include <stdio.h>
int main(void) {
	int vet[] = {1,2,3,4,5,6,7};
    int size = 10, i, *pi = vet;        // o endereço apontado por pi recebe o valor de vet[0],
                                        // mas, não se sabe para onde ele está apontando
    for (i = 0; i < size; i++)          // o valor de size é maior do que o vetor que ele roda
        printf(" % d", vet[i]);         // deferia ser: %d
    return 0;
                                        // não há chaves fechando a função main()
*/