#include <stdio.h>

int main() {
    char estado1 = 'B';
    char codigo1 [5] = "B01";
    char cidade1[50] = "Teresina";
    int populacao1 = 866300;
    float area1 = 1392;
    float pib1 = 23895000;
    int pontos_turisticos1 = 50;

    printf("estado: %c\n", estado1);
    printf("codigo:%s\n", codigo1);
    printf("cidade:%s\n", cidade1);
    printf("populacao:%d\n", populacao1);
    printf("area:%.2fkm²\n", area1);
    printf("pib:%f\n", pib1);
    printf("pontos turisticos:%d\n", pontos_turisticos1);
    printf("\n");

    char estado2 = 'D';
    char codigo2 [5]= "D02";
    char cidade2 [50]= "Ceará";
    int populacao2 = 2700000;
    float area2 = 313;
    float pib2 = 73000000;
    int pontos_turisticos2 = 45;

    printf("estado: %c\n", estado2);
    printf("codigo:%s\n", codigo2);
    printf("cidade:%s\n", cidade2);
    printf("populacao:%d\n", populacao2);
    printf("area:%.2fkm²\n", area2);
    printf("pib:%f\n", pib2);
    printf("pontos turisticos:%d\n", pontos_turisticos2);

    printf("\n");
    return 0;

}