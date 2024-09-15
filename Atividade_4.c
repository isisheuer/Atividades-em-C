//Em uma classe há n alunos, cada um dos quais realizou k provas com pesos distintos. Dados n , k, os pesos das k provas e as notas de cada aluno, calcular a média ponderada das provas para cada aluno e a média aritmética da classe em cada uma das provas. 

#include <stdio.h>

int main() {			
    int num_alunos = 15;
    int num_provas = 3;

    float pesos[3];
    float notas[15][3];

    printf("Digite os pesos das %d provas:\n", num_provas);
    for (int i = 0; i < num_provas; i++) {
        printf("Peso da prova %d: ", i + 1);
        scanf("%f", &pesos[i]);
    }

    printf("Digite as notas dos alunos para cada prova:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < num_provas; j++) {
            printf("Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nMédia ponderada das provas para cada aluno:\n");
    for (int i = 0; i < num_alunos; i++) {
        float media = 0;
        for (int j = 0; j < num_provas; j++) {
            media += notas[i][j] * pesos[j];
        }
        media /= num_provas;
        printf("Aluno %d: %.2f\n", i + 1, media);
    }

    printf("\nMédia aritmética da classe em cada prova:\n");
    for (int j = 0; j < num_provas; j++) {
        float media = 0;
        for (int i = 0; i < num_alunos; i++) {
            media += notas[i][j];
        }
        media /= num_alunos;
        printf("Prova %d: %.2f\n", j + 1, media);
    }

    return 0;
}
