#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d", &d, &e, &f);
    a = d;
    b = e;
    c = f;
    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("%d\n%d\n%d\n\n", c, b, a);
        }
        else
        {
            printf("%d\n%d\n%d\n\n", b, c, a);
        }
    }
    else if(b>a && b>c)
    {
        if(a>c)
        {
            printf("%d\n%d\n%d\n\n", c, a, b);
        }
        else
        {
            printf("%d\n%d\n%d\n\n", a, c, b);
        }
    }
    else if(c>a && c>b)
    {
        if(a>b)
        {
            printf("%d\n%d\n%d\n\n", b, a, c);
        }
        else
        {
            printf("%d\n%d\n%d\n\n", a, b, c);
        }
    }
    printf("%d\n%d\n%d\n", d, e, f);
    return 0;
}
