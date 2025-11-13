#include <stdio.h>

int main() {
    char marca[60]; 
    int quantidade; 
    char produto[60]; 
    double preco; 

    printf("Marca do produto (sem espaços): ");
    scanf("%s", marca); 

    printf("Quantidade: ");
    scanf("%d", &quantidade); 
    
    printf("Nome do produto (sem espaços): ");
    scanf("%s", produto); 

    printf("Preço: ");
    scanf("%lf", &preco); 
    
    printf("\n-- Valores informados --\n");
    printf("Marca: %s\n", marca);
    printf("Quantidade: %d\n", quantidade);
    printf("Produto: %s\n", produto);
    printf("Preço: %.2f\n", preco);

    printf("%d unidades de %s %s por %.2f cada.\n", quantidade, produto, marca, preco);
    
    return 0;
}