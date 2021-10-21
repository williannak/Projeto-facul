#include <stdio.h>
int main (){

    // Declaração de variavel.
    char name [10];
    int faltasR, faltas, horas, filhos, filhosN, bonus, a;
    float salario, imposto, imposto1, imposto2, imposto3, real, bruto;
    imposto1 = 2460.00;    
    imposto2 = 5500.00;
    imposto3 = 10750.00;

    // intro
    printf("***Ola seja bem vindo***\n");

    //Interação com o user.
    printf("Qual e o seu nome: ");
    fflush(stdin);
    gets(name);

    printf("Ok, sr.%s pode me dizer o valor do seu salario?: ",name);
    scanf("%f",&salario);
    bruto = salario;
   
    printf("\nPerfeito, otimo salario por sinal.\n");

    printf("\nSr.%s, conseguiu atigir a meta ?\n[1]Sim [2]Não\nResposta: ",name);
    scanf("%d",&bonus);
    if(bonus == 1){
        real = salario + (salario * 0.15);
        bruto = bruto + (salario *0.15);
        printf("\nParabéns você atingiu a meta!!\n");
    }
    else{
        printf("\n Que pena mas não desista =)\n");
    } 

    printf("\nCerto,sr.%s teve alguma falta? \n[1]Sim [2]Não\nResposta: ",name);
    scanf("%d",&faltasR);
    if (faltasR == 1){
        printf("Quantos dias você falto?: ");
        scanf("%d",&faltas);
            if(faltas > 5){
                real = real - (real * 0.10);
            }
            else if (faltas > 0 && faltas <= 5){
                real = real -(real * 0.025);
            }
            else{
                printf("\nERRO NO NUMERO DE FALTAS\n");
             }
    }
    else{
        printf("\nMuito bem, continue assim!!\n");
    }

    printf("\nDando sequencia sr.%s, Foi realizado trabalho voluntario?\n[1]Sim [2]Não.\nResposta: ",name);
    scanf("%d",&a);
        if(a == 1){
            printf("Quantas horsa foi realizadas?\nHoras: ");
            scanf("%d",&horas);
                if (horas > 10){
                    real = real + (horas * 10.00);
                    bruto = bruto + (horas * 10.00);
                }
                else if (horas <= 10 && horas > 0){
                    real = real + (horas * 8.00);
                    bruto = bruto + (horas *8.00);
                }
                else{
                    printf("\nDessa vez você não fez horas de trabalho voluntário");
                }
        }
        else{
            printf("\n");
        }
    printf("\nCerto quase acabando, sr.%s teria filhos?\n[1]sim [2]Não.\nResposta: ",name);
    scanf("%d",&filhosN);
    if(filhosN == 1){
        int n;
        printf("\nQuantos filhos você teria: ");
        scanf("%d",&filhos);
        printf("\nTodos são menores de 15 anos?\n[1]Sim [2]Não\nResposta:");
        scanf("%d",&n);
            if (n == 1){
                real = real + (filhos * 250.00);
                bruto = bruto + (filhos * 250.00);
            }
            else{
                printf("Quantos tem 15 anos ?\n0 para nenhum.\nResposta: ");
                scanf("%d",filhos);
                if (filhos > 0) {
                    real = real + (filhos * 250.00);
                    bruto = bruto + (filhos * 250.00);
                    printf("\nPerfeito!!\n");
                }
                else{
                    printf("Ok, muito obrigado!");
                }
            }

         }
    else{
        printf("\n");
    }
    if (real <= imposto1){
        real = real - (real * 0.05);
        imposto = real * 0.05;
    }
    else if (real > imposto1 && real < imposto2){
        real = real - (real * 0.07);
        imposto = real * 0.07;
    }
    else if (real > imposto2 && real < imposto3){
        real = real - (real * 0.09);
        imposto = real * 0.09;
    }
    else if (real > imposto3){
        real = real - (real * 0.11);
        imposto = real * 0.11;
    } 
    else {
        printf("ERRO DE SISTEMA!");
        return 0;
    }
    printf("\nSeu salário bruto é: %.2f\nValor de imposto cobrado: %.2f\nO valor do seu salário liquido:%.2f\n",bruto ,imposto ,real);
    printf("\nTudo bem acabamos, muito obrigado sr.%s por participar!!\n",name);
}
