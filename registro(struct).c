#include <stdio.h>

struct produto
{
    int cod;
    float valor;

};

int main ()
{
    struct produto p;

    printf("Digite o c�digo do produto:\n");
    scanf("%i", &p.cod);

    printf("Digite o valor do produto:\n");
    scanf("%f", &p.valor);

    printf("Os dados s�o:\n");
    printf("C�digo: %i\n", p.cod);
    printf("Valor: %.2f", p.valor);


}
