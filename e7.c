/*

Defina qual a diferença entre as duas linhas de instrução apresentadas abaixo (linhas 4 e 5).
Considerando que a variável inteira i possui o valor 7, qual a saída apresentada pela linha 4 e pela linha 5?
    Resposta:
        linha 4:
            Valor de i: 7
        linha 5:
            Valor de i: posição de i na memória

int	i, *p_contador;
i = 7;
p_contador = &i;
printf(“\n Valor de i: %d”, *p_contador);
printf(“\n Valor de i: %d”, p_contador);

*/

#include <stdio.h>
int main(){
    int	i, *p_contador;
    i = 7;
    p_contador = &i;
    printf("\n Valor de i: %d", *p_contador);
    printf("\n Valor de i: %d", p_contador);
}