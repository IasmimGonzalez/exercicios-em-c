/* Escreva um programa que leia um número positivo inteiro e apresente o quadrado e
 a raiz quadrada deste número. */
#include <stdio.h>
#include <math.h>
#include <stdint.h>
int main(){

    int valor;
    int quadrado;
    int raiz;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &valor);


    quadrado = pow(valor,2);
    printf("O valor elevado ao quadrado é:%d\n", quadrado);

    raiz = sqrt(valor);
    printf("A raiz quadrada do valor é:%d\n", raiz);

    return(0);

}
