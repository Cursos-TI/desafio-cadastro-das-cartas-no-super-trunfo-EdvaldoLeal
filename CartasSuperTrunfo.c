#include <stdio.h>
 int main(){

    //TRABALHO SUPER TRUNFO - NÍVEL AVENTUREIRO

    //variáveis da carta 1 e carta 2
    char estado1[20],estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    //Inserção dos valores carta 1

    printf("Digite o Estado:");
    scanf("%s", &estado1);

    printf("Digite o código da carta 1:");
    scanf("%s", &codigo1);

    printf("Digite a Cidade:");
    scanf("%s", &cidade1);

    printf("Digite a população:");
    scanf("%d", &populacao1);

    printf("Digite a Área:");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d", &pontosTuristicos1);


        //Inserção dos valores cata 2

    printf("Digite o Estado:");
    scanf("%s", &estado2);

    
    printf("Digite o código da carta 2:");
    scanf("%s", &codigo2);

    printf("Digite a Cidade:");
    scanf("%s", &cidade2);

    printf("Digite a população:");
    scanf("%d", &populacao2);

    printf("Digite a Área:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:");
    scanf("%d", &pontosTuristicos2);


    float percapita1 = pib1 / populacao1;
    float densidade1 = populacao1 / area1;

    float percapita2 = pib2 / populacao2;
    float densidade2 = populacao2 / area2;


    //Espaçamento entre linhas
    printf("\n");
    printf("\n");
    printf("\n");
    
    //saídas da carta 1
    printf("Carta 1:\n");
    printf("Estado:%s\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da Cidade:%s\n",cidade1);
    printf("População:%d habitantes\n",populacao1);
    printf("Área:%.2f km2\n",area1);
    printf("PIB:%.2f bilhões de reais\n",pib1);
    printf("Número de Pontos Turisticos:%d\n",pontosTuristicos1);
    printf("Densidade Populacional:%.2f hab/km2\n", densidade1);
    printf("PIB per Capita:%.2f reais\n", percapita1);


    //Espaçamento entre linhas
    printf("\n");
    printf("\n");
    printf("\n");

    //Saídas da carta 2
    printf("Carta 2:\n");
    printf("Estado:%s\n",estado2);
    printf("Código:%s\n",codigo2);
    printf("Nome da Cidade:%s\n",cidade2);
    printf("População:%d habitantes\n", populacao2);
    printf("Área:%.2f km2\n", area2);
    printf("PIB:%.2f bilhões de reais\n",pib2);
    printf("Número de Pontos Turisticos:%d\n",pontosTuristicos2);
    printf("Densidade Populacional:%.2f hab/km2\n", densidade2);
    printf("PIB per Capita:%.2f reais\n", percapita2);

    //Espaçamento entre linhas
    printf("\n");
    printf("\n");
    printf("\n");


  
    
    

    return 0;
}


