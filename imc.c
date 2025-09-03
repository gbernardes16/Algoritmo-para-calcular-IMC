#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[128] = "";
    int altura = 0, peso = 0, idade = 0;
    char op;

    do {
        printf("\na - inserir altura\nm - inserir massa corporal\ni - inserir idade\nn - inserir nome\ne - exibir informações\n0 - fechar programa\n");
        scanf(" %c", &op);
        while(getchar() != '\n');

        switch(op) {
            case 'a':
            if(altura == 0){
                printf("Insira sua altura em cm: ");
                scanf("%d", &altura);
                while(getchar() != '\n');
                break;
            } else {
                printf("\nAltura já inserida\n");
                break;
            }

            case 'm':
            if(peso == 0){
                printf("Insira sua massa corporal em gramas: ");
                scanf("%d", &peso);
                while(getchar() != '\n');
                break;
            } else {
                printf("\nMassa corporal já inserida\n");
                break;
            }
            case 'i':
            if( idade == 0){
                printf("Insira sua idade: ");
                scanf("%d", &idade);
                while(getchar() != '\n');
                break;
            } else {
                printf("\nIdade já inserida\n");
                break;
            }

            case 'n':
            if(nome[0] == '\0'){
                printf("Insira seu nome: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = 0;
                break;
            } else {
                printf("\nNome já inserido\n");
                break;
            }

            case 'e':
                if(altura == 0 || peso == 0 || idade == 0 || nome[0] == '\0') {
                    printf("\nDados incompletos\n");
                    break;
                } else {
                    float imc = (float)peso/1000 / ((altura/100.0) * (altura/100.0));
                    printf("\nNome: %s\nIdade: %d\nAltura: %d cm\nPeso: %d kg\nIMC: %.2f\n", nome, idade, altura, peso, imc);
                    if(imc <= 18.5){ 
                        printf("Abaixo do peso"); 
                    } else if(imc > 18.5 && imc < 25){ 
                        puts("Peso normal"); 
                    } else if(imc >= 25 && imc < 30){ 
                        puts("Sobrepeso"); 
                    } else if(imc >= 30 && imc < 35){ 
                        puts("Obesidade grau I"); 
                    } else if(imc >= 35 && imc < 40){ 
                        puts("Obesidade grau II"); 
                    } else { 
                        puts("Obesidade grau III"); }
                }
                return 1;

            case '0':
                printf("Fechando o programa...\n");
                break;

            default:
                printf("Opção inválida\n");
        }
    } while(op != '0');

    return 0;
}
