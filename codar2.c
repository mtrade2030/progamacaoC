#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;

    ataque1=1;
    ataque2=0;
    defesa1=1;
    defesa2=0;
    recuo1=0;
    recuo2=1;

    printf("\nEscolha o Primeiro Atributo\n");

    printf("A. Ataque\n");
    printf("D. Defesa\n");
    printf("R. recuo\n");

    printf("Escolha a opçao:");
    scanf("%c", &primeiroAtributo); 
    printf("Voce escolheu a opção: %c\n", primeiroAtributo);


    

 return 0;



}
