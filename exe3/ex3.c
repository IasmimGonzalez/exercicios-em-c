#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* Escreva um programa que receba quatro números inteiros, 
calcule e apresente a mé-dia aritmética entre eles. 
Observação: não esqueça de formatar o valor da média no momento de apresentá-lo,
 para que sejam impressas apenas duas casas decimais.*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int media, v1, v2, v3, v4;

    printf("Ensira o primeiro valor: \n");
    scanf("%d", &v1);
    fflush(stdin);

    printf("Ensira o segundo valor: \n");
    scanf("%d", &v2);
    fflush(stdin);

    printf("Ensira o terceiro valor: \n");
    scanf("%d", &v3);
    fflush(stdin);

    printf("Ensira o quarto valor: \n");
    scanf("%d", &v4);
    fflush(stdin);
 
    media = (v1 + v2 + v3 + v4)/4;

    printf( "A média é: %.2f\n", (float)media); 

















}