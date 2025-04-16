#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(){

  int bispo_move = 5;  // valor do movimento do bispo
  int torre_move = 5;  // valor do movimento da torre
  int rainha_move = 8; // valor do movimento da rainha
  int cavalo_move = 3; // valor do movimento do cavalo 
  int opc, opc2;            // variável para armazenar a opção escolhida pelo usuário
  int i;               // variável de controle para o loop e posição inicial do movimento
  int j;               // variável de controle para o loop e posição final do movimento
  int direcao; // variável para armazenar a direção do movimento

    printf("Bem-vindo ao jogo de xadrez!\n"); // mensagem de boas-vindas
    printf("Escolha uma peça de xadrez para se mover:\n");

    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    
    scanf("%d", &opc); // lê a opção escolhida pelo usuário

    switch (opc){

        case 1: // caso o usuário escolha o bispo
            printf("Você escolheu o bispo!\n");
            printf("O bispo pode se mover em até %d casas na diagonal.\n", bispo_move);
            printf("Quantas casas você deseja mover o bispo?\n");

            scanf("%d", &i); // lê o número de casas que o usuário deseja mover o bispo

            if (0 < i && i <= bispo_move){
            
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

        } else { // caso o usuário escolha um número de casas inválido
            printf("Número de casas inválido!\n");
            return 0; // encerra o programa
        }
            case 2: // caso o usuário escolha a torre
            printf("Você escolheu a torre!\n");
            printf("A torre pode se mover em até %d casas na vertical ou horizontal.\n", torre_move);
            printf("Quantas casas você deseja mover a torre?\n");

            scanf("%d", &i); // lê o número de casas que o usuário deseja mover a torre

            if (0 < i && i <= torre_move){

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

        } else { // caso o usuário escolha um número de casas inválido
            printf("Número de casas inválido!\n");
            return 0; // encerra o programa
        }

            case 3: // caso o usuário escolha a rainha
            printf("Você escolheu a rainha!\n");
            printf("A rainha pode se mover em até %d casas na vertical, horizontal ou diagonal.\n", rainha_move);
            printf("Quantas casas você deseja mover a rainha?\n");

            scanf("%d", &i); // lê o número de casas que o usuário deseja mover a rainha

            if (0 < i && i <= rainha_move){

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

        } else { // caso o usuário escolha um número de casas inválido
            printf("Número de casas inválido!\n");
            return 0; // encerra o programa
        }

            case 4: // caso o usuário escolha o cavalo

            printf("Você escolheu o cavalo!\n");
            printf("O cavalo pode se mover em L, ou seja, duas casas para cima ou para baixo e uma casa para direita ou esquerda.\n");
            printf("Quantas casas você deseja mover o cavalo?\n");

            scanf("%d", &i); // lê o número de casas que o usuário deseja mover o cavalo

            if(i < 0 && i <= 2){ // se o número de casas for menor ou igual a 2, o cavalo só pode se mover verticalmente
                printf("Escolha a direção do movimento:\n");

                printf("1 - Vertical para cima\n");
                printf("2 - Vertical para baixo\n");

                scanf("%d", &direcao); // lê a direção do movimento

                switch(direcao){
                    case 1: // vertical para cima
                        for(j = 1; j <= i; j++){
                            printf("O cavalo se moveu para cima\n");
                        }
                        break;
                    case 2: // vertical para baixo
                        for(j = 1; j <= i; j++){
                            printf("O cavalo se moveu para baixo\n");
                        }
                        break;
                    default: // caso o usuário escolha uma direção inválida
                        printf("Direção inválida!\n");
                        break;
                }
            } else if(i = cavalo_move){ // se o número de casas for igual a 3, o cavalo se move em L}

                printf("Escolha a direção do movimento:\n");
                
                printf("1 - Vertical para cima e horizontal para a direita\n");
                printf("2 - Vertical para cima e horizontal para a esquerda\n");
                printf("3 - Vertical para baixo e horizontal para a direita\n");
                printf("4 - Vertical para baixo e horizontal para a esquerda\n");

                scanf("%d", &direcao); // lê a direção do movimento

                switch(direcao){

                case 1: // vertical para cima e horizontal para a direita
                    
                     for(i = 1; i <= 1; i++){
                        for(j = 1; j <= 2; j++){
                            printf("O cavalo se moveu para cima\n");
                        }
                        printf("O cavalo se moveu para a direita\n");
                     }
                    break;
                case 2: // vertical para cima e horizontal para a esquerda
                    
                     for(i = 1; i <= 1; i++){
                        for(j = 1; j <= 2; j++){
                            printf("O cavalo se moveu para cima\n");
                        }
                        printf("O cavalo se moveu para a esquerda\n");
                     }
                    break;
                
                case 3: // vertical para baixo e horizontal para a direita
                    
                     for(i = 1; i <= 1; i++){
                        for(j = 1; j <= 2; j++){
                            printf("O cavalo se moveu para baixo\n");
                        }
                        printf("O cavalo se moveu para a direita\n");
                     }
                    break;

                case 4: // vertical para baixo e horizontal para a esquerda
                    
                     for(i = 1; i <= 1; i++){
                        for(j = 1; j <= 2; j++){
                            printf("O cavalo se moveu para baixo\n");
                        }
                        printf("O cavalo se moveu para a esquerda\n");
                     }
                    break;

                default: // caso o usuário escolha uma direção inválida
                    printf("Direção inválida!\n");
                    break;

                }

                } else { // se o número de casas for maior que 3, o cavalo não pode se mover
                    printf("O cavalo não pode se mover mais de 3 casas!\n");
                }

        break; // fim do case 4

        default: // caso o usuário escolha uma opção inválida

        printf("Opção inválida!\n");

        break; // fim do default

            }


            return 0;

           
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

  

