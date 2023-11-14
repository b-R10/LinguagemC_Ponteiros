/*

Explique a diferença entre:
    a. p++;
    b.(*p)++;
    c.*(p++);

caso a:
    p = p + 1

caso b:
    (*p)++
    soma 1 ao valor apontado por p

caso c:
    *(p++)
    p aponta para o próximo endereço(no caso de int, 4 bytes a frente)

*/