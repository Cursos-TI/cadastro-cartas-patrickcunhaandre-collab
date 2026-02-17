#include <stdio.h>
#include <string.h>

int main() {

    //Declaração das variáveis
    char playername[20];
    char letra1, letra2;
    char codigo1[2], codigo2[2];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    //Apresentação do jogo - SplashScreen
    printf("----------------------------------\n|                                |\n| Bem-vindo ao jogo Super Trunfo |\n|                                |\n| ***Criado por Patrick Andre*** |\n|                                |\n----------------------------------\n\n");
    
    //Nome do jogador
    printf("Qual o seu nome? \n");
    fgets(playername, 20, stdin);
    playername[strcspn(playername, "\n")] = 0; // Remover o caractere de nova linha
    printf("\n*** Bem-vindo, %s! Espero que se divirta! ***\n\n", playername);

    //Cadastro da primeira carta
    printf("Vamos cadastrar a primeira carta\n\n");
    printf("Digite uma letra para a primeira carta (A-Z): \n");
    scanf("%c", &letra1);

    printf("Digite o código da primeira carta (2 caracteres): \n");
    scanf("%s", codigo1);

    printf("Digite o nome da primeira cidade: \n");
    while(getchar() != '\n');
    fgets(nome1, 20, stdin);

    printf("Digite a população: \n");
    scanf("%i", &populacao1);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontosturisticos1);

    printf("\n\n----------------------------\n\nCadastrado a cidade de %s\nO código da carta é %c%s\n", nome1, letra1, codigo1);
    printf("Atualmente tem a população de %i habitantes\n", populacao1);
    printf("Tem uma área de %.2f km²\n", area1);
    printf("Tem um PIB de %.2f\n", pib1);
    printf("Tem um total de %i pontos turísticos\n\n----------------------------\n\n", pontosturisticos1);

    //Cadastro da segunda carta

    printf("Vamos cadastrar a segunda carta\n\n");
    printf("Digite uma letra para a segunda carta (A-Z): \n");
    scanf(" %c", &letra2);

    printf("Digite o código da segunda carta (2 caracteres): \n");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda cidade: \n");
    while(getchar() != '\n');
    fgets(nome2, 20, stdin);

    printf("Digite a população: \n");
    scanf("%i", &populacao2);

    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%i", &pontosturisticos2);

    printf("\n\n----------------------------\n\nCadastrado a cidade de %s\nO código da carta é %c%s\n", nome2, letra2, codigo2);
    printf("Atualmente tem a população de %i habitantes\n", populacao2);
    printf("Tem uma área de %.2f km²\n", area2);
    printf("Tem um PIB de %.2f\n", pib2);
    printf("Tem um total de %i pontos turísticos\n\n----------------------------\n\n", pontosturisticos2);


    return 0;
}