#include <stdio.h>

struct produto
{
    int cod;
    float valor;

};

int main ()
{
    struct produto p;

    printf("Digite o código do produto:\n");
    scanf("%i", &p.cod);

    printf("Digite o valor do produto:\n");
    scanf("%f", &p.valor);

    printf("Os dados são:\n");
    printf("Código: %i\n", p.cod);
    printf("Valor: %.2f", p.valor);


}
