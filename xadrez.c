// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

#include <stdio.h>

// Função recursiva para o movimento da Torre
void movimentoTorre(int casas) {
    if (casas == 0) return; // Caso base
    printf("Direita\n");
    movimentoTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void movimentoRainha(int casas) {
    if (casas == 0) return; // Caso base
    printf("Esquerda\n");
    movimentoRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do Bispo com loops aninhados
void movimentoBispo(int casas) {
    for (int i = 1; i <= casas; i++) { // Loop vertical
        for (int j = 1; j <= 1; j++) { // Loop horizontal
            printf("Cima, Direita\n");
        }
    }
}

// Função para o movimento do Cavalo com loops aninhados e controle de fluxo
void movimentoCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) { // Movimento vertical
        printf("Cima\n");
    }
    for (int j = 1; j <= 1; j++) { // Movimento horizontal
        printf("Direita\n");
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    movimentoTorre(5);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    movimentoBispo(5);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    movimentoRainha(8);

    // Movimento do Cavalo
    printf("\nMovimento do Cavalo:\n");
    movimentoCavalo();

    return 0;
}