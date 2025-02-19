/*Biblioteca padrao de entrada e saida*/
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Eric Douglas Koga

/*Criei uma funcao para carta A com todas as variaveis e exibicao na tela*/
void carta1(){
    char estado = 'A';
    char codigo[] = "A01";
    char nomeCidade[] = "Sao Paulo";
    double populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int pontosTuristicos = 50;

    printf("Carta A\n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("Numero de habitantes: %f \n", populacao);
    printf("Area em Km: %.2f km² \n", area);
    printf("Numero de pontos turisticos: %d \n", pontosTuristicos);
}

/*Criei uma funcao para carta B com todas as variaveis e exibicao na tela*/
void carta2(){
    char estado = 'B';
    char codigo[] = "B02";
    char nomeCidade[] = "Rio de Janeiro";
    double populacao = 6748000;
    float area = 1200.25;
    float pib = 300.50;
    int pontosTuristicos = 30;

    printf("Carta B\n");
    printf("Estado: %c \n", estado);
    printf("Codigo: %s \n", codigo);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("Numero de habitantes: %f \n", populacao);
    printf("Area em Km: %.2f km² \n", area);
    printf("Numero de pontos turisticos: %d \n", pontosTuristicos);
}

int main(){
    /* Exibindo as informações chamando as funções na main principal*/
    printf("Super trunfo das cidades \n");
    printf("\t===========================\n");
    carta1();
    printf("\t===========================\n");
    carta2();
    printf("\t===========================\n");
    return 0;
}