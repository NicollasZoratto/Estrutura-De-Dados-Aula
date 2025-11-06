#include "leitor.c"

int main() {

    printf("Digite a sua idade: ");
    int idade = ler_int();
    
    printf("Digite o seu nome: ");
    char* nome = ler_texto();

    printf("Digite a sua altura em metro: ");
    float altura = ler_decimal();

    printf("\n-- Dados cadastrados --\n");
    printf("\nIdade: %d\n", idade);
    printf("\nNome: %s\n", nome);
    printf("\nAltura: %.2f\n", altura);

    return 0;
}