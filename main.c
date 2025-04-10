#include <stdio.h>

// Versão recursiva
int maximo_recursivo(int *v, int n) {
    if (n == 1)
        return v[0];
    int m = maximo_recursivo(v, n - 1);
    return v[n - 1] > m ? v[n - 1] : m;
}

// Versão iterativa
int maximo_iterativo(int *v, int n) {
    int maior = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    // Chamando a versão recursiva
    int maior_rec = maximo_recursivo(v, n);
    printf("Maior elemento (recursivo): %d\n", maior_rec);

    // Chamando a versão iterativa
    int maior_it = maximo_iterativo(v, n);
    printf("Maior elemento (iterativo): %d\n", maior_it);

    return 0;
}
