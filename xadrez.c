#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas, char direcao) {
    if (casas <= 0) return;  

    // Imprime o movimento
    if (direcao == 'H') {
        printf("Direita\n");  
    } else if (direcao == 'V') {
        printf("Baixo\n");  
    }

    // Chama recursivamente para o próximo movimento
    moverTorre(casas - 1, direcao);
}

// Função recursiva para mover o Bispo
void moverBispo(int casas, int movimentoVertical, int movimentoHorizontal) {
    if (casas <= 0) return;  

    // Imprime o movimento
    if (movimentoVertical > 0) {
        printf("Cima\n");  
    } else if (movimentoVertical < 0) {
        printf("Baixo\n");  
    }

    if (movimentoHorizontal > 0) {
        printf("Direita\n");  
    } else if (movimentoHorizontal < 0) {
        printf("Esquerda\n");  
    }

    // Chama recursivamente para o próximo movimento
    moverBispo(casas - 1, movimentoVertical, movimentoHorizontal);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas, char direcaoVertical, char direcaoHorizontal) {
    if (casas <= 0) return;  

    // Imprime o movimento
    if (direcaoVertical == 'C') {
        printf("Cima\n");  
    } else if (direcaoVertical == 'B') {
        printf("Baixo\n");  
    }

    if (direcaoHorizontal == 'D') {
        printf("Direita\n");  
    } else if (direcaoHorizontal == 'E') {
        printf("Esquerda\n");  
    }

    // Chama recursivamente para o próximo movimento
    moverRainha(casas - 1, direcaoVertical, direcaoHorizontal);
}

// Função com loops aninhados para mover o Cavalo
void moverCavalo() {
    
    int i, j;

    // Loop externo para as duas casas para cima
    for (i = 0; i < 2; i++) {
        printf("Cima\n");  
    }

    // Loop interno para uma casa para a direita
    for (j = 0; j < 1; j++) {
        printf("Direita\n");  
    }
}

int main() {
    // Exemplo de movimento das peças
    printf("Movimento da Torre (5 casas para baixo):\n");
    moverTorre(5, 'V');
    printf("\n");

    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    moverBispo(5, 1, 1);
    printf("\n");

    printf("Movimento da Rainha (5 casas para a esquerda e para baixo):\n");
    moverRainha(5, 'B', 'E');
    printf("\n");

    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    moverCavalo();
    printf("\n");

    return 0;
}
