#include <stdio.h>

//CÓDIGO TRABALHO TEMA 3:  Super Trunfo em c: Desenvolvendo a Lógica do Jogo 


int main(){
    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    

    //Inserção dos dados da carta 1:
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


    //Inserção dos dados da cata 2:

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

    //Imprime 3 linhas em branco
    printf("\n");
    printf("\n");
    printf("\n");

    float percapita1 = pib1 / populacao1;
    float densidade1 = populacao1 / area1;

    float percapita2 = pib2 / populacao2;
    float densidade2 = populacao2 / area2;
   


    //Imprime os valores inseridos para carta 1 e calcula a Densidade Populacional e o Pib per capita
    printf("Carta 1:\n");
    printf("Estado:%s\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da Cidade:%s\n",cidade1);
    printf("População:%d habitantes\n",populacao1);
    printf("Área:%.2f km2\n",area1);
    printf("PIB:%.2f milhões de reais\n",pib1);
    printf("Número de Pontos Turisticos:%d\n",pontosTuristicos1);
    printf("Densidade Populacional:%.2f hab/km2\n", densidade1);
    printf("Pib per capita:R$%.2f/habitante\n", percapita1);

    //Imprime 3 linhas em branco
    printf("\n");
    printf("\n");
    printf("\n");


    //Imprime os valores inseridos para carta 2 e calcula a Densidade Populacional e o Pib per capita
    printf("Carta 2:\n");
    printf("Estado:%s\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da Cidade:%s\n",cidade2);
    printf("População:%d habitantes\n",populacao2);
    printf("Área:%.2f km2\n",area2);
    printf("PIB:%.2f milhões de reais\n",pib2);
    printf("Número de Pontos Turisticos:%d\n",pontosTuristicos2);
    printf("Densidade Populacional:%.2f hab/km2\n", densidade2);
    printf("Pib per capita:R$%.2f/habitante\n", percapita2);

    //Imprime 3 linhas em branco
    printf("\n");
    printf("\n");
    printf("\n");


    //A carta vencedora é a que tem o maior PIB.
    
if(pib1 > pib2){
    //Se a condição for verdadeira o print abaixo exibirá vitória da carta 1.
    printf("===CARTA 1 (%s), VENCEU POR TER O MAIOR PIB!===\n\n", cidade1);
    // Imprime os valores do PIB para comparação
    printf("**PIB carta 1:%.2f milhões de reais.**\n", pib1); 
    printf("**PIB carta 2:%.2f milhões de reais.**\n", pib2);

    //Imprime 3 linhas em branco
    printf("\n");
    printf("\n");
    printf("\n");

}else{
    //Se a condição for falsa o print abaixo exibirá vitória da carta 2.
    printf("===CARTA 2 (%s) VENCEU POR TER O MAIOR PIB!===\n\n", cidade2);
    // Imprime os valores do PIB para comparação
    printf("**PIB carta 1:%.2f milhões de reais.**\n", pib1);
    printf("**PIB carta 2:%.2f milhões de reais.**\n", pib2);

    //Imprime 3 linhas em branco
    printf("\n");
    printf("\n");
    printf("\n");
}


    return 0;
}