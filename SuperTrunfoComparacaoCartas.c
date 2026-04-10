#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
//Variaveis do projeto
char playername[20];
int CardNumber, PlayerCard, ComputerCard, PlayerPoints, ComputerPoints, menuloop, menu, menusecond;
char CardName[4][20] = {"Porto Alegre", "São Paulo", "Rio de Janeiro", "Curitiba"};
int Populacao[4] = {1332570, 11450000, 6730000, 1800000};
float PIB[4] = {0.090 , 1.0, 1.170, 0.098};
float Area[4] = {496, 1521, 1200, 432};
int PontosTuristicos[4] = {30 ,90 , 50 , 26};
float Densidade[4] = {2690, 7528, 5556, 4078};
int TrunfoPlayer, TrunfoComputer;
int playeratribute;

void limparTela() {
        printf("\033[H\033[J"); // Limpa a tela para manter a interface amigável
}
void suspensetiming() {
        //Apenas visual para dar experiencia de suspense para o jogador
        Sleep(3000);
        printf("\nAgora vamos comparar os pontos, aguarde...\n");
        Sleep(2000);
        limparTela();
        printf("*Suspense*");
        Sleep(2000);
        limparTela();
}

int RandomCard() {
    //Seleciona um valor aleatório para as cartas do jogador e do computador
    int pickCard;
    pickCard = rand() % 4;
    return pickCard;
}
int RandomTrunfo() {
    //Seleciona um valor aleatório na propriedade de Trunfo da Sorte para as cartas do jogador e do computador
    int pickCard;
    pickCard = rand() % 1000 +1;
    return pickCard;
}

void CardInfos(){
        printf("Sua carta é:\n\n---------------------\n");
        printf("%s\n", CardName[PlayerCard]);
        printf("População: %i\n", Populacao[PlayerCard]);
        printf("PIB: R$ %.2f bilhões\n", PIB[PlayerCard]);
        printf("Área: %.0f Km²\n", Area[PlayerCard]);
        printf("Pontos turísticos: %i\n", PontosTuristicos[PlayerCard]);
        printf("Densidade demográfica: %.0f\n", Densidade[PlayerCard]);
        printf("Trunfo aleatório: %i", TrunfoPlayer);
        printf("\n---------------------\n\n");
}

