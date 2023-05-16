#include<stdio.h>
int main()
{
    int x,y,a,b,sum;
    scanf("%d%d", &x, &y);
    if(x<y)
    {
        a = x;
        b = y;
    }

    else
    {
        a = y;
        b = x;
    }

    sum = 0;
     if(a%2==0)
     {
         for(a+=1;a<b;a+=2)
         {
             sum = sum + a;
         }
     }
     else
     {
         for(a+=2;a<b;a+=2)
         {
             sum = sum + a;
         }
     }

     printf("%d\n", sum);
     return 0;
}
