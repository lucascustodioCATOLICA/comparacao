#include <stdio.h>

int main() {
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if(nota >= 7) {
        printf("APROVADO");
    } else if(nota >= 4) {
        printf("RECUPERACAO");
    } else {
        printf("REPROVADO");
    }
}