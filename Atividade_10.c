//Deseja-se atualizar as contas correntes dos clientes de uma agência bancária. É dado o cadastro de n clientes contendo para cada cliente o número de sua conta e o seu saldo; o cadastro está ordenado pelo número da conta. Em seguida, é dado o número de operações efetuadas no dia e, para cada operação, o número da conta, uma letra C ou D indicando se a operação é de crédito ou débito e o valor da operação . Emitir o cadastro de clientes atualizado

int main (){
    int nClientes, operacoes, x;
    float clientes[255][2], cod, retirada;
    char op;
    do{
        printf("Clientes: ");
        scanf("%d", &nClientes);
    }while(nClientes>255);
    for(int l=0;l<nClientes;l++){
        for(int c=0;c<2;c++){
            if(c==0){
                printf("ID: ");
            }else{
                printf("Saldo: ");
            }
            scanf("%f", &clientes[l][c]);
        }
    }
    do{
        printf("Operacoes: ");
        scanf("%d", &operacoes);
    }while(operacoes>255);
    for(int i=0;i<operacoes;i++){
        x=-1;
        do{
            printf("Codigo: ");
            scanf("%f", &cod);
            for(int j=0;j<nClientes;j++){
                if(cod==clientes[j][0]){
                    x=j;
                }
            }
        }while(x==-1);
        printf("Operacao: ");
        do{
            scanf("%c", &op);
        }while(op!='C' && op!='D');
        printf("Retirada: ");
        scanf("%f", &retirada);
        switch(op){
            case 'C':
                clientes[x][1]=clientes[x][1]-retirada;
            break;
            case 'D':
                if(retirada>clientes[x][1]){
                    printf("Não possui saldo suficiente\n");
                }else{
                    clientes[x][1]=clientes[x][1]-retirada;
                }
            break;
        }
    }
    for(int i=0;i<nClientes;i++){
        printf("%0.f -- %.2f\n", clientes[i][0], clientes[i][1]);
    }
    
    return 0;
}
