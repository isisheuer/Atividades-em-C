//Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos, determinar o produto de A por V. 

int main (){

    int x, y, z;
    float m[255][255], v[255];
    do{
        scanf("%d", &x);
    }while(x>255);
    do{
        scanf("%d", &y);
    }while(y>255);
    do{
        scanf("%d", &z);
    }while(z>255);
    for(int l=0;l<x;l++){
        for(int c=0;c<y;c++){
            scanf("%f", &m[l][c]);
        }
    }
    for(int i=0;i<z;i++){
        scanf("%f", &v[i]);
    }
    for(int i=0;i<z;i++){
        for(int l=0;l<x;l++){
            for(int c=0;c<y;c++){
                printf("%.2f\n", v[i]*m[l][c]);
            }
        }
    }
    
    return 0;
}
