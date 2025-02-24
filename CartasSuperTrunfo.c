#include <stdio.h>

int main() {
    int Carta;
    char Estado;
    char Codc[10];
    char Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Pontos;
    
    printf("Digite seu estado: \n");
    scanf(" %c", &Estado);

    printf("Digite seu codico: \n");
    scanf("%s", Codc); 

    printf("Digite sua cidade: \n");
    scanf("%s", Cidade); 

    printf("Digite o numero de populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite sua area: \n");
    scanf("%f", &Area);

    printf("Digite seu PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontos); 

    printf("Carta:01\n");
    printf("Estado: %c\n", Estado);
    printf("Codico: %s \n", Codc);
    printf("Cidade: %s \n", Cidade);
    printf("Populacao: %d \n", Populacao);
    printf("Area: %f km²\n", Area);
    printf("PIB: %f bilhoes de reais\n", PIB);
    printf("Pontos turisticos: %d \n", Pontos); 

    // Fim da primeira carta

    char Carta2;
    char Estado2;
    char Codc2[10];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float Pib2;
    int Pontos2;

    printf("Digite seu estado: \n");
    scanf(" %c", &Estado2);

    printf("Digite seu codico: \n");
    scanf("%s", Codc2);

    printf("Digite sua cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite sua Populacao: \n");
    scanf("%d", &Populacao2);

    printf("Digite sua Area: \n");
    scanf("%f", &Area2);

    printf("Digite seu pib: \n");
    scanf("%f", &Pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &Pontos2); 

    printf("Carta:2 \n");
    printf("Estado: %c \n", Estado2);
    printf("Codico: %s \n", Codc2);
    printf("Cidade: %s \n", Cidade2);
    printf("Populacao: %d \n", Populacao2);
    printf("Area: %f km²\n", Area2);
    printf("PIB: %f bilhoes de reais \n", Pib2);
    printf("Pontos turisticos: %d \n", Pontos2);

    return 0;
}


