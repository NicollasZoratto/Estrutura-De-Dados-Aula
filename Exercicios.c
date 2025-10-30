//EXERCICIOS1 

#include <stdio.h>
#include <string.h>
#include "funcoes.c"


int main() {

    char nome[30] = "Nicollas";
    int quantidade = 5;
    double preco = 200;

    printf("Seu nome é %s, %d é a quantidade e %.2f é o preço!\n", nome, quantidade, preco);
    
    assinatura();
    
    return 0;
}