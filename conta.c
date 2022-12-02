#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

struct Conta{
    int numero;
    char cliente[51];
    int especial;
    float saldo;
};

void inicializar(p_conta pConta[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        pConta[i] = NULL;
    }
}
