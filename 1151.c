#include<stdio.h>
int main()
{
    int i,n,f0,f1,f2;
    f0 = 0;
    f1 = 1;
    scanf("%d", &n);

    if(n==1)
    {
        printf("0\n");
    }
    else if(n==2)
    {
        printf("0 1\n");
    }
    else if(n>2)
    {
         printf("%d %d", f0, f1);
        for(i=1; i<=n-2; i++)
        {
            f2 = f0 + f1;
            printf(" %d", f2);
            f0 = f1;
            f1 = f2;

        }
        printf("\n");
    }
    return 0;
}
