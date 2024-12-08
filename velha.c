#include "velha.h"
#include <stdio.h>
// Implementação da função que verifica o estado do jogo da velha
int verificaJogoDaVelha(int matriz[3][3]) {
    int x_count = 0, o_count = 0;

    // Contar o número de X e O
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == 1) x_count++;
            else if (matriz[i][j] == 2) o_count++;
        }

    // Verificar se o jogo está indefinido (há posições vazias)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == 0) return -1; // Jogo indefinido
        }
    }

    // Se nenhum dos casos anteriores for verdadeiro, é empate
    return 0;
}

