#include<stdio.h>
int main()
{
    double a,b,c,d,media,e,mediafinal;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    media = (((a * 2) + (b * 3) + (c * 4) + (d * 1)) / 10.00);
    printf("Media: %.1lf\n", media);
    if(media >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(media < 5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(media >= 5 || media <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        mediafinal = ((media + e) / 2);
        if(mediafinal >= 5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", mediafinal);
    }
    return 0;
}
