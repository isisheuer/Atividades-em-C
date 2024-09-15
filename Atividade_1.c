//3- Tentando descobrir se um dado era viciado, um dono de cassino honesto (BUrLAA!) o lançou n vezes. Dados os n resultados dos lançamentos, determinar o número de ocorrências de cada face.

#include <stdio.h>

int main() {
    int jogadas, cont = 0, num;

    printf("Quantas vezes o dado será jogado: ");
    scanf("%d", &jogadas);

    int vet[jogadas];

    printf("Insira os resultados das jogadas:\n");
    for (int i = 0; i < jogadas; i++) {
        printf("Jogada %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("Qual número deseja verificar as ocorrências? ");
    scanf("%d", &num);

    for (int i = 0; i < jogadas; i++) {
        if (vet[i] == num) {
            cont++;
        }
    }
    printf("O número %d ocorreu %d vezes.\n", num, cont);

    return 0;
}
