#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    float populacao; // população da cidade
    float area; //area em km²
    float pib; //PIB percapita 
    int turisticos; // pontos turidticos da cidade 
   
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("***Insira os daods da sua carta***\n");//titulo 
    printf("A01   Brasil \n");
    printf("Cidade: São paulo\n");


    printf("Entre com a pupulção da cidade: ");//entrada da população da cidade 
    scanf("%f", &populacao);
    
    printf("Entre com a àrea da cidade: ");//entrada do tamanho da cidade km²
    scanf("%f", &area);

    printf("Entre com o PIB da cidade: ");//entrada do PIB em R$
    scanf("%f", &pib);
    
    printf("Entre com os pontos turisticos da cidade: ");// entrada dos pontos turisticos
    scanf("%d", &turisticos);

    float soma = populacao + area + pib;



    printf("População: %f\n", populacao);
    printf("Àrea: %f Km²\n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);
    printf("Super poder: %f\n", soma);
    //printf("Entre como o nome da ")
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
