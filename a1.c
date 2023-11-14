/*
Testes de mesa
*/

// int main()
// {
//     int a, b, *c;
//     a = 3;
//     b = 4;
//     c = &a;
//     b++;
//     *c = a+2;
//     printf("%d %d", a, b);
//     return 0;
// }

// int main()
// {
//     int a, b, *c;
//     a = 4;
//     b = 3;
//     c = &a;
//     *c = *c + 1;
//     c = &b;
//     b = b + 4;
//     printf("%d %d %d", a, b, *c);
//     return 0;
// }

int main()
{
    int a, b, *c, *d, *f;
    a = 4;
    b = 3;
    c = &a;
    d = &b;
    *c /= 2;
    f = c;
    c = d;
    d = f;
    printf("%d %d", *c, *d);
    return 0;
}