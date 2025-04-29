#include <stdio.h>
#define MAX_NOME 100
float calcularMedia(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3.0;
}
void exibirResultado(float media)
{
    if (media >= 6)
    {
        printf("Aprovado! Sua média foi: %.2f\n", media);
    }
    else if (media <= 5 && media < 6)
    {
        printf("Recuperação! Sua média foi: %.2f\n", media);
    }
    else
    {
        printf("Reprovado! Sua média foi: %.2f\n", media);
    }
}
void boasVindas(char nome[MAX_NOME])
{
    printf("Bem-vindo(a), %s!\n", nome);
}
int main()
{
    char nome[MAX_NOME];
    float n1, n2, n3, media;
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    boasVindas(nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    media = calcularMedia(n1, n2, n3);
    exibirResultado(media);

    return 0;
}
