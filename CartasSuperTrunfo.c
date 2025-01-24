#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int cidade; // dados da cidade 
    char nome; // nome da cidade 
    int populacao; // população da cidade
    int area; //area em km²
    int pib; //PIB percapita 
    int turisticos; // pontos turidticos da cidade 
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("***Insira os daods da sua carta***\n");//titulo 

    printf("Entre com o da cidade:\n");//entrada do nome da cidade 
    scanf("%s", &cidade);

    printf("Entre com a pupulção da cidade:\n");
    scanf("%d", &populacao);
    
    printf("Entre com a àrea da cidade:\n");
    scanf("%d", &area);

    printf("Entre com o PIB da cidade:\n");
    scanf("%d", &pib);
    
    printf(" Entre com os pontos turisticos da cidade:\n");
    scanf("%d", &turisticos);
    //printf("Entre como o nome da ")
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
