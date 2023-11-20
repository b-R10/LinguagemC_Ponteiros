/*

Analise a expressão abaixo e identifique os valores finais de pc1, pc2, pc3 e pc4
(assuma que a variável x está armazenada no endereço 1000 de memória e que uma variável do tipo caracter ocupa 1 byte de memória):

char x = 0;                         // &x = 1000
char *pc1, *pc2, *pc3, *pc4;

pc1 = &x;                           // pc1 = 1000
pc2 = pc1++;                        // pc2 = 1001
pc3 = pc2 + 4;                      // pc3 = 1005
pc4 = pc3 - 5;                      // pc4 = 1000

*/
