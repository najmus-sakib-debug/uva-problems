#include<stdio.h>
int main()
{
    char a[30];
    double b,c,d;
    //gets(a);
    scanf("%s",a);
    scanf("%lf%lf", &b, &c);
    d = b + (c * (15.0/100));
    printf("TOTAL = R$ %.2lf\n", d);
    return 0;
}
