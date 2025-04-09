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

    #define TAMANHO 10 // Definição do tamanho do tabuleiro
    #define TAM_NAVIO 3 // Definição do tamanho dos navios
    
    int verificarPosicao(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int tamanho, char direcao) {
        for (int i = 0; i < tamanho; i++) {
            if (linha < 0 || linha >= TAMANHO || coluna < 0 || coluna >= TAMANHO || tabuleiro[linha][coluna] == 3) {
                return 0; // Posição inválida ou ocupada
            }
            if (direcao == 'H') coluna++; // Horizontal
            else if (direcao == 'V') linha++; // Vertical
            else if (direcao == 'D') { linha++; coluna++; } // Diagonal 
            else if (direcao == 'A') { linha--; coluna++; } // Diagonal 
        }
        return 1; // Posição válida
    }
    
    void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int tamanho, char direcao) {
        for (int i = 0; i < tamanho; i++) {
            tabuleiro[linha][coluna] = 3; // Marca o navio na matriz
            if (direcao == 'H') coluna++; 
            else if (direcao == 'V') linha++; 
            else if (direcao == 'D') { linha++; coluna++; } 
            else if (direcao == 'A') { linha--; coluna++; } 
        }
    }
    
    int main() {
        int tabuleiro[TAMANHO][TAMANHO] = {0};
    
        // Coordenadas para os navios
        int linha, coluna;
    
        // Posicionamento de dois navios horizontais/verticais
        printf("Insira a linha e coluna inicial para o navio horizontal (0-9): ");
        scanf("%d %d", &linha, &coluna);
        if (verificarPosicao(tabuleiro, linha, coluna, TAM_NAVIO, 'H')) {
            posicionarNavio(tabuleiro, linha, coluna, TAM_NAVIO, 'H');
        } else {
            printf("Erro: Posicionamento inválido para o navio horizontal!\n");
            return 1;
        }
    
        printf("Insira a linha e coluna inicial para o navio vertical (0-9): ");
        scanf("%d %d", &linha, &coluna);
        if (verificarPosicao(tabuleiro, linha, coluna, TAM_NAVIO, 'V')) {
            posicionarNavio(tabuleiro, linha, coluna, TAM_NAVIO, 'V');
        } else {
            printf("Erro: Posicionamento inválido para o navio vertical!\n");
            return 1;
        }
    
        // Posicionamento de dois navios diagonais
        printf("Insira a linha e coluna inicial para o navio diagonal ↘ (0-9): ");
        scanf("%d %d", &linha, &coluna);
        if (verificarPosicao(tabuleiro, linha, coluna, TAM_NAVIO, 'D')) {
            posicionarNavio(tabuleiro, linha, coluna, TAM_NAVIO, 'D');
        } else {
            printf("Erro: Posicionamento inválido para o navio diagonal ↘!\n");
            return 1;
        }
    
        printf("Insira a linha e coluna inicial para o navio diagonal ↗ (0-9): ");
        scanf("%d %d", &linha, &coluna);
        if (verificarPosicao(tabuleiro, linha, coluna, TAM_NAVIO, 'A')) {
            posicionarNavio(tabuleiro, linha, coluna, TAM_NAVIO, 'A');
        } else {
            printf("Erro: Posicionamento inválido para o navio diagonal ↗!\n");
            return 1;
        }
    
        // Exibição do tabuleiro
        printf("Tabuleiro do Batalha Naval:\n");
        for (int i = 0; i < TAMANHO; i++) {
            for (int j = 0; j < TAMANHO; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    
        return 0;
    }