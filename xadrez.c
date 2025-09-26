#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    /* 
 * Função recursiva para a Torre
 * Move-se apenas em linha reta. Aqui simulamos 5 casas para a direita.
 */
void moverTorre(int casas) {
    if (casas == 0) return;       // Caso base
    printf("Direita\n");
    moverTorre(casas - 1);        // Chamada recursiva
}

/* 
 * Função recursiva para a Rainha
 * Move-se em todas as direções. Aqui simulamos 8 casas para a esquerda.
 */
void moverRainha(int casas) {
    if (casas == 0) return;       // Caso base
    printf("Esquerda\n");
    moverRainha(casas - 1);       // Chamada recursiva
}

/* 
 * Função recursiva para o Bispo
 * Move-se na diagonal. Aqui simulamos 5 casas para cima e à direita.
 * Inclui também loops aninhados para reforçar a lógica:
 *   - Loop externo: movimento vertical (Cima)
 *   - Loop interno: movimento horizontal (Direita)
 */
void moverBispo(int casas) {
    if (casas == 0) return;       // Caso base

    // Loops aninhados para representar "Cima Direita"
    for (int i = 0; i < 1; i++) {     // Vertical (1 passo "Cima")
        for (int j = 0; j < 1; j++) { // Horizontal (1 passo "Direita")
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);        // Chamada recursiva
}

/* 
 * Movimento do Cavalo:
 * Agora o Cavalo se move em "L" para cima e para a direita:
 * 2 casas para cima e 1 casa para a direita.
 * Usa loops aninhados com múltiplas variáveis e controle de fluxo (continue/break).
 */
void moverCavalo(int movimentos) {
    int i, j;

    for (i = 1; i <= movimentos; i++) {
        int passosCima = 2;
        int passosDireita = 1;

        // Loop externo: casas para cima
        for (j = 1; j <= passosCima; j++) {
            if (j == 2 && passosDireita == 0) continue; // controle extra
            printf("Cima\n");
        }

        // Loop interno: casa para direita
        int k = 1;
        while (k <= passosDireita) {
            if (k > 1) break; // garante apenas 1 movimento à direita
            printf("Direita\n");
            k++;
        }
    }
}

int main() {
    // Definindo número de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 1; // quantidade de movimentos em "L"

    // ----------------------------
    // Movimento da TORRE
    // ----------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ----------------------------
    // Movimento do BISPO
    // ----------------------------
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // ----------------------------
    // Movimento da RAINHA
    // ----------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ----------------------------
    // Movimento do CAVALO
    // ----------------------------
    printf("\nMovimento do Cavalo:\n");
    moverCavalo(movimentosCavalo);

    return 0;
}

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
