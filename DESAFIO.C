#include <stdio.h>

#define TAM 10

int main() {

    int tab[TAM] [TAM];

    // o 0 simboliza a agua
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            tab[i][j] = 0;
        }
    }

    // CRUZ simbolizada pelo 3
    // saindo de (2,3)
    for(int i = 0; i < 5; i++) {
        tab[2][1 + i] = 3;   // linha horizontal
        tab[i][3] = 3;       // coluna vertical
    }

    //OCTAEDRO simbolizado pelo 2
    // saindo de (5,7
    tab[3][7] = 2;

    tab[4][6] = 2;
    tab[4][7] = 2;
    tab[4][8] = 2;

    tab[5][5] = 2;
    tab[5][6] = 2;
    tab[5][7] = 2;
    tab[5][8] = 2;
    tab[5][9] = 2;

    tab[6][6] = 2;
    tab[6][7] = 2;
    tab[6][8] = 2;

    tab[7][7] = 2;

    //CONE sibolizado pelo 1
    // Saindo de (5,2)
    tab[5][2] = 1;

    tab[6][1] = 1;
    tab[6][2] = 1;
    tab[6][3] = 1;

    tab[7][0] = 1;
    tab[7][1] = 1;
    tab[7][2] = 1;
    tab[7][3] = 1;
    tab[7][4] = 1;

    // resultado 

    printf("  0123456789\n");

    for(int i = 0; i < TAM; i++) {
        printf("%d ", i);
        for(int j = 0; j < TAM; j++) {
            printf("%d", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}