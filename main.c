#include <stdio.h>
#include <windows.h>

char espaco(){
    return printf("\n--------------------------------------\n\n");
}
void sleep(int segundos){
    Sleep(1000 * segundos);
}

int main(){
    int realizarOperacao;
    int inicializacao, condicao, incrementoOuDecremento; // Estrutura do FOR
    float numero, valorEspecifico;

    espaco();

    printf("Bem vindo ao programa de explicacao de estruturas de repeticao\n");

    while(TRUE){
        printf("Escolha qual operacao deseja realizar \n");
        printf("1. For    2. While\n");
        printf("Sua escolha: ");
        scanf("%d", &realizarOperacao);

        sleep(2);
        espaco();

        switch(realizarOperacao){
            case 1:
                printf("O for e uma estrutura de repeticao, geralmente utilizada quando sabemos a quantidade de vezes que o bloco de codigo sera repetido \n");

                sleep(1.5);

                espaco();
                printf("Estrutura: \n    for(inicializacao; condicao; incremento ou decremento){\n");
                printf("        /bloco de codigo/ \n");
                printf("    } \n");
                espaco();

                printf("Vamos fazer um contador com o for \n");

                printf("Digite a inicializacao do for: ");
                scanf("%d", &inicializacao);

                printf("Digite a condicao (o limite): ");
                scanf("%d", &condicao);

                printf("Digite 1 para incremento ou digite 2 para decremento: ");
                scanf("%d", &incrementoOuDecremento);

                sleep(2);
                espaco();

                if (incrementoOuDecremento == 1){
                    for (inicializacao; inicializacao <= condicao; inicializacao++){
                        printf("O valor de inicializacao e: %d \n", inicializacao);
                        sleep(0.5);
                    }
                } else if (incrementoOuDecremento == 2){
                    for (inicializacao; inicializacao >= condicao; inicializacao--){
                        printf("O valor de inicializacao e: %d \n", inicializacao);
                        sleep(0.5);
                    }
                } else {
                    printf("Opcao invalida, comece tudo de novo!");
                }

                sleep(1);
                espaco();

            break;
            case 2:
                printf("O while e uma estrutura de repeticao, que geralmente e utilizada quando nao sabemos a quantidade de vezes que o bloco de codigo sera repetido");

                sleep(1.5);
                
                espaco();
                printf("Estrutura: \n    while(condicao){\n");
                printf("        /bloco de codigo/ \n");
                printf("    } \n");
                espaco();

                sleep(1);

                printf("Vamos fazer uma insistencia ao usuario ate que ele digite um valor especifico \n");
                printf("Ou seja, o bloco de codigo ficara repetindo ate ele digitar o mesmo valor \n");

                sleep(1);
                espaco();

                printf("Digite o valor especifico: ");
                scanf("%f", &valorEspecifico);

                printf("Digite um numero qualquer: ");
                scanf("%f", &numero);

                espaco();

                while(valorEspecifico != numero){
                    printf("Digite um numero que seja igual ao valor especifico: ");
                    scanf("%f", &numero);

                    espaco();
                }
                
                printf("Parabens, voce digitou um numero igual \n");

                sleep(1);
                espaco();

                printf("A diferenca do 'while' para o 'do... while' e que: \n\n");
                printf("O 'do... while' primeiro ira executar o codigo e depois verificar a condicao \n");
                printf("Enquanto o 'while' primeiro ira verificar a condicao e depois executar o codigo \n");

                sleep(1);
                espaco();
            break;
            default:
                printf("Opção inválida \n");
                break;
        }
    }
    return 0;
}