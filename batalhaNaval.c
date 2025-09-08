#include <stdio.h>


int main(){


    int tabuleiro[10][10] = { //criação da matriz do tabuleiro (novato)
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };


    int navio1[3] = {3, 3, 3}; //criação navio horizontal (novato)
    int navio2[3] = {3, 3, 3}; //criação navio vertical (novato)


    int navio3[3] = {3, 3, 3}; //criação navio diagonal (aventureiro)
    int navio4[3] = {3, 3, 3}; //criação navio diagonal (aventureiro)


    int cone[2][3] = { //criação habilidade cone
        {0, 1, 0}, 
        {1, 1, 1}};
    int cruz[5][3] = { //criação habilidade cruz
        {0, 1, 0}, 
        {0, 1, 0}, 
        {1, 1, 1}, 
        {0, 1, 0}, 
        {0, 1, 0}};
    int octaedro[3][3] = { //criação habilidade octaedro
        {0, 1, 0}, 
        {1, 1, 1}, 
        {0, 1, 0}};


    for(int coluna = 0; coluna < 3; coluna++){ //posição predefinida do navio horizontal (novato)
        tabuleiro[1][5 + coluna] = navio1[coluna]; 
    }


    for(int linha = 0; linha < 3; linha++){ //posição predefinida do navio vertical (novato)
        tabuleiro[5 + linha][1] = navio2[linha];
    }


    for(int linha = 0, coluna = 0; linha < 3, coluna < 3; linha++, coluna++){ //posição predefinida do navio diagonal (aventureiro)
        tabuleiro[7 + linha][7 + coluna] = navio3[linha];
    }


    for(int linha = 0, coluna = 0; linha < 3, coluna < 3; linha++, coluna++){ //posição predefinida do navio diagonal (aventureiro)
        tabuleiro[2 - linha][0 + coluna] = navio4[linha];
    }


    for(int linha = 0; linha < 2; linha++){ //posicionando habilidade cone
        for(int coluna = 0; coluna < 3; coluna++){
            tabuleiro[2 + linha][1 + coluna] = cone[linha][coluna];
            if(cone[linha][coluna] == 1){ //substituindo o valor 1 para 5 no tabuleiro para melhor visualização
                tabuleiro[2 + linha][1 + coluna] = 5;
            } else{
                tabuleiro[2 + linha][1 + coluna] = cone[linha][coluna];
            }
        }
    }


    for(int linha = 0; linha < 5; linha++){ //posicionando habilidade cruz
        for(int coluna = 0; coluna < 3; coluna++){
            tabuleiro[4 + linha][4 + coluna] = cruz[linha][coluna];
            if(cruz[linha][coluna] == 1){ //substituindo o valor 1 para 5 no tabuleiro para melhor visualização
                tabuleiro[4 + linha][4 + coluna] = 5;
            } else{
                tabuleiro[4 + linha][4 + coluna] = cruz[linha][coluna];
            }
        }
    }


    for(int linha = 0; linha < 3; linha++){ //posicionando habilidade octaedro
        for(int coluna = 0; coluna < 3; coluna++){
            tabuleiro[2 + linha][7 + coluna] = octaedro[linha][coluna];
            if(octaedro[linha][coluna] == 1){ //substituindo o valor 1 para 5 no tabuleiro para melhor visualização
                tabuleiro[2 + linha][7 + coluna] = 5;
            } else{
                tabuleiro[2 + linha][7 + coluna] = octaedro[linha][coluna];
            }
        }
    }


    printf("Bem vindo ao jogo Batalha Naval! \n"); //breve apresentação dos elementos
    printf("No jogo, temos 3 elementos: \n");
    printf("A água (representado pelos 0s). \n");
    printf("Os barcos (representados pelos 3s). \n");
    printf("E as habilidades (representadas pelos 5s), sendo elas: \n");
    printf("Cone: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    printf("Cruz: \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
    printf("Octaedro: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }


    printf("\nTabuleiro do Jogo: \n"); //apresentação do tabuleiro utilizando loops aninhados (novato)
    for(int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }


    return 0;
}
