#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d", &a);
    b = a / 3600;
    c = a - (b * 3600);
    d = c / 60;
    e = c - (d * 60);
    printf("%d:%d:%d\n", b, d, e);
    return 0;
}
