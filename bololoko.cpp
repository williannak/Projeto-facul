#include <stdio.h>
int main () {
    // Declaração de variavel 
    float bolo = 35.00;
    float torta = 24.45;
    float trufa = 25.00;
    float kg;
    float ped;
    int pedido;
    
    //Interação com o cliente
    printf("\n***Olá, seja muito bem vindo ao Bololoko!!***\n");
    printf("Meu nome é Bill gate, qual vai ser seu pedido?\n");
    printf("\nTemos a seguintes opção:\n[1]Trufa [2]Torta [3]Bolo\nQual vai ser: ");
    scanf("%d",&pedido);
    switch(pedido){
        case 1:
            printf("\nQuantos KG você vai querer de Trufa? ");
            scanf("%f",&kg);
                if(kg > 5){
                    ped = kg * 22.00;
                }
                else if (kg > 0 && kg < 5){
                    ped = kg * trufa;
                }
                else{
                    printf("ERRO NO KG!!");
                    return 0;
                }
            break;
        case 2:
            printf("\nQuantos KG você vai querer de Torta? ");
            scanf("%f",&kg);
                if(kg > 5){
                    ped = kg * 22.25;
                }
                else if (kg > 0 && kg < 5){
                    ped = kg * torta;
                }
                else{
                    printf("ERRO NO KG!!");
                    return 0;
                }
            break;
        case 3:
            printf("\nQuantos KG você vai querer de Bolo? ");
            scanf("%f",&kg);
             if(kg > 5){
                    ped = kg * 30.00;
                }
                else if (kg > 0 && kg < 5){
                    ped = kg * bolo;
                }
                else{
                    printf("ERRO NO KG!!");
                    return 0;
                }
            break;
        default: 
            printf("\nERRO DE OPÇÃO!!\n");
            printf("\n!!Por favor coloque as opção sugeridas!!\n");
            return 0;
            break;
    }
    printf("\nPerfeito!!, o seu pedido deu R$ %.2f",ped);
    printf("\nMuito obrigado pelo seu pedido e volte sempre !!");

}