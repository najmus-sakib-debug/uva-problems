#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf", &a);
    b = (( 4.0 / 3) * 3.14159 * ( a * a * a));
    printf("VOLUME = %.3lf", b);
    return 0;
}
