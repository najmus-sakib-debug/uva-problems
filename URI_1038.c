#include<stdio.h>
int main()
{
    int a,b;
    double c;
    scanf("%d%d", &a, &b);
    if(a == 1)
    {
        c = b * 4.0;
    }
    else if(a == 2)
    {
        c = b * 4.50;
    }
    else if(a == 3)
    {
        c = b * 5.00;
    }
    else if(a == 4)
    {
        c = b * 2.00;
    }
    else if(a == 5)
    {
        c = b * 1.50;
    }
    printf("Total: R$ %.2lf\n", c);
    return 0;
}
