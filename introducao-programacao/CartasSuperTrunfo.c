#include <stdio.h> // Biblioteca padrao para entrada e saida de dados (printf, scanf)

// -----------------------------------------------------------
// DESAFIO SUPER TRUNFO - NIVEL MESTRE
// Autor: Marcelo
// Curso: Analise e Desenvolvimento de Sistemas - Faculdade Estacio
// -----------------------------------------------------------
// Objetivo:
//  - Ler informacoes de duas cartas do jogo Super Trunfo
//  - Calcular Densidade Populacional e PIB per Capita
//  - Calcular o "Super Poder" de cada carta
//  - Comparar as cartas e mostrar qual vence em cada atributo
// -----------------------------------------------------------

int main()
{

    // -------------------------------------------------------
    // DECLARACAO DAS VARIAVEIS
    // Aqui é aonte tem as variAveis que vao armazenar os dados das duas cartas.
    // As variAveis foram escolhidas com tipos adequados para o tipo de dado.
    // -------------------------------------------------------

    // -------- CARTA 1 --------
    char estado1[50];             // Ex: "A" (Estado entre A e H)
    char codigo1[10];             // Ex: "A01"
    char cidade1[50];             // Nome da cidade, ex: "Planaltina"
    unsigned long int populacao1; // Populacao pode ser um número muito grande, por isso o unsigned long int
    float area1;                  // Area da cidade em km² (pode ter casas decimais)
    float pib1;                   // PIB da cidade (em bilhoes de reais)
    int pontosTuristicos1;        // Quantidade de pontos turisticos
    float densidade1;             // Densidade populacional (habitantes por km²)
    float pibPerCapita1;          // PIB per Capita (riqueza média por pessoa)
    float superPoder1;            // Valor total que representa o poder da carta

    // -------- CARTA 2 --------
    char estado2[50];             // Ex: "A" (Estado entre A e H)
    char codigo2[10];             // Ex: "A01"
    char cidade2[50];             // Nome da cidade, ex: "Planaltina"
    unsigned long int populacao2; // Populacao pode ser um número muito grande, por isso o unsigned long int
    float area2;                  // Area da cidade em km² (pode ter casas decimais)
    float pib2;                   // PIB da cidade (em bilhoes de reais)
    int pontosTuristicos2;        // Quantidade de pontos turisticos
    float densidade2;             // Densidade populacional (habitantes por km²)
    float pibPerCapita2;          // PIB per Capita (riqueza média por pessoa)
    float superPoder2;            // Valor total que representa o poder da carta

    // -------------------------------------------------------
    // ENTRADA DE DADOS - CARTA 1
    // Aqui o usuArio digita as informacoes da primeira carta.
    // -------------------------------------------------------
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // O %[^\n] permite ler o nome completo da cidade até mesmo com espacos
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // -------------------------------------------------------
    // ENTRADA DE DADOS - CARTA 2
    // -------------------------------------------------------
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %s", estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // -------------------------------------------------------
    // CALCULOS DE DENSIDADE POPULACIONAL E PIB PER CAPITA
    // -------------------------------------------------------

    // A densidade populacional mostra quantas pessoas existem por quilômetro quadrado.
    // Formula: Densidade = Populacao / Area
    // Exemplo: 10.000 pessoas em 2 km² -> 5000 pessoas por km².
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // O PIB (Produto Interno Bruto) foi digitado em bilhoes.
    // Para calcular o PIB per capita, precisamos converter ele para reais.
    // Entao multiplicamos o PIB por 1.000.000.000 (um bilhao) antes da divisao.
    // Formula: PIB per Capita = (PIB * 1.000.000.000) / Populacao
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // -------------------------------------------------------
    // CALCULO DO SUPER PODER
    // -------------------------------------------------------
    // O Super Poder é uma soma de vArios atributos da cidade.
    // A ideia é representar a forca geral da carta.
    //
    // Formula:
    // Super Poder = Populacao + Area + PIB + Pontos Turisticos + PIB per Capita + (1 / Densidade)
    //
    // * Usamos (1 / Densidade) porque quanto menor a densidade, maior o poder.
    //   Exemplo: cidades menos populosas (menos gente por km²) têm "mais espaco" e ganham vantagem.
    //
    // * Como estamos somando diferentes tipos de valores (inteiros e floats),
    //   fazemos a conversao de tipos para float quando necessArio.
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // -------------------------------------------------------
    // EXIBIcaO DOS DADOS CADASTRADOS
    // -------------------------------------------------------
    printf("\n======================================\n");
    printf("        CARTAS CADASTRADAS               \n");
    printf("======================================\n");

    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // -------------------------------------------------------
    // COMPARAcaO DAS CARTAS
    // -------------------------------------------------------
    // Aqui comparamos os atributos das duas cartas.
    // Cada comparacao usa operadores relacionais (> ou <).
    // Se a expressao for verdadeira, o resultado serA 1.
    // Se for falsa, o resultado serA 0.
    // Exemplo: (populacao1 > populacao2) → se for verdade, imprime 1.
    // -------------------------------------------------------
    printf("\n======================================\n");
    printf("         COMPARAcaO DE CARTAS              \n");
    printf("==========================================\n\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

    // OBS: Na Densidade Populacional, quem tem o MENOR valor vence.
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    // -------------------------------------------------------
    // FINALIZAcaO DO PROGRAMA
    // -------------------------------------------------------
    printf("\n=======================================================\n");
    printf("               -- Fim do Jogo --                \n");
    printf("=======================================================\n");

    return 0; // Retorna 0, indicando que o programa terminou sem erros
}
