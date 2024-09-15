//Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas: a) da linha 4 de M b) da coluna 2 de M c) da diagonal principal d) da diagonal secundária e) de todos os elementos da matriz M Escrever essas somas e a matriz 


int main (){
    

int m[5][5], somaTotal=0, somaL4=0, somaC2=0, somaDP=0, somaDS=0, x=0, y=4;
    for(int l=0;l<5;l++){
        for(int c=0;c<5;c++){
            scanf("%d", &m[l][c]);
            somaTotal=somaTotal+m[l][c];
        }
    }
    for(int l=0;l<5;l++){
        for(int c=0;c<5;c++){
            if(l==3){
                somaL4=somaL4+m[l][c];
            }
            if(c==1){
                somaC2=somaC2+m[l][c];
            }
            if(l==c){
                somaDP=somaDP+m[l][c];
            }
            if(l==x && c==y){
                somaDS=somaDS+m[l][c];
                x++;
                y--;
            }
        }
    }
    for(int l=0;l<5;l++){
        for(int c=0;c<5;c++){
            printf("%d\n", m[l][c]);
        }
    }
    printf("%d %d %d %d %d\n", somaL4, somaC2, somaDP, somaDS, somaTotal);
    
    return 0;
}
