//Escreva um algoritmo que leia um vetor de 13 elementos, que é o Gabarito de um teste da loteria esportiva, contendo os valores 1(coluna 1), 2 (coluna 2) e 3 (coluna do meio). Leia, a seguir, para cada apostador, o número do seu cartão e um vetor de Respostas de 13 posições. Verifique para cada apostador o números de acertos, comparando o vetor de Gabarito com o vetor de Respostas. Escreva o número do apostador e o número de acertos. Se o apostador tiver 13 acertos, mostrar a mensagem "Ganhador".

int main (){

    int loteria[13], apostador[13], acertos, n;
    
    for(int i;i<13;i++){
        printf("%d°: ", i+1);
        scanf("%d", &loteria[i]);
    }
    printf("Apostadores: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        acertos=0;
        for(int j=0;j<13;j++){
            printf("%d°: ", j+1);
            scanf("%d", &apostador[j]);
            if(apostador[j]==loteria[j]){
                acertos++;
            }
        }
        if(acertos==13){
            printf("Ganhou!\n");
        }
    }
    
    return 0;
}
