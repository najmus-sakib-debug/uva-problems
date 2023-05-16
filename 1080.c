#include<stdio.h>
int main()
{
    int a[150],i,h=0,p=0;
    for(i=1;i<=100;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<=100;i++){
        if(a[i]>h){
            h=a[i];
            p=i;
        }
    }
    printf("%d\n%d\n", h, p);
    return 0;
}
