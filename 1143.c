#include<stdio.h>
#include<math.h>
int main()
{
    long long i,n;
    scanf("%lld", &n);
    for(i=1;i<=n;i++)
    {
        long long j,k;
        for(j=1;j<=3;j++)
        {
            if(j==3)
            {
                k = pow(i,j);
                printf("%lld\n", k);

            }
            else
            {
                k = pow(i,j);
                printf("%lld ", k);
            }
        }
    }
    return 0;
}
