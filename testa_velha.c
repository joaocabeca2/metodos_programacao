#include <stdio.h>
#include <assert.h>
#include "velha.h"

void testarVerificaJogoDaVelha() {
    printf("Inicializando os testes...\n");

    int tabuleiro1[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    verificaJogoDaVelha(tabuleiro1);
   
}

int main() {
    testarVerificaJogoDaVelha();
    return 0;
}