void ComparationTest() {
        //Roda a comparação das cartas a partir do menu de seleção de atributo
        switch (menu){
        case 1:
            printf("Você escolheu\n>>> População <<<\n\n");
            printf("A carta do Computador é:\n>>> %s <<<\n", CardName[ComputerCard]);
            suspensetiming();
            printf("População da sua carta: %i\n", Populacao[PlayerCard]);
            printf("população da carta do Computador: %i\n", Populacao[ComputerCard]);
            printf("\nE o resultado é:\n\n");
                if (Populacao[PlayerCard] > Populacao[ComputerCard])
                {
                    printf("%s ganhou!!!\n\n", playername);
                    playeratribute +=1;
                }   else if (Populacao[PlayerCard] < Populacao[ComputerCard]) {
                    printf("O Computador ganhou!!!\n\n");
                }   else {
                    printf("Houve um empate!\n\n");
                }
            menuloop = 1;
            break;
        case 2:
            printf("Você escolheu\n>>> PIB <<<\n\n");
            printf("A carta do Computador é:\n>>> %s <<<\n", CardName[ComputerCard]);
            suspensetiming();
            printf("PIB da sua carta: R$ %.2f bilhões\n", PIB[PlayerCard]);
            printf("PIB da carta do Computador: R$ %.2f bilhões\n", PIB[ComputerCard]);
            printf("\nE o resultado é:\n\n");
                if (PIB[PlayerCard] > PIB[ComputerCard])
                {
                    printf("%s ganhou!!!\n\n", playername);
                    playeratribute +=1;
                }   else if (PIB[PlayerCard] < PIB[ComputerCard]) {
                    printf("O Computador ganhou!!!\n\n");
                }   else {
                    printf("Houve um empate!\n\n");
                }
            menuloop = 1;
            break;
        case 3:
            printf("Você escolheu\n>>> Área <<<\n\n");
            printf("A carta do Computador é:\n>>> %s <<<\n", CardName[ComputerCard]);
            suspensetiming();
            printf("Área da sua carta:%.0f Km²\n", Area[PlayerCard]);
            printf("Área da carta do Computador: %.0f Km²\n", Area[ComputerCard]);
            printf("\nE o resultado é:\n\n");
                if (Area[PlayerCard] > Area[ComputerCard])
                {
                    printf("%s ganhou!!!\n\n", playername);
                    playeratribute +=1;
                }   else if (Area[PlayerCard] < Area[ComputerCard]) {
                    printf("O Computador ganhou!!!\n\n");
                }   else {
                    printf("Houve um empate!\n\n");
                }
            menuloop = 1;
            break;
        case 4:
            printf("Você escolheu\n>>> Pontos Turísticos <<<\n\n");
            printf("A carta do Computador é:\n>>> %s <<<\n", CardName[ComputerCard]);
            suspensetiming();
            printf("Você tem %i Pontos Turísticos\n", PontosTuristicos[PlayerCard]);
            printf("O Computador tem %i Pontos Turísticos\n", PontosTuristicos[ComputerCard]);
            printf("\nE o resultado é:\n\n");
                if (PontosTuristicos[PlayerCard] > PontosTuristicos[ComputerCard])
                {
                    printf("%s ganhou!!!\n\n", playername);
                    playeratribute +=1;
                }   else if (PontosTuristicos[PlayerCard] < PontosTuristicos[ComputerCard]) {
                    printf("O Computador ganhou!!!\n\n");
                }   else {
                    printf("Houve um empate!\n\n");
                }
            menuloop = 1;
            break;
        case 5:
            printf("Você escolheu\n>>> Densidade Demográfica <<<\n\n");
            printf("A carta do Computador é:\n>>> %s <<<\n", CardName[ComputerCard]);
            suspensetiming();
            printf("Sua Densidade Demográfica é: %.0f\n", Densidade[PlayerCard]);
            printf("Densidade Demográfica do Computador é: %.0f\n", Densidade[ComputerCard]);
            printf("\nE o resultado é:\n\n");
                if (Densidade[PlayerCard] < Densidade[ComputerCard])
                {
                    printf("%s ganhou!!!\n\n", playername);
                    playeratribute +=1;
                }   else if (Densidade[PlayerCard] > Densidade[ComputerCard]) {
                    printf("O Computador ganhou!!!\n\n");
                }   else {
                    printf("Houve um empate!\n\n");
                }
            menuloop = 1;
            break;
        case 6:
            printf("Você escolheu\n>>> Trunfo da Sorte <<<\n\n");
            printf("A carta do Computador é:\n>>> %s <<<\n", CardName[ComputerCard]);
            suspensetiming();
            printf("Seu Trunfo é: %i\n", TrunfoPlayer);
            printf("Trunfo do Computador é: %i\n", TrunfoComputer);
            printf("\nE o resultado é:\n\n");
                if (TrunfoPlayer > TrunfoComputer)
                {
                    printf("%s ganhou!!!\n\n", playername);
                    playeratribute +=1;
                }   else if (TrunfoPlayer < TrunfoComputer) {
                    printf("O Computador ganhou!!!\n\n");
                }   else {
                    printf("Houve um empate!\n\n");
                }
            menuloop = 1;
            break;
        default:
            printf("Entrada inválida\n");
            break;
        }
    }

