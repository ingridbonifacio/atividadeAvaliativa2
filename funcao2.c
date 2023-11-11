#include <stdio.h>

// Sub-algoritmo para classificar o salario
void classificaSalario(float salario, float salarioMinimo, char *classificacao) {
    if (salario > salarioMinimo) {
        strcpy(classificacao, "Acima do salario minimo");
    } else if (salario < salarioMinimo) {
        strcpy(classificacao, "Abaixo do salario minimo");
    } else {
        strcpy(classificacao, "Igual ao salario minimo");
    }
}

// Sub-algoritmo para mostrar o resultado
void mostraClassifica(char sexo, float salario, char *classificacao) {
    printf("Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
    printf("Salario: R$ %.2f\n", salario);
    printf("Classificacao: %s\n", classificacao);
    printf("\n");
}

int main() {
    float salarioMinimo = 1400.0;
    char sexo;
    float salario;
    
    int abaixoSalarioMinimo = 0;
    int acimaSalarioMinimo = 0;
    
    while (1) {
        printf("Digite o sexo (M/F), o salario (ou 0 para encerrar): ");
        scanf(" %c", &sexo);
        
        if (sexo == '0') {
            break;
        }
        
        scanf("%f", &salario);
        
        if (salario >= 1) {
            char classificacao[50];
            classificaSalario(salario, salarioMinimo, classificacao);
            mostraClassifica(sexo, salario, classificacao);
            
            if (salario < salarioMinimo) {
                abaixoSalarioMinimo++;
            } else {
                acimaSalarioMinimo++;
            }
        } else {
            printf("Salario invalido. Tente novamente.\n");
        }
    }
    
    printf("Assalariados abaixo do salario minimo: %d\n", abaixoSalarioMinimo);
    printf("Assalariados acima do salario minimo: %d\n", acimaSalarioMinimo);
    
    return 0;
}