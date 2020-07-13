#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char nome [80];
    printf("Digite seu nome: \n");
    fgets(nome, 80, stdin);
    
    printf("Bem-vindo(a) à disciplina de Algoritmos e Lógica de Programação II, %s. \n", nome);
    return(0);
}

