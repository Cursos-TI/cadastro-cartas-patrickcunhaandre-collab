#include <stdio.h>
#include <string.h>

int main() {
    char playername[20];
    unsigned int TotaldePontos[2];
    //Apresentação do jogo - SplashScreen
    printf("----------------------------------\n|                                |\n| Bem-vindo ao jogo Super Trunfo |\n|                                |\n| ***Criado por Patrick Andre*** |\n|                                |\n----------------------------------\n\n");
    
    //Nome do jogador
    printf("Qual o seu nome? \n");
    fgets(playername, 20, stdin);
    playername[strcspn(playername, "\n")] = 0; // Remover o caractere de nova linha
    printf("\n*** Bem-vindo, %s! Espero que se divirta! ***\n\n", playername);
    
    //Variaveis das cartas
    char sigla[2][2];
    char codigo[2][2];
    char nome[2][20];
    unsigned int populacao[2];
    float area[2];
    float pib[2];
    float densidadep[2];
    float pibpercapita[2];
    int pontosturisticos[2];
    float super[2];

    //Função de cadastro de cartas
    for (int index = 0; index < 2; index++) {
        printf("\n*********************\nVamos cadastrar a carta %i\n*********************\n\n", (index + 1));
        printf("Digite o nome da carta %i\n", (index +1));
        fgets(nome[index], 20, stdin);
        nome[index][strcspn(nome[index], "\n")] = 0; // Remover o caractere de nova linha
        printf("Digite a sigla do Estado:\n");
        scanf("%s", sigla[index]);
        while(getchar() != '\n'); // Limpar caractere vazio
        printf("Digite o código da carta:\n");
        scanf("%s", codigo[index]);
        while(getchar() != '\n');
        printf("Digite a população:\n");
        scanf("%i", &populacao[index]);
        while(getchar() != '\n');
        printf("Digite a área da cidade em km²: \n");
        scanf("%f", &area[index]);

        printf("Digite o PIB da cidade em bilhões: \n");
        scanf("%f", &pib[index]);

        printf("Digite o número de pontos turísticos da cidade: \n");
        scanf("%i", &pontosturisticos[index]);
        while(getchar() != '\n');
        
        //Exibir informações da carta
        //Área de calculos
        densidadep[index] = (float)populacao[index] / area[index];
        pibpercapita[index] = (pib[index] * 1000000000) / (float)populacao[index]; // Converter PIB de bilhões para reais
        super[index] = populacao[index] + area[index] + pib[index] - densidadep[index] + pibpercapita[index] + pontosturisticos[index];

        //Exibir informações das cartas
        printf("\n\n----------------------------\n\nCadastrado a cidade de\n *** %s ***\n\nO código da carta é %s-%s\n", nome[index], sigla[index], codigo[index]);
        printf("População: %i habitantes\n", populacao[index]);
        printf("Área: %.2f km²\n", area[index]);
        printf("PIB: %.2f bilhões de reais\n", pib[index]);
        printf("Pontos turísticos: %i\n", pontosturisticos[index]);
        printf("Densidade populacional: %.2f hab/km²\n", densidadep[index]);
        printf("PIB per capita: %.2f\n\n", pibpercapita[index]);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\nSuper Poder: %.2f\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n", super[index]);
    }
    //Variaveis de resultados
    unsigned int resultadopopulacao, resultadoarea, resultadopib, resultadodesnidade, resultadopibcapta, resultadopontosturisticos, resultadoSuper;

    //Calculos de resultados de comparação
    printf("\n\n==========================\nHora de comparar as cartas!\n==========================\n\n");

    if (populacao[0] > populacao[1]) {
        printf("%s ganhou em População!\n", nome[0]);
        TotaldePontos[0] = 1;
    } else {
        printf("%s ganhou em População!\n", nome[1]);
        TotaldePontos[1] = 1;
    }
    if (area[0] > area[1]) {
        printf("%s ganhou em Area!\n", nome[0]);
        TotaldePontos[0] = TotaldePontos[0] + 1;
    } else {
        printf("%s ganhou em Area!\n", nome[1]);
        TotaldePontos[1] = TotaldePontos[1] + 1;
    }
    if (pib[0] > pib[1]) {
        printf("%s ganhou em PIB!\n", nome[0]);
        TotaldePontos[0] = TotaldePontos[0] + 1;
    } else {
        printf("%s ganhou em PIB!\n", nome[1]);
        TotaldePontos[1] = TotaldePontos[1] + 1;
    }
    if (pontosturisticos[0] > pontosturisticos[1]) {
        printf("%s ganhou em Ponto Turísticos!\n", nome[0]);
        TotaldePontos[0] = TotaldePontos[0] + 1;
    } else {
        printf("%s ganhou em Ponto Turísticos!\n", nome[1]);
        TotaldePontos[1] = TotaldePontos[1] + 1;
    }

    //Pontuação final
    printf("\n\nPontuação final de %s é: %i\n", nome[0], TotaldePontos[0]);
    printf("Pontuação final de %s é: %i\n\n", nome[1], TotaldePontos[1]);
    
    if (TotaldePontos[0] > TotaldePontos[1]) {
        printf("%s Venceu!", nome[0]);
    }   else if (TotaldePontos[0] == TotaldePontos[1]) {
        printf("As cartas empataram!");
    }   else {
        printf("%s venceu!", nome[1]);
    }

    return 0;
}
