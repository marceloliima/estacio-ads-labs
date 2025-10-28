#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nivel Aventureiro
// Agora vamos fazer o movimento do cavalo, que anda em L
// Vou usar 2 loops como pediu o professor (um for e um while)
// Espero que funcione rsrs

int main()
{

    // lembrando das outras pecas so pra deixar o programa completo
    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;

    printf("=== Movimentacao das Pecas - Nivel Novato ===\n\n");
    printf("=== Movimento do Bispo ===\n\n");
    // bispo - vai pra diagonal superior direita (cima e direita)
    for (int i = 0; i < casasBispo; i++)
    {
        printf("Cima e Direita (Diagonal)\n");
    }

    printf("\n");
    printf("=== Movimento da Torre ===\n\n");
    // torre - anda 5 pra direita
    for (int i = 0; i < casasTorre; i++)
    {
        printf("Direita\n");
    }

    printf("\n");
    printf("=== Movimento da Rainha ===\n\n");
    // rainha - anda 8 pra esquerda
    for (int i = 0; i < casasRainha; i++)
    {
        printf("Esquerda\n");
    }

    printf("\n");

    // =============================
    // NIVEL AVENTUREIRO - MOVIMENTO DO CAVALO
    // =============================

    printf("=== Movimento do Cavalo ===\n\n");

    // o cavalo vai andar 2 pra baixo e 1 pra esquerda (faz o L)
    int casasBaixo = 2;
    int casasEsquerda = 1;

    // primeiro loop FOR pra ir pra baixo
    for (int i = 0; i < casasBaixo; i++)
    {
        printf("Baixo\n");

        // quando acabar de descer, vai pra esquerda usando WHILE
        if (i == casasBaixo - 1)
        {
            int j = 0;
            while (j < casasEsquerda)
            {
                printf("Esquerda\n");
                j++; // se nao colocar isso o programa trava kkk
            }
        }
    }

    printf("\nMovimento do Cavalo finalizado\n");

    // fim do programa
    printf("\nFIM DO PROGRAMA\n");

    return 0;
}