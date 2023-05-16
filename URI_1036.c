#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(((b *b) - 4 * a * c) <= 0 || a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        d = (- b + sqrt((b * b) - 4 * a * c)) / (2 * a);
        printf("R1 = %.5lf\n", d);
        e = (- b - sqrt((b * b) - 4 * a * c)) / (2 * a);
        printf("R2 = %.5lf\n", e);
    }
}
