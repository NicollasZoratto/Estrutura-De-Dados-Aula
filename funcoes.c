#include <stdio.h>

void mostrar_cabecalho() {
    printf("--- Início do Programa ---\n");

}

void mostrar_rodape() {
    printf("--- Fim do Programa ---\n");

}

int somarQtdAlunos() {
    int qtd_alunos_1 = 25;
    int qtd_alunos_2 = 32;
    int qtd_alunos_3 = 18;

    return qtd_alunos_1 + qtd_alunos_2 + qtd_alunos_3;
}

float calcular_descontoInss_minimo() {
    float salario_minimo = 1804;
    float perc_inss = 7.5;

    return salario_minimo * (perc_inss / 100);
}

float calcularCincunferencia(float raio) {
    float pi = 3.14159;
    return 2 * pi * raio;
}

void assinatura() {
    printf("Desenvolvido por Nicollas Zoratto de Carvalho\n");

}