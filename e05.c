/*

Sabe-se que o valor de uma variável ou expressão do tipo vetor é o endereço do elemento zero do vetor.
Seja a[] um vetor qualquer, independente de tipo e tamanho, e pa um ponteiro para o mesmo tipo de a[].
Responda V ou F:

F - ( ) Após a atribuição pa = &a[0], pa e a possuem valores idênticos, isto é, apontam para o mesmo endereço
        pa = endereço do elemento de a[0]
        *pa = valor do elemento de a[0]
V - ( ) A atribuição pa = &a[0]; pode ser escrita como pa = a;
F - ( ) a[i] pode ser escrito como *(a+i)
        a[i] = valor correspondente a posição i
        *(a+i) = valor presente na posição a+i da memória

*/
