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
        tabuleiro[2 - linha][0 + coluna] = navio3[linha];
    }


    printf("Tabuleiro do Jogo: \n"); //apresentação do tabuleiro utilizando loops aninhados (novato)
    for(int linha = 0; linha < 10; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }


    return 0;
}