void PlayTrunfo() {
    //Roda o jogo a partir do menu de escolha do jogador entre carta aleatória, ou escolha própria
    TrunfoPlayer = RandomTrunfo();
    TrunfoComputer = RandomTrunfo();
    playeratribute = 0;
    menuloop = 2;
    while (menuloop == 2){
        CardInfos();
        printf("Escolha um atributo para comparar:\n");
        printf("1- Populacao\n");
        printf("2- PIB\n");
        printf("3- Área\n");
        printf("4- Pontos turísticos\n");
        printf("5- Densidade demográfica (Aqui ganha o menor valor)\n");
        printf("6- Trunfo da sorte!\n");
        scanf("%i", &menu);
        limparTela();
        ComparationTest();
        Sleep(3000);
        limparTela();
        //Escolha do segundo atribudo para ser comparado
        CardInfos();
        printf("Escolha o segundo atributo para comparação:\n");
        printf("1- Populacao\n");
        printf("2- PIB\n");
        printf("3- Área\n");
        printf("4- Pontos turísticos\n");
        printf("5- Densidade demográfica (Aqui ganha o menor valor)\n");
        printf("6- Trunfo da sorte!\n");
        scanf("%i", &menusecond);
        while (menusecond == menu){
            printf("Não pode escolher o mesmo atributo!\nEscolha outro:\n");
            scanf("%i", &menusecond);
        }
        menu = menusecond;
        limparTela();
        ComparationTest();
        Sleep(3000);
        if (playeratribute = 2){
            printf("O jogador ganhou as duas rodadas!\n\n");
            PlayerPoints += 1;
        } else if (playeratribute = 1) {
            printf("O jogador e o Computador empataram!\n\n");
        } else {
            printf("O Computador ganhou!\n\n");
            ComputerPoints += 1;
        }
    }

}

int main() {
    SetConsoleOutputCP(65001); // Definição certa para os caracteres em Windowns
    //Declaração das variáveis

    menuloop = 1;
    //Placar de pontos
    PlayerPoints = 0;
    ComputerPoints = 0;

    //Apresentação do jogo - SplashScreen
    limparTela(); 
    printf("----------------------------------\n");
    printf("|                                |\n");
    printf("| Bem-vindo ao jogo Super Trunfo |\n");
    printf("|                                |\n");
    printf("| ***Criado por Patrick Andre*** |\n");
    printf("|                                |\n");
    printf("----------------------------------\n\n");
    Sleep(2000);
    limparTela();

    //Nome do jogador
    printf(">>> Digite seu nome <<<\n");
    fgets(playername, 20, stdin);
    playername[strcspn(playername, "\n")] = 0; // Remover o caractere de nova linha
    limparTela();
    printf("\n*** Bem-vindo, %s! Espero que se divirta! ***\n\n", playername);
    while (menuloop ==1) {
        printf("Escolha uma opção:\n\n");
        printf("1 - Jogar com carta aleatória\n");
        printf("2 - Escolher sua carta\n");
        printf("3 - Ver pontuação\n");
        printf("4 - Sair\n");
        printf("\nDigite uma opção: ");
        scanf("%i", &menu);
        ComputerCard = RandomCard(); // Seleciona a carta do Computador
        limparTela();

        switch (menu)
        {
        case 1:
            PlayerCard = RandomCard(); // Seleciona a carta do Player
            //Evita que o computador e o Player tenham a mesma carta
            while (ComputerCard == PlayerCard) {
                ComputerCard = RandomCard();
            }
            PlayTrunfo();
            break;    
        case 2:
            printf("Escolha uma das carta abaixo:\n");
            printf("1 - Porto Alegre\n");
            printf("2 - São Paulo\n");
            printf("3 - Rio de Janeiro\n");
            printf("4 - Curitiba\n");
            scanf("%i", &PlayerCard);
            PlayerCard = PlayerCard - 1;
            while (ComputerCard == PlayerCard) {
                ComputerCard = RandomCard();
            }
            limparTela();
            PlayTrunfo();
            break;
        case 3:
            printf("----------------------------------\n\n");
            printf("Pontuação de %s: %i\n", playername, PlayerPoints);
            printf("Pontuação do Computador: %i\n", ComputerPoints);
            printf("\n----------------------------------\n\n");
            break;
        case 4:
            menuloop = 0;
            break;
        
        default:
            printf("Opção Inválida!\n");
            break;
        }
        

    }
    printf("Obrigado por Jogar!");
    Sleep(2000);
    return 0;
}
