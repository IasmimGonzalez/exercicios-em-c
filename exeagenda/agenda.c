#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

struct contact{

    char name[50], fone[13], email[50];
    int cod;
};

int main(){
    
    setlocale(LC_ALL, "Portuguese");
    int op, cont = 0, i;
    struct contact person[5];

    do{
        printf("Digite 1: para enserir novo cadastro.\n");        
        printf("\nDigite 2: mostrar cadastros já realizados.\n");    
        printf ("\nDigite 0: para encerrar o programa.\n");
        scanf("%d", &op);
        setbuf(stdin, NULL);

        switch(op){

            case 1: if(cont <= 4 ){
                printf("\nCadastro de contato na agenda:\n");
                printf("\nCódigo: %d\n",cont);

                printf("\nInforme o nome do contato:\n");
                fgets(person[cont].name, 50, stdin);
                setbuf(stdin, NULL);

                printf("Informe o telefone do contato:\n");
                fgets(person[cont].fone, 13, stdin);      
                setbuf(stdin, NULL);

                printf("Informe o email do contato:\n");
                fgets(person[cont].email, 50, stdin);
                setbuf(stdin, NULL);

                printf("\n");

                cont++;
                
            }else{
                printf("Sua agenda esta cheia!\n");
            }
            break;

            
            case 2: if(cont == 0){
                printf("Não há contatos cadastrados!\n");
            }else{
                printf("Seus contatos:\n");

                for(i=0; i<cont; i++){

                    printf("Código do contato: %d\n", i);
                    printf("Nome: %s", person[i].email);
                    printf("Telefone: %s", person[i].fone);
                    printf("E-mail: %s\n", person[i].email);
                }
            }
            break;


            case 0: printf("\nPrograma encerrado.\n");
            break;

            default: printf("\nErro: não foi possivel encontrar a opção digitada, tente novamente!\n");
    }
    }while(op != 0);
    return(0);
}