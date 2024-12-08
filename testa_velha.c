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
    printf("Teste 1 (Tabuleiro vazio): OK\n");

   // Teste 2: Vitória de X em uma linha
    int tabuleiro2[3][3] = {
        {1, 1, 1},
        {0, 2, 0},
        {0, 0, 2}
    };
    assert(verificaJogoDaVelha(tabuleiro2) == 1);
    printf("Teste 2 (Vitória de X em uma linha): OK\n");

    // Teste 3: Vitória de O em uma coluna
    int tabuleiro3[3][3] = {
        {1, 2, 1},
        {0, 2, 0},
        {1, 2, 0}
    };
    assert(verificaJogoDaVelha(tabuleiro3) == 2);
    printf("Teste 3 (Vitória de O em uma coluna): OK\n");

    // Teste 4: Empate
    int tabuleiro4[3][3] = {
        {1, 2, 1},
        {2, 1, 2},
        {2, 1, 2}
    };
    assert(verificaJogoDaVelha(tabuleiro4) == 0);
    printf("Teste 4 (Empate): OK\n");

}

int main() {
    testarVerificaJogoDaVelha();
    return 0;
}
