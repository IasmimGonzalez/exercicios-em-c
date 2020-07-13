/*Identifique os erros sintático e semânticos no programa a seguir, 
cujo objetivo é ler dois números e apresentar a soma entre os dois. */
#include <stdio.h>
 
 
int main(){   
    
    int num1, num2, soma;  
    
    printf("\nDigite o primeiro número:");    
    scanf("%d", &num1);   

    printf("\nDigite o segundo número:");     
    scanf("%d", &num2);   
  
    soma= num1 + num2; 

    printf ("\n A soma dos números é : %d ", soma);   
    return (0);
    
}