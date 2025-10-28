#include <stdio.h>

// Desafio de Xadrez - MateCheck (Nivel Novato 🐣)
// Esse programa aqui vai simular o movimento de tres peças do xadrez.
// Eu to fazendo o nivel novato pq to aprendendo ainda rsrs
// A ideia é usar as estruturas de repetição falou (for, while, do-while)
// pra mexer a Torre, o Bispo e a Rainha.
// Bora lá!! 😅

int main() {
    // Primeiro vou declarar umas variaveis pra ajudar nos movimentos
    // Eu acho que é bom usar constante pq o desafio disse isso...
    const int casasTorre = 5;  // Torre anda 5 casas pra direita
    const int casasBispo = 5;  // Bispo anda 5 casas pra diagonal pra cima e direita
    const int casasRainha = 8; // Rainha anda 8 casas pra esquerda

    // ==============================
    // MOVIMENTO DA TORRE (usa for)
    // ==============================
    // A torre anda reto, pra frente, pra trás, pros lados (mas aqui só pra direita)
    // Vou usar o loop for pq sei quantas vezes quero repetir (5 vezes).
    printf("=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita %d casa(s)\n", i);
        // Eu acho que o printf ta certo, pq ele mostra o numero da casa
    }
    printf("\n"); // só pra dar um espaço bonito no console 😁

    // ==============================
    // MOVIMENTO DO BISPO (usa while)
    // ==============================
    // O bispo anda na diagonal... tipo, ele vai pra cima e pra direita ao mesmo tempo
    // vou usar while pq quero testar a condição de movimento antes de cada passo
    printf("=== Movimento do BISPO ===\n");
    int contadorBispo = 1; // começar do 1 pq vai andar 5 casas
    while (contadorBispo <= casasBispo) {
        printf("Cima e Direita (%d casa)\n", contadorBispo);
        contadorBispo++; // tem q incrementar senão trava tudo e vira loop infinito kkkk
    }
    printf("\n");

    // ==============================
    // MOVIMENTO DA RAINHA (usa do-while)
    // ==============================
    // A rainha é tipo a mais poderosa, ela anda pra todo lado,
    // mas aqui ela vai só pra esquerda 8 vezes (pq o desafio falou)
    // To usando do-while pq ele executa pelo menos uma vez
    printf("=== Movimento da RAINHA ===\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda %d casa(s)\n", contadorRainha);
        contadorRainha++;
        // Aqui o programa verifica só depois de andar, entao vai andar pelo menos uma vez
    } while (contadorRainha <= casasRainha);
    printf("\n");

    // Fim do nivel novato 🎉
    // Espero q funcione, se nao funcionar a gente dá um debug (acho q escreve assim? kkk)
    // A professora disse pra comentar tudo entao to comentando até demais 😅
    // Tchau programinha, até a proxima fase (nivel aventureiro) 😎

    return 0;
}