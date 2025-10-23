#include <stdio.h>
#include <string.h>

int main() {
    
    char nome[30];
    int idade;
    char cidade[30];
    char cargo[20];
    float pretensao_salarial;

    printf("Seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Sua Idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Sua cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Seu Cargo: ");
    fgets(cargo, sizeof(cargo), stdin);
    cargo[strcspn(cargo, "\n")] = 0;

    printf("Sua pretensão salarial: ");
    scanf("%f", &pretensao_salarial);

    printf("\n-- Valores informados --\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Cidade: %s", cidade);
    printf("Cargo: %s\n", cargo);
    printf("Pretensão Salarial: %.2f\n", pretensao_salarial);

    return 0;
}