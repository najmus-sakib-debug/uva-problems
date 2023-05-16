#include<stdio.h>
int main()
{
    double i,j;
    for(i=0;i<=2;i+=.2){
        for(j=i+1;j<=i+3;j++){
            printf("I=%.1lf J=%.1lf\n", i,j);
        }
    }
    return 0;
}
