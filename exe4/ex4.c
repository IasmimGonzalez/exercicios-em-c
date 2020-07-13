/*Escreva um programa que, dado o raio de um círculo, calcule sua área
e o perímetro. A área é a superfície do objeto,  dada por At2π, e o 
perímetro é a medida do contorno do objeto dado por Pr22π.
 Dica: utilize as funções intrínsecas vistas nesta unidade. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define pi 3.141593
int main(){

    float raio;

    printf("Digite o valor do raio: \n");
    scanf("%f", &raio);
    printf("\n O valor da Área é: %.2f", pi * (raio * raio));
    printf("\n O valor do perímetro é> %.2f", 2 * pi * (raio * raio));
    return(0);
    

}
