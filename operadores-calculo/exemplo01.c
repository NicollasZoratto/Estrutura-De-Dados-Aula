#include "../leitor.c"

int main() {
    printf("Digite um número: ");
   int n1 = ler_int();
   
   printf("Digite outra número: ");
   int n2 = ler_int();

   int soma = (n1 + n2);

   printf("%d + %d = %d\n", n1, n2, soma);
   printf("%d + %d = %d\n", n1, n2, (n1 - n2));
   printf("%d + %d = %d\n", n1, n2, (n1 * n2));
   printf("%d + %d = %d\n", n1, n2, ((float) n1 / (float) n2));
   

    return 0;
}