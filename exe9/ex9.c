#include <stdio.h>
#include <stdlib.h>

int main(){
    int cargo;
    float salario, aumento, salario_final;


    printf("\nEnsira o código do cargo:\n");
    scanf("%d", &cargo);
    fflush(stdin);

    printf("Digite o salário do cargo:\n");
    scanf("%f", &salario);
    fflush(stdin);

    switch (cargo){

    case 1: aumento = salario * 0.4;
    salario_final = aumento + salario; 
    printf("O Servente teve aumento de R$%.2f, e recebe agora R$ %.2f.\n", aumento, salario_final);
    break;
    case 2: aumento = salario * 0.35;
    salario_final = aumento + salario;
    printf("\nO Pedreiro teve aumento de R$%.2f, e recebe agora R$ %.2f.\n", aumento, salario_final);
    break;
    case 3: aumento = salario * 0.20;
    salario_final = aumento + salario;
    printf("\nO Mestre de Obras teve aumento de R$%.2f, e recebe agora R$ %.2f.\n", aumento, salario_final);
    break;
    case 4: aumento = salario * 0.10;
    salario_final = aumento + salario;
    printf("O Técnico de Segurança teve aumento de R$%.2f, e recebe agora R$ %.2f.\n", aumento, salario_final);
    break;
    } return(0);
}
