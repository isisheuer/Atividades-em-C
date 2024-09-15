// (MAT 88) Dada uma sequência de n números reais, determinar os números que compõem a sequência e o número de vezes que cada um deles ocorre na mesma. Exemplo: n = 8 Sequência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7 Saída: -1.7 ocorre 3 vezes 3.0 ocorre 1 vez 0.0 ocorre 2 vezes 1.5 ocorre 1 vez 2.3 ocorre 1 vez 

#include <stdio.h>

void contar(float s[], int n) {
    for (int i = 0; i < n; i++) {
        float num = s[i];
        int cnt = 1;

        for (int j = i + 1; j < n; j++) {
            if (s[j] == num) {
                cnt++;
                s[j] = -9999.0;
            }
        }

        if (s[i] != -9999.0) {
            printf("%.1f ocorre %d vez(es)\n", num, cnt);
        }
    }
}

int main() {
    float seq[] = {-1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1.7};
    int tam = sizeof(seq) / sizeof(seq[0]);

    contar(seq, tam);

    return 0;
}
