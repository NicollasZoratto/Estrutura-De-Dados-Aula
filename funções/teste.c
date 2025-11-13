#include <stdio.h>
#include <string.h>

int main() {

    char marca[20];
    int quantidade;
    char produto[20];
    double preco;

    printf("Marca do produto: ");
    fgets(marca, sizeof(marca), stdin);
    // Remove o pulo de linha do texto lido
    marca[strcspn(marca, "\n")] = 0;

    printf("Quantidade: ");
    scanf("%d", &quantidade);
    // Limpa o enter
    getchar();
    
    printf("Nome do produto: ");
    fgets(produto, sizeof(produto), stdin);
    produto[strcspn(produto, "\n")] = 0;

    printf("Preço: ");
    scanf("%lf", &preco);
    getchar();

    printf("\n-- Valores informados --\n");
    printf("Marca: %s\n", marca);
    printf("Quantidade: %d\n", quantidade);
    printf("Produto: %s", produto);
    printf("Preço: %.2f\n", preco);

    printf("%d unidades de %s %s por %.2f cada.\n", quantidade, produto, marca, preco);

    return 0;
}