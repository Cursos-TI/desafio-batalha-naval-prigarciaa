#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Níveis: Novato, Aventureiro e Mestre.

int main() {
    // Nível Novato - Tabuleiro Base
    char colunas [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro [10][10] = {0};

    // Posicionar navio horizontal em linha 3, coluna G-I (índices: linha 2, colunas 6)
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][6 + i] = 3;
    }

    // Posicionar navio vertical em coluna D, linha 6-8 (índices: linhas 5,6,7; coluna 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][3] = 3;
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    
    //Posicionar navio diagonal principal (superior esquerda para inferior direita), exemplo: linha 1-3, coluna A-C (índices 0,0 até 2,2)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }
    //Posicionar navio diagonal secundária (superior direita para inferior esquerda), exemplo: linha 1-3, coluna J-H (índices 0,9 até 2,7)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Mostrar tabuleiro atual
    printf("Tabuleiro com navios posicionados:\n\n");
    //Imprimir cabeçalho (letras das colunas)
    printf("  "); // Espaço para alinhar com os números das linhas
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    // Imprimir o tabuleiro com números nas linhas
    for (int i = 0; i < 10; i++) {
        printf("%d", i + 1); //Número de linhas de (1 a 10)
        if(i + 1 < 10) printf(" "); // Ajuste de espaço para alinhamento de 1 dígito
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
     
   // Nível Mestre - Habilidades Especiais
    printf("\nHabilidade em CONE:\n");
    int cone[3][5] = {0};
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 1;
            }
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade em CRUZ:\n");
    int cruz[3][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 1 || j == 2) {
                cruz[i][j] = 1;
            }
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade em OCTAEDRO:\n");
    int octaedro[3][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 || i == 2) && j == 2) {
                octaedro[i][j] = 1;
            }
            if (i == 1 && (j >= 1 && j <= 3)) {
                octaedro[i][j] = 1;
            }
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    return 0;
}



