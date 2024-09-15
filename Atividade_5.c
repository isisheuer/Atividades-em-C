//Dada uma sequencia de n números inteiros, determinar um segmento de soma máxima. Exemplo: Na sequencia 5, 2, -2, -7, 3, 14, 10, -3, 9, -6, 4, 1 , a soma do segmento é 33

#include <stdio.h>

int main (){
int maxSubArray(int array[], int tamanho) {
    int maxAtual = array[0];
    int maxGlobal = array[0];

    for (int i = 1; i < tamanho; i++) {
        maxAtual = (array[i] > array[i] + maxAtual) ? array[i] : array[i] + maxAtual;
        if (maxAtual > maxGlobal) {
            maxGlobal = maxAtual;
        }
    }

    return maxGlobal;
}

int main() {
    int sequencia[] = {5, 2, -2, -7, 3, 14, 10, -3, 9, -6, 4, 1};
    int tamanho = sizeof(sequencia) / sizeof(sequencia[0]);

    int resultado = maxSubArray(sequencia, tamanho);

    printf("A soma do segmento de soma máxima é: %d\n", resultado);

    return 0;
}

}
