//Escreva um que leia um vetor G de 20 elementos caracter que representa o gabarito de uma prova. A seguir, para cada um dos 50 alunos da turma, leia o vetor de respostas (R) do aluno e conte o número de acertos. Mostre o nº de acertos do aluno e uma mensagem APROVADO, se a nota for maior ou igual a 6; e mostre uma mensagem de REPROVADO, caso contrário.

int main (){
    
    char g[20], r;
    int acertos;
    float nota;

    for(int i=0;i<20;i++){
        printf("%d°: ",i+1);
        scanf("%c", &g[i]);scanf("%c", &g[i]);
    }for(int i=0;i<50;i++){
        acertos=0;
        for(int j=0;j<20;j++){
            printf("%d°: ", j+1);
            scanf("%c", &r);scanf("%c", &r);
            if(r==g[j]){
                acertos++;
            }
        }
        nota=acertos*0.5;
        printf("%d %f ", acertos, nota);
        if(nota>=6){
            printf("aprovado\n");
        }else{
            printf("reprovado\n");
        }
    }
    
    return 0;
}
