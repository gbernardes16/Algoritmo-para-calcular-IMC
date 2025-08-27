#include <stdio.h>

int main(){
    char nome[128];
    int altura;
    int peso;
    int idade;
    puts("Digite seu nome: ");
    fflush(stdin);
    fgets(nome, 128, stdin);
    puts("Digite sua altura (em cm): ");
    fflush(stdin);
    scanf("%d", &altura);
    puts("Digite seu peso (em gramas): ");
    fflush(stdin);
    scanf("%d", &peso);
    puts("Digite sua idade: ");
    fflush(stdin);
    scanf("%d", &idade);
    float imc = (float)peso/1000 / ((float)altura/100 * (float)altura/100);
    printf("\n Nome: %s\n Idade: %d anos\n  IMC: %.2f\n", nome, idade, imc);
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
        puts("Obesidade grau III");
    }


}