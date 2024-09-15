//Escreva um algoritmo que leia um número inteiro A e uma matriz V 30x30 de números. Conte quantos valores iguais a A estão na matriz. Crie, a seguir, uma matriz X contendo todos os elementos de V diferentes de A. Mostre os resultados.

#include <stdio.h>

int main(){

 int n, v[30][30], b[30][30];
    scanf("%d", &n);
    for(int l=0;l<30;l++){
        for(int c=0;c<30;c++){
            scanf("%d", &v[l][c]);
        }
    }
    for(int l=0;l<30;l++){
        for(int c=0;c<30;c++){
            if(v[l][c]!=n){
                b[l][c]=v[l][c];
            }
        }
    }
    for(int l=0;l<30;l++){
        for(int c=0;c<30;c++){
            if(b[l][c]!=0){
                printf("%d\n", b[l][c]);
            }
        }
    }
    
    return 0;
}
