/*

Analise a expressão abaixo
(assuma que a variável x está armazenada no endereço 1000 de memória e que uma variável do tipo float ocupa 4 bytes de memória):
Comente o que ocorre nas linhas 3, 4, 5 e 6.

1 float x = 0;                          // &x = 1000
2 float *p1, *p2, *p3, *p4;
3 p1 = &x;                              // p1 = 1000
4 p2 = ++p1;                            // p2 = 1004 -> p2 recebe o valor de p1 após p1 ser incrementado
5 p3 = p2 + 4;                          // p3 = 1020
6 p4 = p3 - 5;                          // p3 = 1000

*/