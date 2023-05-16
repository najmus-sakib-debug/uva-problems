#include<stdio.h>
int main()
{
    double a,f=0,s=0, avg;
    while(1<2)
    {
        scanf("%lf", &a);
        if(a>=0)
        {
          s = s + a;
          f++;
        }
        else
            break;
    }
    avg = s / f;
    printf("%.2lf\n", avg);
    return 0;
}
