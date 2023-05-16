#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d", &a, &b);
    if(a < b)
    {
        c = b - a;
    }
    else if(a > b)
    {
        c = 24 - (a - b);
    }
    else if(a == b)
    {
        c = 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", c);
    return 0;
}
