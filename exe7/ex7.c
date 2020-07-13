#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    int num;

    printf("Digite o valor:\n");
    scanf("%d", &num);
    fflush(stdin);

    if (num % 3 == 0){
        printf("\nO número %d é divisível por 3.\n",num);
    }else{
        printf("\nO número %d não é divisível por 3.\n", num);
    }

    if (num % 7 == 0){
        printf("\nO número %d é divisível por 7.\n",num);
    }else{
        printf("\nO número %d não é divisível por 7.\n", num);
    }
}