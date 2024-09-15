//Escrever um algoritmo que lê uma matriz M(12,13) e divida todos os 13 elementos de cada uma das 12 linhas de M pelo maior elemento em módulo daquela linha. Escrever a matriz lida e a modificada.


int main (){

    float m[12][13], maior;
    
    for(int l=0;l<12;l++){
        for(int c=0;c<13;c++){
            printf("%d°: %d°: ", l+1, c+1);
            scanf("%f", &m[l][c]);
        }
    }
    for(int l=0;l<12;l++){
        maior=m[l][0];
        for(int c=0;c<13;c++){
            if(maior<m[l][c]){
                maior=m[l][c];
            }
        }
        if(maior<0){
            maior=maior*-1;
        }
        for(int c=0;c<13;c++){
            m[l][c]=m[l][c]/maior;
        }
    }
    for(int l=0;l<12;l++){
        for(int c=0;c<13;c++){
            printf("%.2f ", m[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}
