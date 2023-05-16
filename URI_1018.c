#include<stdio.h>
int main()
{
    long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
    scanf("%ld", &a);
    printf("%ld\n", a);
    b = a / 100;
    printf("%ld nota(s) de R$ 100,00\n", b);
    c = a - (b * 100);
    d = c / 50;
    printf("%ld nota(s) de R$ 50,00\n", d);
    e = c - (d * 50);
    f = e / 20;
    printf("%ld nota(s) de R$ 20,00\n", f);
    g = e - (f * 20);
    h = g / 10;
    printf("%ld nota(s) de R$ 10,00\n", h);
    i = g - (h * 10);
    j = i / 5;
    printf("%ld nota(s) de R$ 5,00\n", j);
    k = i - (j * 5);
    l = k / 2;
    printf("%ld nota(s) de R$ 2,00\n", l);
    m = k - (l * 2);
    n = m / 1;
    printf("%ld nota(s) de R$ 1,00\n", n);
    return 0;
}
