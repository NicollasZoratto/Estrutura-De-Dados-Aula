#include <stdio.h>
#include <string.h>

int main() {

    char cidade[20];
    double populacao_estimada;
    char cidade2[20];
    double populacao_estimada2;

    printf("Digite uma cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("População Estimada: ");
    scanf("%lf", &populacao_estimada);
    getchar();

    printf("Digite outra cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a População Estimada da segunda cidade: ");
    scanf("%lf", &populacao_estimada2);
    getchar();

    printf("\n-- Cidade e suas populações estimadas --\n");
    
    printf("A primeira cidade é: %s\n", cidade);
    printf("A população estimada é: %.3f\n", populacao_estimada);

    printf("A segunda cidade é: %s\n", cidade2);
    printf("A população estimada é: %.3f\n", populacao_estimada2);
    
    return 0;
}