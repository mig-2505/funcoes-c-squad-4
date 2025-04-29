#include <stdio.h>
#include <windows.h>
 
void contagemRegressiva(int início) {
for (int i = início; i>=0; i--) {
    printf("%d\n", i);
    Sleep(1000);
}
printf("Contagem finalizada!\n");
}
 
int main() {
    int numero;
 
    printf("Digite o número para iniciar a contagem regressiva: ");
    scanf("%d", &numero);
 
    contagemRegressiva(numero);
 
    return 0;
}
