/*

O que imprime o programa a seguir?
    Resposta: O programa imprime "a = 20, b = 20", mas, os valores de a e b são 20 e 10 respectivamente

    #include <stdio.h>
    
    func(int *a, int b){
        int temp;
        temp = *a;          // temp = 10
        *a = b;             // a = 20
        b = temp;           // b = 10
    }

    int main(void){
        int a = 10, b = 20; func(&a, b);
        printf("a = %d, b = %d", a, b);
        return 0;
    }


*/

    #include <stdio.h>
    
    void func(int *a, int b){
        int temp;
        printf("a = %d, b = %d, temp = %d\n", a, b, temp);
        temp = *a;          // temp = 10
        printf("a = %d, b = %d, temp = %d\n", a, b, temp);
        *a = b;             // a = 20
        printf("a = %d, b = %d, temp = %d\n", *a, b, temp);
        b = temp;           // b = 10
        printf("a = %d, b = %d, temp = %d\n", a, b, temp);
    }

    int main(void){
        int a = 10, b = 20;
        func(&a, b);
        printf("a = %d, b = %d\n", a, b);
        return 0;
    }
