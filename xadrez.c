#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para número de casas
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Opção da peça selecionada
    int opcao = 0;

    // Menu de seleção
    printf("Escolha uma peça para mover:\n");
    printf("1 - Bispo (5 casas na diagonal superior direita)\n");
    printf("2 - Torre (5 casas para a direita)\n");
    printf("3 - Rainha (8 casas para a esquerda)\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);


    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    if (opcao == 1) {
        // BISPO: usa while
        int i = 0;
        while (i < BISPO_MOV) {
            printf("Cima\n");
            printf("Direita\n");
            i++;
        }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
           } else if (opcao == 2) {
        // TORRE: usa for
        for (int j = 0; j < TORRE_MOV; j++) {
            printf("Direita\n");
        }
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
           } else if (opcao == 3) {
        // RAINHA: usa do-while
        int k = 0;
        do {
            printf("Esquerda\n");
            k++;
        } while (k < RAINHA_MOV);
    } else {
        // Opção inválida
        printf("Opcao invalida!\n");
    }

    printf("--- Fim dos movimentos ---\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Número de movimentos do cavalo
        int movimentos = 3;

        printf("Movimentando o cavalo (em L: 2 para baixo, 1 para esquerda):\n\n");

    // Loop externo com 'for' para repetir o movimento em L
        
        for (int i = 0; i < movimentos; i++) {
        printf("Movimento %d:\n", i + 1);

        // Parte 1 do movimento: 2 passos para baixo
        
        int passos_baixo = 0;
        while (passos_baixo < 2) {
            printf("Baixo\n");
            passos_baixo++;
        }

        // Parte 2 do movimento: 1 passo para esquerda
        
        int passos_esquerda = 1;
        do {
            printf("Esquerda\n");
            passos_esquerda--;
        } while (passos_esquerda > 0);

        printf("---\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // --- Funções recursivas ---

    // Torre: 5 casas para a direita
        
        void moverTorre(int passos) {
        if (passos == 0) return;
        printf("Direita\n");
        moverTorre(passos - 1);
}

    // Rainha: 8 casas para a esquerda
        void moverRainha(int passos) {
        if (passos == 0) return;
        printf("Esquerda\n");
        moverRainha(passos - 1);
}

    
     // Exemplo: Crie uma função recursiva para o movimento do Bispo.
        
    // Função recursiva que move o bispo (Cima + Direita)
        
    void moverBispo(int passoAtual, int totalPassos) {
    // Condição de parada da recursão
    if (passoAtual > totalPassos) return;

    // Loops aninhados (mesmo com uma iteração, é exigência do desafio)
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    // Chamada recursiva para o próximo passo
    moverBispo(passoAtual + 1, totalPassos);
}
        

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    // Movimento único do Cavalo: L (2 para cima, 1 para direita)
        void moverCavalo() {
        int i = 0, j = 0;

        printf("Movimento do Cavalo (em L: 2 para cima, 1 para direita):\n");

    // Loop com variáveis múltiplas e condições 
            while (i < 3 && j < 2) {
                if (i == 1) {
             // Pula a iteração do meio como exemplo de uso de continue
                i++;
             continue;
        }

        if (i < 2) {
            printf("Cima\n");
            i++;
        }

        // Após 2 passos para cima, movimento lateral
        if (i == 2) {
            for (; j < 1; j++) {
                printf("Direita\n");
                break; // Movimento finalizado
            }
            break;
        }
    }
}

    return 0;
}
