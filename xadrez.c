#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int bispo_move = 5;  // valor do movimento do bispo
  int torre_move = 5;  // valor do movimento da torre
  int rainha_move = 8; // valor do movimento da rainha
  int opc, opc2;            // variável para armazenar a opção escolhida pelo usuário
  int i;               // variável de controle para o loop e posição inicial do movimento
  int j;               // variável de controle para o loop e posição final do movimento
  int direcao; // variável para armazenar a direção do movimento

    printf("Bem-vindo ao jogo de xadrez!\n"); // mensagem de boas-vindas
    printf("Escolha uma peça de xadrez para se mover:\n");

    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    
    scanf("%d", &opc); // lê a opção escolhida pelo usuário

    switch (opc){

        case 1: // caso o usuário escolha o bispo
            printf("Você escolheu o bispo!\n");
            printf("O bispo pode se mover em até %d casas na diagonal.\n", bispo_move);
            printf("Quantas casas você deseja mover o bispo?\n");

            scanf("%d", &i); // lê o número de casas que o usuário deseja mover o bispo
            
            printf("Escolha a direção do movimento:\n");
            printf("1 - Diagonal superior esquerda\n");
            printf("2 - Diagonal superior direita\n");
            printf("3 - Diagonal inferior esquerda\n");
            printf("4 - Diagonal inferior direita\n");

            scanf("%d", &direcao); // lê a direção do movimento

            switch(direcao){
                case  1: // diagonal superior esquerda
                    for(j = 1; j <= i; j++){
                        printf("O bispo se moveu na diagonal esquerda\n");
                    }
                    break;
                case 2: // diagonal superior direita
                    for(j = 1; j <= i; j++){
                        printf("O bispo se moveu na diagonal direita\n");
                    }
                    break;
                case 3: // diagonal inferior esquerda
                    for(j = 1; j <= i; j++){
                        printf("O bispo se moveu na diagonal inferior esquerda\n");
                    }
                    break;
                case 4: // diagonal inferior direita
                    for(j = 1; j <= i; j++){
                        printf("O bispo se moveu na diagonal inferior direita\n");
                    }
                    break;

                default: // caso o usuário escolha uma direção inválida
                    printf("Direção inválida!\n");
                    break;
            }

            break; // fim do case 1

            case 2: // caso o usuário escolha a torre
            printf("Você escolheu a torre!\n");
            printf("A torre pode se mover em até %d casas na vertical ou horizontal.\n", torre_move);
            printf("Quantas casas você deseja mover a torre?\n");

            scanf("%d", &i); // lê o número de casas que o usuário deseja mover a torre

            printf("Escolha a direção do movimento:\n");

            printf("1 - Vertical para cima\n");
            printf("2 - Vertical para baixo\n");
            printf("3 - Horizontal para a esquerda\n");
            printf("4 - Horizontal para a direita\n");

            scanf("%d", &direcao); // lê a direção do movimento

            switch(direcao){
                case 1: // vertical para cima
                    for(j = 1; j <= i; j++){
                        printf("A torre se moveu para cima\n");
                    }
                    break;
                case 2: // vertical para baixo
                    for(j = 1; j <= i; j++){
                        printf("A torre se moveu para baixo\n");
                    }
                    break;
                case 3: // horizontal para a esquerda
                    for(j = 1; j <= i; j++){
                        printf("A torre se moveu para a esquerda\n");
                    }
                    break;
                case 4: // horizontal para a direita
                    for(j = 1; j <= i; j++){
                        printf("A torre se moveu para a direita\n");
                    }
                    break;

                default: // caso o usuário escolha uma direção inválida
                    printf("Direção inválida!\n");
                    break;
            }
            break; // fim do case 2

            case 3: // caso o usuário escolha a rainha
            printf("Você escolheu a rainha!\n");
            printf("A rainha pode se mover em até %d casas na vertical, horizontal ou diagonal.\n", rainha_move);
            printf("Quantas casas você deseja mover a rainha?\n");

            scanf("%d", &i); // lê o número de casas que o usuário deseja mover a rainha

            printf("Escolha a direção do movimento:\n");

            printf("1 - Vertical para cima\n");
            printf("2 - Vertical para baixo\n");
            printf("3 - Horizontal para a esquerda\n");
            printf("4 - Horizontal para a direita\n");
            printf("5 - Diagonal superior esquerda\n");
            printf("6 - Diagonal superior direita\n");
            printf("7 - Diagonal inferior esquerda\n");
            printf("8 - Diagonal inferior direita\n");

            scanf("%d", &direcao); // lê a direção do movimento

            switch(direcao){

                case 1: // vertical para cima
                    for(j = 1; j <= i; j++){
                        printf("A rainha se moveu para cima\n");
                    }
                    break;

                case 2: // vertical para baixo
                    for(j = 1; j <= i; j++){
                        printf("A rainha se moveu para baixo\n");
                    }
                    break;

                case 3: // horizontal para a esquerda
                    for(j = 1; j <= i; j++){
                        printf("A rainha se moveu para a esquerda\n");
                    }
                    break;

                case 4: // horizontal para a direita
                    for(j = 1; j <= i; j++){
                        printf("A rainha se moveu para a direita\n");
                    }
                    break;
                case 5: // diagonal superior esquerda
                    for(j = 1; j <= i; j++){
                        printf("A rainha se moveu na diagonal superior esquerda\n");
                    }
                    break;
                case 6: // diagonal superior direita
                    for(j = 1; j <= i; j++){
                        printf("A rainha se moveu na diagonal superior direita\n");
                    }
                    break;
                case 7: // diagonal inferior esquerda
                    for(j = 1; j <= i; j++){
                        printf("A rainha se moveu na diagonal inferior esquerda\n");
                    }
                    break;
                case 8: // diagonal inferior direita
                    for(j = 1; j <= i; j++){
                        printf("A rainha se moveu na diagonal inferior direita\n");
                    }
                    break;
                default: // caso o usuário escolha uma direção inválida
                    printf("Direção inválida!\n");
                    break;
            }
            break; // fim do case 3

            default: // caso o usuário escolha uma opção inválida
                printf("Opção inválida!\n");
                break; // fim do default
    }


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
