#include <stdio.h>
int main (){

    // Declaração de variavel.
    int faltas;
    int horas;
    int filhos;
    int idadeF;
    float bonus;
    float salario;
    float imposto;
    char name [10];
    // intro
    printf("***Ola seja bem vindo***\n");

    //Interação com o user.
    printf("Qual e o seu nome: ");
    fflush(stdin);
    gets(name);


    printf("OK, sr.%s Pode me dizer o seu valor de salario?: ",name);
    scanf("%f",&salario);

    printf("Perfeito, otimo salario por sinal.\n");
    printf("Sr.%s, qual e o valor da suas vendas totais desse mes?: ",name);
    scanf("%f",&bonus);

    printf("Certo, o sr.%s teve alguma falta?: ",name);
    scanf("%d",&faltas);

    printf("Tudo bem sr.%s, quantas horas de trabalho comunitario foi feito?\nSe não tiver feito nenhuma coloque zero por favor.\nHoras: ",name);
    scanf("%d",&horas);

    printf("Certo quase acabando, quantos filhos o sr.%s tem?\nSe não tiver nenhum por favor informe zero.\nFilhos: ",name);
    scanf("%d",&filhos);
}