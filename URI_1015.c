#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    e = sqrt((pow((a - c),2) + pow((b - d),2)));
    printf("%.4lf\n", e);
    return 0;
}
