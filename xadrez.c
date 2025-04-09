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

    #define TAMANHO 10     // Dimensão do tabuleiro
    #define TAM_HABILIDADE 5 // Dimensão das matrizes de habilidade
    #define TAM_NAVIO 3    // Tamanho dos navios
    
    void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int matriz[TAM_HABILIDADE][TAM_HABILIDADE], int origemLinha, int origemColuna) {
        int offset = TAM_HABILIDADE / 2; // Deslocamento para centrar a matriz
        for (int i = 0; i < TAM_HABILIDADE; i++) {
            for (int j = 0; j < TAM_HABILIDADE; j++) {
                int linhaTabuleiro = origemLinha - offset + i;
                int colunaTabuleiro = origemColuna - offset + j;
    
                if (linhaTabuleiro >= 0 && linhaTabuleiro < TAMANHO &&
                    colunaTabuleiro >= 0 && colunaTabuleiro < TAMANHO &&
                    matriz[i][j] == 1) {
                    tabuleiro[linhaTabuleiro][colunaTabuleiro] = 5; // Marca a área afetada
                }
            }
        }
    }
    
    void criarCone(int matriz[TAM_HABILIDADE][TAM_HABILIDADE]) {
        for (int i = 0; i < TAM_HABILIDADE; i++) {
            for (int j = 0; j < TAM_HABILIDADE; j++) {
                if (j >= TAM_HABILIDADE / 2 - i && j <= TAM_HABILIDADE / 2 + i) {
                    matriz[i][j] = 1; // Área afetada
                } else {
                    matriz[i][j] = 0; // Fora da área
                }
            }
        }
    }
    
    void criarCruz(int matriz[TAM_HABILIDADE][TAM_HABILIDADE]) {
        for (int i = 0; i < TAM_HABILIDADE; i++) {
            for (int j = 0; j < TAM_HABILIDADE; j++) {
                if (i == TAM_HABILIDADE / 2 || j == TAM_HABILIDADE / 2) {
                    matriz[i][j] = 1; // Área afetada
                } else {
                    matriz[i][j] = 0; // Fora da área
                }
            }
        }
    }
    
    void criarOctaedro(int matriz[TAM_HABILIDADE][TAM_HABILIDADE]) {
        for (int i = 0; i < TAM_HABILIDADE; i++) {
            for (int j = 0; j < TAM_HABILIDADE; j++) {
                if (j >= TAM_HABILIDADE / 2 - i && j <= TAM_HABILIDADE / 2 + i && i <= TAM_HABILIDADE / 2 ||
                    j >= i - TAM_HABILIDADE / 2 && j <= TAM_HABILIDADE - 1 - i && i > TAM_HABILIDADE / 2) {
                    matriz[i][j] = 1; // Área afetada
                } else {
                    matriz[i][j] = 0; // Fora da área
                }
            }
        }
    }
    
    void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
        for (int i = 0; i < TAMANHO; i++) {
            for (int j = 0; j < TAMANHO; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    }
    
    int main() {
        int tabuleiro[TAMANHO][TAMANHO] = {0};
    
        tabuleiro[3][4] = 3;
        tabuleiro[3][5] = 3;
        tabuleiro[3][6] = 3;
        tabuleiro[6][7] = 3;
        tabuleiro[7][7] = 3;
        tabuleiro[8][7] = 3;
    
        // Matrizes de habilidades
        int cone[TAM_HABILIDADE][TAM_HABILIDADE];
        int cruz[TAM_HABILIDADE][TAM_HABILIDADE];
        int octaedro[TAM_HABILIDADE][TAM_HABILIDADE];
    
        criarCone(cone);
        criarCruz(cruz);
        criarOctaedro(octaedro);
    
        aplicarHabilidade(tabuleiro, cone, 2, 2);      // Origem do cone
        aplicarHabilidade(tabuleiro, cruz, 5, 5);     // Origem da cruz
        aplicarHabilidade(tabuleiro, octaedro, 8, 8); // Origem do octaedro
    
        // Exibir tabuleiro
        printf("Tabuleiro com áreas de habilidades:\n");
        exibirTabuleiro(tabuleiro);
    
        return 0;
    }