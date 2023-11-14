/*

Qual o valor de y no final do programa?
    Resposta: y = 4

#include <stdio.h>
int main(void) {
    int y, *p, x;
    y = 0;
    p = &y;     // p recebe o endereço de y
    x = *p;     // x recebe o valor de y, x = 0
    printf ("x = %d\n", x);
    x = 4;
    (*p)++;                     // y++, y = 1
    printf ("p = %d\n", *p);    // p imprime o valor de y
    x--;                        // x = 3
    printf ("x = %d\n", x);
    (*p) += x;                  // y = y + x, y = 4 
    printf ("y = %d\n", y);
    return(0);
}

*/

#include <stdio.h>
int main(void) {
    int y, *p, x;
    y = 0;
    p = &y;     // p recebe o endereço de y
    x = *p;     // x recebe o valor de y, x = 0
    printf ("x = %d\n", x);
    x = 4;
    (*p)++;                     // y++, y = 1
    printf ("p = %d\n", *p);    // p imprime o valor de y
    x--;                        // x = 3
    printf ("x = %d\n", x);
    (*p) += x;                  // y = y + x, y = 4 
    printf ("y = %d\n", y);
    return(0);
}