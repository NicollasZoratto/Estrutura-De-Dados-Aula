#include <stdio.h>
#include <string.h>

// Função para ler um texto
void ler_texto(char texto[]) {
    printf("Digite um texto: ");
    // Usa fgets para ler o texto com segurança, incluindo espaços
    // O texto é armazenado diretamente no array passado como argumento
    fgets(texto, 50, stdin);
    // Remove a quebra de linha ('\n') adicionada pelo fgets, se existir
    texto[strcspn(texto, "\n")] = 0;
}

// Função para ler um número inteiro
int ler_num_inteiro() {
    int numero_inteiro;
    printf("Digite um numero inteiro: ");
    // Armazena o valor lido na variável local 'numero_inteiro'
    scanf("%d", &numero_inteiro);
    // Retorna o valor lido
    return numero_inteiro;
}

// Função para ler um número decimal (float)
float ler_num_decimal() {
    float numero_decimal;
    printf("Digite um numero decimal: ");
    // Armazena o valor lido na variável local 'numero_decimal'
    scanf("%f", &numero_decimal);
    // Retorna o valor lido
    return numero_decimal;
}

int main() {
    // Declaração do array de caracteres para armazenar o texto.
    // O tamanho deve ser compatível com o usado dentro da função ler_texto.
    char texto_1[50];
    
    // Chama a função e passa o array para que ela possa preenchê-lo
    ler_texto(texto_1);
    // Para imprimir um array de char (string) usa-se %s
    printf("Texto: %s\n", texto_1);
    
    // ATENÇÃO: A chamada estava incorreta (ler_num_inteiros)
    int numero_inteiro_1 = ler_num_inteiro();
    printf("Número Inteiro: %d\n", numero_inteiro_1);
    
    float numero_decimal_1 = ler_num_decimal();
    printf("Numero Decimal: %.2f\n", numero_decimal_1);

    return 0;
}