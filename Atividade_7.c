//Elaborar um algoritmo que lê uma matriz M(6,6) e um valor A e multiplica a matriz M pelo valor A e coloca os valores da matriz multiplicados por A em um vetor de V(36) e escreve no final o vetor V.

int main (){
    int n, m[6][6], v[36], i=0;
    scanf("%d", &n);
    for(int l=0;l<6;l++){
        for(int c=0;c<6;c++){
            scanf("%d", &m[l][c]);
        }
    }
    for(int l=0;l<6;l++){
        for(int c=0;c<6;c++){
            v[i]=m[l][c]*n;
            i++;
        }
    }
    for(i=0;i<36;i++){
        printf("%d\n", v[i]);
    }
    
    return 0;
}
