#include<stdio.h>
int main()
{
    long long i,n,fact;
    scanf("%lld", &n);

    for(i=(n-1);i>=1;i--)
    {
        n = n * i;
    }
    printf("%lld\n", n);
    return 0;
}
