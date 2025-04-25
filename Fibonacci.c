#include <stdio.h>
#include <stdlib.h>

int metodo
int termo

int FibRec(int n) {
    if (n <= 1) {
        return n;
    }
    return FibRec(n - 1) + FibRec(n - 2);
}

int FibIt(int n) {
    int i = 2, a = 0, b = 1, c;
    if (n <= 1) {
        return n;
    }
    
    while (i <= n) {
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return b;
}

int main(){
    printf("Escolha o método de cálculo da sequência de Fibonacci:\n");
    printf("1 - Recursivo\n");
    printf("2 - Iterativo\n");
    printf("3 - Ambos\n");
    scanf("%d", &metodo);

    if (metodo == 1) {
        printf("Método Recursivo:\n");
        printf("Informe o termo da sequência que deseja calcular:\n");
        scanf("%d", &termo);
        printf("O termo %d da sequência de Fibonacci é: %d\n", termo, FibRec(termo));
    }

    if (metodo == 2) {
        printf("Método Iterativo:\n");
        printf("Informe o termo da sequência que deseja calcular:\n");
        scanf("%d", &termo);
        printf("O termo %d da sequência de Fibonacci é: %d\n", termo, FibIt(termo));
    }

    if (metodo == 3) {
        printf("Ambos os métodos:\n");
        printf("Informe o termo da sequência que deseja calcular:\n");
        scanf("%d", &termo);
        printf("O termo %d da sequência de Fibonacci recursiva é: %d\n", termo, FibRec(termo));
        printf("O termo %d da sequência de Fibonacci iterativa é: %d\n", termo, FibIt(termo));
    }
    
    else {
        printf("Método inválido. Tente novamente.\n");
    }
}
