//(COMP 89) Dados dois strings (um contendo uma frase e outro contendo uma palavra), determine o número de vezes que a palavra ocorre na frase. Exemplo: Para a palavra ANA e a frase : ANA E MARIANA GOSTAM DE B ANANA (2) Temos que a palavra ocorre 4 vezes na frase.

#include <stdio.h>
#include <string.h>

int contar(char f[], char p[]) {
    int lenF = strlen(f);
    int lenP = strlen(p);
    int ocorrencias = 0;

    for (int i = 0; i <= lenF - lenP; i++) {
        int j;
        for (j = 0; j < lenP; j++) {
            if (f[i + j] != p[j]) {
                break;
            }
        }
        if (j == lenP) {
            ocorrencias++;
        }
    }

    return ocorrencias;
}

int main() {
    char f[] = "ANA E MARIANA GOSTAM DE BANANA";
    char p[] = "ANA";

    int result = contar(f, p);

    printf("A palavra ocorre %d vezes na frase.\n", result);

    return 0;
}