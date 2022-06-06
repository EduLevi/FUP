/*
    3. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0.
    OK.
*/
#include <stdio.h>

int main(){
    int n1 = 10;

    while(n1 >= 0){
        printf("%d\n", n1);
        n1 = n1 - 1;
    }
    return 0;
}
