#include<stdio.h>
int main()
{
    long int i,n;
    scanf("%ld", &n);
    for(i=1;i<=n;i++)
    {
        long long x;
        scanf("%lld", &x);
        if(x==0)
            printf("NULL\n");
        else if(x>0 && x%2==0)
            printf("EVEN POSITIVE\n");
        else if(x>0 && x%2!=0)
            printf("ODD POSITIVE\n");
        else if(x<0 && x%2==0)
            printf("EVEN NEGATIVE\n");
        else if(x<0 && x%2!=0)
            printf("ODD NEGATIVE\n");
    }
    return 0;
}
