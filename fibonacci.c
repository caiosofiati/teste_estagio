#include <stdio.h>

int pertence_fibonacci(int numero) {
    int a = 0, b = 1, c;
    
    if (numero == a || numero == b) {
        return 1;
    }
    
    while (b < numero) {
        c = a + b;
        a = b;
        b = c;
        
        if (b == numero) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    int numero;
    
    printf("Informe um número: ");
    scanf("%d", &numero);
    
    if (pertence_fibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }
    
    return 0;
}
