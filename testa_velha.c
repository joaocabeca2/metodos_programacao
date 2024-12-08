#include <stdio.h>
#include <assert.h>
#include "velha.h"

void testarVerificaJogoDaVelha() {
    printf("Inicializando os testes...\n");

    // Teste 1 tabuleiro vazio (indefinido)
    int tabuleiro1[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    assert(verificaJogoDaVelha(tabuleiro1) == -1);
   
}

int main() {
    testarVerificaJogoDaVelha();
    return 0;
}
