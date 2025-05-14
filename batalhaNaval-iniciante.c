#include <stdio.h>
#define LINHAS 9
#define COLUNAS 9


int main(){

    int soma = 0;

    int tabuleiro[LINHAS][COLUNAS];


    char legenda[10] = {'A','B','C','D','E','F','G','H','I','J'}; //Criando o array com o nome das posições

    for (int i = 0; i <= 10; i++){ //Comando para mostrar a linha das posições
        printf("%c ", legenda[i]);

    }

    for (int x = 0; x <= LINHAS; x++){  //Comando para mostrar o tabuleiro
        for(int y =0; y <= COLUNAS; y++){

            tabuleiro[x][y] = soma;

            tabuleiro[1][2] = 3; //Força bruta para aplicar os navios
            tabuleiro[2][2] = 3;
            tabuleiro[3][2] = 3;

            tabuleiro[9][4] = 3;
            tabuleiro[9][5] = 3;
            tabuleiro[9][6] = 3;

            printf("%d ", tabuleiro[x][y]);
            
        }
        printf("\n");
    }

    

}

