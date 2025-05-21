#include <stdio.h>

// Função recursiva para o Bispo
void mover_bispo(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    mover_bispo(passos - 1);
}

// Função recursiva para a Torre
void mover_torre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    mover_torre(passos - 1);
}

// Função recursiva para a Rainha
void mover_rainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    mover_rainha(passos - 1);
}

int main() {
    const int passos_bispo = 5;
    const int passos_torre = 5;
    const int passos_rainha = 8;

    printf("Movimento do Bispo:\n");
    mover_bispo(passos_bispo);

    printf("\nMovimento da Torre:\n");
    mover_torre(passos_torre);

    printf("\nMovimento da Rainha:\n");
    mover_rainha(passos_rainha);

    // Movimento do Cavalo: 2 para cima e 1 para a direita
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            printf("Cima\n");
        } else {
            printf("Direita\n");
        }
    }

    return 0;
}
