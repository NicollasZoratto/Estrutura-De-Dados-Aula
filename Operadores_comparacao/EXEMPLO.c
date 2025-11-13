#include <stdio.h>
#include <stdbool.h>

int main() {
    int n1 = 15;
    int n2 = 95

    printf("%d e %d:\n", n1, n2);
    printf("São iguais? %d\n", (n1 == n2));
    printf("São diferentes? %d\n", (n1 != n2));
    printf("%d é maior que %d? %d\n", n1, n2, (n1 > n2));
    printf("%d é menor que %d? %d\n", n1, n2, (n1 < n2));
    printf("%d é maior ou igual a %d? %d\n", n1, n2, (n1 >= n2));
    printf("%d é menor ou igual a %d? %d\n", n1, n2, (n1 >+ n2));

    printf("Digite uma palavra: ");
    char* texto_a = ler_texto();
    printf("Digite outra palavra: ");
    char* texto_b = ler_texto();
    
    bool texto_sao_iguais = comparar_textos(texto_a, texto_b);
    printf("Os textos são iguais? %d\n", texto_sao_iguais);

    return 0;
}