/*É comum, em uma aplicação, ter de determinar quais números são 
o maior ou o menor,  dentre  todos  os  valores  de  um  conjunto 
de  dados.  Assim  sendo,  escreva  um programa que receba cinco
 úmeros inteiros e apresente o maior e o menor. */

#include <stdio.h>

int main()
{
    int num, maior, menor;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &num);
    fflush(stdin);
    maior = num;
    menor = num;

    printf("Digite o segundo valor:\n");
    scanf("%d", &num);
    fflush(stdin);
    if (num < menor)
    {
        menor = num;
    }
    if (num > maior)
    {
        maior = num;
    }

    printf("Digite o terceiro valor:\n");
    scanf("%d", &num);
    fflush(stdin);
    if (num < menor)
    {
        menor = num;
    }
    if (num > maior)
    {
        maior = num;
    }
    printf("Digite o quarto valor:\n");
    scanf("%d", &num);
    fflush(stdin);
    if (num < menor)
    {
        menor = num;
    }
    if (num > maior)
    {
        maior = num;
    }
    printf("Digite o quinto valor:\n");
    scanf("%d", &num);
    fflush(stdin);
    if (num < menor)
    {
        menor = num;
    }
    if (num > maior)
    {
        maior = num;
    }
    printf("\n O menor valor é: %d.\n", menor);
    printf("\n O maior valor é: %d.\n", maior);
}