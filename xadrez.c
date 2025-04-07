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

    int main() {
        // Movimento da Torre - utilizando "for"
        printf("Movimento da Torre (5 casas para a direita):\n");
        for (int i = 1; i <= 5; i++) {
            printf("Casa %d: Direita\n", i);
        }
    
        // Movimento do Bispo - utilizando "while"
        printf("\nMovimento do Bispo (5 casas na diagonal para cima e à direita):\n");
        int casasBispo = 1; // Contador para o while
        while (casasBispo <= 5) {
            printf("Casa %d: Cima, Direita\n", casasBispo);
            casasBispo++;
        }
    
        // Movimento da Rainha - utilizando "do-while"
        printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
        int casasRainha = 1; // Contador para o do-while
        do {
            printf("Casa %d: Esquerda\n", casasRainha);
            casasRainha++;
        } while (casasRainha <= 8);
    
        // Movimento  Cavalo - utilizando "for" e "while"
        printf("\nMovimento do Cavalo (2 casas para baixo e 1 casa para a esquerda):\n");
    
        // Loop para movimento na direção vertical 
        for (int i = 1; i <= 2; i++) {
            printf("Etapa %d: Baixo\n", i);
        }
    
        // Loop para movimento na direção horizontal 
        int casaEsquerda = 1; // Contador para o movimento horizontal
        while (casaEsquerda <= 1) {
            printf("Etapa %d: Esquerda\n", casaEsquerda + 2); // Ajustando a etapa após as duas casas para baixo
            casaEsquerda++;
        }
    
        return 0;
    }