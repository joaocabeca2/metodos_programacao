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
    }

     // Verificar linhas
    for (int i = 0; i < 3; i++) {
        if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2]) {
            if (matriz[i][0] == 1) return 1; // X venceu
            if (matriz[i][0] == 2) return 2; // O venceu
        }
    }

    // Verificar se o jogo está indefinido (há posições vazias)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == 0) return -1; // Jogo indefinido
        }
    }


    return 0;
}
