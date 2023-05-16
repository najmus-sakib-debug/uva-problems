#include<stdio.h>
int main()
{
    int i,N,s=0;
    scanf("%d", &N);
    for(i=1 ; i<=10 ; i++){
        s = N * i;
        printf("%d x %d = %d\n", i, N, s);
    }
    return 0;
}

