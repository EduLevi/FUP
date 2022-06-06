/*
    Faça um programa que some os números ímpares contidos em um intervalo definido pelo usuário. O usuário define o valor inicial do intervalo e o valor final deste intervalo e o programa deve somar todos os números ímpares contidos neste intervalo. Caso o usuário digite um intervalo inválido (começando por um valor maior que o valor final) deve ser escrito uma mensagem de erro na tela, “Intervalo de valores inválido” e o programa termina. Exemplo de tela de saída:
    Digite o valor inicial e valor final: 5 10
    Soma dos ímpares neste intervalo: 21
*/
#include <stdio.h>
 
int  main() {
    int vInicial, vFinal, soma = 0;
    
    printf("Digite o valor inicial e o valor final: ");
    scanf("%d %d", &vInicial, &vFinal);

    /////////////////////////////////////////////
    if(vInicial <= vFinal){
        for(int i = vInicial; i <= vFinal; i++){
            if (i %2 == 1){
                soma += i;
            }
        }
        printf("Soma dos numeros impares neste intervalo e:\n%d", soma);
    }else{
        printf("Intervalo de valores invalido.");
    }
    return 0;
}
