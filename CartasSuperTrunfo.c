#include <stdio.h>
#include <string.h>

int main() {
    printf("\nCarta 01:\n");
    char codigoCarta01[10];
    char estado01[30];
    char nomeCidade01[30];
    float area01, pib01;
    int populacao01, numeroPontosTuristicos01;

    printf("Digite o Código da Carta: ");
    scanf("%9s", codigoCarta01); 

    printf("Digite o Estado: ");
    scanf("%29s", estado01); 

    printf("Digite o Nome da Cidade: ");
    getchar(); 
    fgets(nomeCidade01, 30, stdin);
    nomeCidade01[strcspn(nomeCidade01, "\n")] = 0; 

    printf("Digite a Área da cidade: ");
    scanf("%f", &area01);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib01);

    printf("Digite a População: ");
    scanf("%d", &populacao01);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numeroPontosTuristicos01);

    printf("\nCarta 02:\n");
    char codigoCarta02[10];
    char estado02[30];
    char nomeCidade02[30];
    float area02, pib02;
    int populacao02, numeroPontosTuristicos02;

    printf("Digite o Código da Carta: ");
    scanf("%9s", codigoCarta02); 

    printf("Digite o Estado: ");
    scanf("%29s", estado02); 

    printf("Digite o Nome da Cidade: ");
    getchar(); 
    fgets(nomeCidade02, 30, stdin);
    nomeCidade02[strcspn(nomeCidade02, "\n")] = 0;

    printf("Digite a Área da cidade: ");
    scanf("%f", &area02);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib02);

    printf("Digite a População: ");
    scanf("%d", &populacao02);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numeroPontosTuristicos02);

    // Exibindo os dados coletados
    printf("\nCarta 01:\n");
    printf("\nDados cadastrados:\n");
    printf("Código da Carta: %s\n", codigoCarta01);
    printf("Estado: %s\n", estado01);
    printf("Nome da Cidade: %s\n", nomeCidade01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f\n", pib01);
    printf("População: %d habitantes\n", populacao01);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos01);

    printf("\nCarta 02:\n");
    printf("\nDados cadastrados:\n");
    printf("Código da Carta: %s\n", codigoCarta02);
    printf("Estado: %s\n", estado02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f\n", pib02);
    printf("População: %d habitantes\n", populacao02);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos02);

    

    return 0;
}
