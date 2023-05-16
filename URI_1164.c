#include<stdio.h>
int main()
{
    int x=1,y;
    scanf("%d", &y);
    while(x<=y){
        long i,n,s=0;
        scanf("%ld", &n);
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                s = s + i;
            }
        }
        if(s==n)
        {
            printf("%ld eh perfeito\n", n);
        }
        else
        {
            printf("%ld nao eh perfeito\n", n);
        }
        x++;
    }

    return 0;
}
