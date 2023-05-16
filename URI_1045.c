#include<stdio.h>
int main()
{
    double a,b,c,x,y,z;
    scanf("%lf%lf%lf", &x, &y, &z);
    if(x>=y && x>=z)
    {
        a = x;
        if(y>=z)
        {
            b = y;
            c = z;
        }
        else
        {
            b = z;
            c = y;
        }
    }
    else if(y>=x && y>=z)
    {
        a = y;
        if(x>=z)
        {
            b = x;
            c = z;
        }
        else
        {
            b = z;
            c = x;
        }
    }
    else if(z>=x && z>=y)
    {
        a = z;
        if(x >= y)
        {
            b = x;
            c = y;
        }
        else
        {
            b = y;
            c = x;
        }
    }
    if(a >= (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if((a*a) == ((b*b) + (c*c)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if((a*a) > ((b*b) + (c*c)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if((a*a) < ((b*b) + (c*c)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a==b   && a!=c) || (a==c && a!=b) || (b==c && b!=a))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
