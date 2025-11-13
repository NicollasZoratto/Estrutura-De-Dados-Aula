#include "funcoes.c"

int main() {

    mostrar_cabecalho();

    int soma_alunos = somarQtdAlunos();
    printf("Quantidade de Alunos: %d\n", soma_alunos);
    
    float desconto_inss = calcular_descontoInss_minimo();
    printf("O desconto mínimo do INSS é de: %.2f\n", desconto_inss);

    float circunferencia = calcularCincunferencia(8.9);
    printf("Cincurferência de: %f\n", circunferencia);
    
    mostrar_rodape();

    return 0;
}