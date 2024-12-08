#include <stdio.h>
#include "velha.h"

// Função para verificar o estado do jogo da velha
int verificaJogoDaVelha(int matriz[3][3]) {
    int x_count = 0, o_count = 0;

    // Contar o número de X e O na matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == 1) x_count++;
            else if (matriz[i][j] == 2) o_count++;
        }
    }

    // Verificar se o jogo é impossível
    if (x_count + 1 < o_count || x_count > o_count + 1) return -2;

    // Verificar linhas
    for (int i = 0; i < 3; i++) {
        if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2]) {
            if (matriz[i][0] == 1) return 1;
            if (matriz[i][0] == 2) return 2;
        }
    }

    // Verificar colunas
    for (int j = 0; j < 3; j++) {
        if (matriz[0][j] == matriz[1][j] && matriz[1][j] == matriz[2][j]) {
            if (matriz[0][j] == 1) return 1;
            if (matriz[0][j] == 2) return 2;
        }
    }

    // Verificar diagonais
    if (matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2]) {
        if (matriz[0][0] == 1) return 1;
        if (matriz[0][0] == 2) return 2;
    }
    if (matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0]) {
        if (matriz[0][2] == 1) return 1;
        if (matriz[0][2] == 2) return 2;
    }

    // Verificar se o jogo está indefinido (ainda há espaços vazios)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == 0) return -1;
        }
    }

    // Caso contrário, é empate
    return 0;
}
