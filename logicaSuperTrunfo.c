#include <stdio.h>

int main() {
//Variáveis para armazenamento das duas cartas:
    char estados[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int escolhaEstado1, escolhaEstado2; 
    int cidadeNum1, cidadeNum2;
    char codigo1[4], codigo2[4];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2; //calculando a densidade populacional    

//Entrada de dados da primeira carta:
    printf("Escolha um estado para a primeira cidade (1-8): ");
    scanf("%d", &escolhaEstado1);
    printf("Escolha um número para a primeira cidade (1-4): ");
    scanf("%d", &cidadeNum1);

//Gerando o código da carta de forma automática e cadastrando primeira carta:
    sprintf(codigo1, "%c%02d", estados[escolhaEstado1 - 1], cidadeNum1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

//Entrada de dados da segunda carta:
    printf("Escolha um estado para a segunda cidade (1-8): ");
    scanf("%d", &escolhaEstado2);
    printf("Escolha um número para a segunda cidade (1-4): ");
    scanf("%d", &cidadeNum2);

//Gerando o código da carta de forma automática e cadastrando segunda carta:
    sprintf(codigo2, "%c%02d", estados[escolhaEstado2 - 1], cidadeNum2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

//Calculando a densidade populacional:
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

//Exibindo os dados coletados:
    printf("\nCarta 1: \n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

//Menu interativo para comparação:
    int opcao;
    printf("\nEscolha um critério para comparação das cidades: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("Opção: ");
    scanf("%d", &opcao);

//Comparando de acordo com a escolha do usuário:
switch (opcao) {
    case 1:
        printf("\nComparação por População:\n");
        if (populacao1 > populacao2) {
            printf("A cidade vencedora é: %s (Maior população)\n", codigo1);
        } else if (populacao2 > populacao1) {
            printf("A cidade vencedora é: %s (Maior população)\n", codigo2);
        } else {
            printf("As cidades têm a mesma população!\n");
        }
        break;

    case 2:
        printf("\nComparação por Área:\n");
        if (area1 > area2) {
            printf("A cidade vencedora é: %s (Maior área)\n", codigo1);
        } else if (area2 > area1) {
            printf("A cidade vencedora é: %s (Maior área)\n", codigo2);
        } else {
            printf("As cidades têm a mesma área!\n");
        }
        break;

    case 3:
        printf("\nComparação por PIB:\n");
        if (pib1 > pib2) {
            printf("A cidade vencedora é: %s (Maior PIB)\n", codigo1);
        } else if (pib2 > pib1) {
            printf("A cidade vencedora é: %s (Maior PIB)\n", codigo2);
        } else {
            printf("As cidades têm o mesmo PIB!\n");
        }
        break;

    case 4:
        printf("\nComparação por Número de Pontos Turísticos:\n");
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("A cidade vencedora é: %s (Mais pontos turísticos)\n", codigo1);
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("A cidade vencedora é: %s (Mais pontos turísticos)\n", codigo2);
        } else {
            printf("As cidades têm o mesmo número de pontos turísticos!\n");
        }
        break;

    case 5:
        printf("\nComparação por Densidade Populacional (Menor vence):\n");
        if (densidade1 < densidade2) {
            printf("A cidade vencedora é: %s (Menor densidade populacional)\n", codigo1);
        } else if (densidade2 < densidade1) {
            printf("A cidade vencedora é: %s (Menor densidade populacional)\n", codigo2);
        } else {
            printf("As cidades têm a mesma densidade populacional!\n");
        }
        break;

    default:
        printf("\nOpção inválida! Escolha um número entre 1 e 5.\n");
}

    return 0;
}