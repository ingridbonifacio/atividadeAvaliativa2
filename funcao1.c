#include <stdio.h>

// Sub-algoritmo para validar a quantidade de pecas
int validaQuantidade(int quantidade) {
    if (quantidade >= 0) {
        return 1; // Quantidade valida
    } else {
        return 0; // Quantidade invalida
    }
}

// Sub-algoritmo para calcular o salario
float calculaSalario(int quantidade) {
    float salarioBase = 600.0;
    float adicional = 0.0;
    
    if (quantidade > 50) {
        adicional += (quantidade - 50) * 0.5;
    }
    if (quantidade > 80) {
        adicional += (quantidade - 80) * 0.25;
    }
    
    return salarioBase + adicional;
}

// Procedimento para mostrar o resultado
void mostraFinal(int quantidade, float salario) {
    printf("Quantidade de pecas fabricadas: %d\n", quantidade);
    printf("Salario total: R$ %.2f\n", salario);
    printf("\n");
}

int main() {
    int quantidade;
    
    while (1) {
        printf("Digite a quantidade de pecas fabricadas (ou um valor negativo para encerrar): ");
        scanf("%d", &quantidade);
        
        if (quantidade < 0) {
            break;
        }
        
        if (validaQuantidade(quantidade)) {
            float salario = calculaSalario(quantidade);
            mostraFinal(quantidade, salario);
        } else {
            printf("Quantidade invalida. Tente novamente.\n");
        }
    }
    
    return 0;
}