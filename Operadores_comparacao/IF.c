#include "leitor.c"

int idade;

printf("Qual é a sua idade? ");
scanf("%d", &idade);

printf("\nLista de bebidas disponíveis para você: \n");
printf("1) Água Mineral Levetoma 350ml \n");
printf("2) Guaraná Pinguim 600ml \n");
printf("3) Energético Power Force 750ml \n");

if(idade >= 18) {
    printf("4) Cerveja Golden Country 350ml \n");
    printf("5) Vodka Vladmir 1L \n");
    printf("6) Aguardente Zé do Caixão 200ml \n");
}

printf("7) Suco Natubelli de Laranja 300ml \n");
