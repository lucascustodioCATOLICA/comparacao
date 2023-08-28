#include <stdio.h>

int main () {
    int idade;
    int salario;
    float altura;
    int peso;

    printf("Digite sua idade: ");
    scanf("%D", &idade);

    if(idade < 18) {
        printf("nao eh de maior \n");
    } else {
        printf("eh de maior \n");
    }

    printf("Digite seu salario: ");
    scanf("%D", &salario);

    if(salario < 1200) {
        printf("eh menor que o minimo \n");
    } else {
        printf("eh de maior ou igual ao salario minimo \n");
    }

    printf("Digite seu altura: ");
    scanf("%f", &altura);

    if(altura < 1.8) {
        printf("eh menor que 1.8 \n");
    } else {
        printf("eh maior ou igual que 1.8 \n");
    }

    printf("Digite seu peso: ");
    scanf("%D", &peso);

    if(peso < 60) {
        printf("eh menor que o 60 kilos \n");
    } else {
        printf("eh maior ou igual que o 60 kilos \n");
    }

    return 0;
}