/*

Ponteiros   (apontador)             // é um tipo de variável que armazena um endereço de memória
    char *p, *q;                    // ponteiros para caracteres
    a = k;
    p = &a;                         // p recebe o endereço de a
    printf("%p", p);                // imprime o endereço de a (que foi armazenado em p)
    printf("%c", *p);               // imprime o conteúdo de a (apontado pelo endereço armazenado em p)
    q = p;                          // q reecbe o 
    printf("%c", *q);               // imprime k

& - operador de endereço
    Obtém o endereço e memória

* - operador de redireção ou indireção
    acessa o conteúdo da memória apontado pelas variáveis p e q

Todo ponteiro deve ser inicializado (ou com NULL ou com o endereço de uma variável)
    int *p = NULL;
    // ou
    int var = 5;
    int *q = &var;

int v[] = {1,2,3,4,5,6}, *p;
for(p = v; p<= &v[5]; p++);                     // p aponta para a primeira posição do vetor
    printf("%d\n", *p);                         // p = v; é o mesmo que p = &v[0]
                                                // p++ é o mesmo que (p+1)
                                                // (p + N) desloca N bytes para à frente


*/


#include <stdio.h>

int main()
{
    int v[] = {1,2,3,4,5,6}, *p;
    for(p = v; p <= &v[5]; p++)
    {
        printf("\n%d", *p);         // imprime o conteúdo apontado por p
        printf("\n%d", p);          // imprime o endereço da memória contido em p
    }
    return 0;
}

