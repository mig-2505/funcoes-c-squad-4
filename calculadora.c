#include <stdio.h>

// Protótipos das funções
int somar(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

int main() {
    int opcao, num1, num2;
    float resultado;

    do {
        // Exibe o menu
        printf("\nCalculadora Interativa\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Verifica se a opção é para sair
        if (opcao == 5) {
            printf("Saindo da calculadora...\n");
            break;
        }

        // Solicita os números ao usuário
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        // Realiza a operação escolhida
        switch (opcao) {
            case 1:
                resultado = somar(num1, num2);
                printf("Resultado da soma: %d\n", (int)resultado);
                break;
            case 2:
                resultado = subtrair(num1, num2);
                printf("Resultado da subtração: %d\n", (int)resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado da multiplicação: %d\n", (int)resultado);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro: Divisão por zero não é permitida.\n");
                } else {
                    resultado = dividir(num1, num2);
                    printf("Resultado da divisão: %.2f\n", resultado);
                }
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (1);

    return 0;
}

// Função para somar
int somar(int a, int b) {
    return a + b;
}

// Função para subtrair
int subtrair(int a, int b) {
    return a - b;
}

// Função para multiplicar
int multiplicar(int a, int b) {
    return a * b;
}

// Função para dividir
float dividir(int a, int b) {
    return (float)a / b;
}