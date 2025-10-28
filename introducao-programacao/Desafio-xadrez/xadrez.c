#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nivel Mestre - Versao super iniciante rsrs
// Aqui eu vou tentar fazer tudo certinho mas com comentarios bem bobos
// Espero que nao de erro e que o professor aceite hahaha

// ============================
// FUNCOES RECURSIVAS DAS PECAS
// ============================

// Bispo - recursivo e com loopzinho aninhado
void moverBispo(int casas) {
    // se nao tiver mais casas pra andar, para
    if (casas <= 0) return; // evita loop infinito, pq se nao da ruim
    // loop vertical (nao sei pq mas o professor pediu)
    for (int i = 0; i < 1; i++) {
        // loop horizontal (pra fazer a diagonal)
        for (int j = 0; j < 1; j++) {
            printf("Cima e Direita (Diagonal)\n"); // printando a direcao
        }
    }
    moverBispo(casas - 1); // recursao, diminui uma casa, torcendo pra funcionar
}

// Torre - recursivo simples
void moverTorre(int casas) {
    if (casas <= 0) return; // para evitar bug infinito
    printf("Direita\n"); // printa a direcao da torre
    moverTorre(casas - 1); // chama de novo pra simular loop
}

// Rainha - recursivo tbm
void moverRainha(int casas) {
    if (casas <= 0) return; // caso base, nao quero erro kkk
    printf("Esquerda\n"); // printando direcao
    moverRainha(casas - 1); // recursao, torcendo pra tudo dar certo
}

int main() {

    // declarando numero de casas de cada peca
    const int casasBispo = 5;   // bispo vai andar 5
    const int casasTorre = 5;   // torre tbm 5
    const int casasRainha = 8;  // rainha vai andar 8, pq ela e poderosa

    printf("=== Movimentacao das Pecas - Nivel Mestre ===\n\n");

    // ===========================
    // BISPO
    // ===========================
    printf("=== Movimento do Bispo ===\n\n");
    moverBispo(casasBispo); // chamando a funcao recursiva do bispo
    printf("\n"); // linha em branco pq fica feio colado

    // ===========================
    // TORRE
    // ===========================
    printf("=== Movimento da Torre ===\n\n");
    moverTorre(casasTorre); // recursao da torre
    printf("\n"); // linha em branco de novo, estilo professor

    // ===========================
    // RAINHA
    // ===========================
    printf("=== Movimento da Rainha ===\n\n");
    moverRainha(casasRainha); // recursao da rainha
    printf("\n"); // separando tudo bonitinho

    // ===========================
    // CAVALO - LOOPS COMPLEXOS
    // ===========================
    printf("=== Movimento do Cavalo ===\n\n");

    int casasCima = 2;    // duas casas pra cima
    int casasDireita = 1; // uma casa pra direita
    // inicializando variavel i que vai contar pra cima
    int i = 0;
    while (i < casasCima) { // loop vertical, o cavalo vai subindo
        printf("Cima\n"); // printando cada passo pra cima

        // loop horizontal dentro do vertical
        int j = 0; // contador pra direita
        for (j = 0; j < casasDireita; j++) {
            // so anda pra direita no ultimo passo de cima
            if (i == casasCima - 1) {
                printf("Direita\n"); // printando direcao horizontal
            } else {
                continue; // pula se ainda nao chegou no ultimo passo de cima
            }
        }

        i++; // incrementando i pra nao travar
        if (i > 10) break; // protecao contra loop infinito, tipo emergencia kkk
    }

    printf("\nMovimento do Cavalo finalizado\n"); // mensagem de sucesso

    // fim do programa
    printf("\nFIM DO PROGRAMA\n"); // fim real agora rsrs

    return 0; // retorno padrao pq main tem que retornar 0
}