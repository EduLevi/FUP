/*
    Faça um programa para determinar a próxima jogada em um Jogo da Velha. Assumir que o tabuleiro é representado
    por uma matriz de 3 x 3, onde cada posição representa uma das casas do tabuleiro. A matriz pode conter os
    seguintes valores -1, 0, 1 representando respectivamente uma casa contendo uma peça minha (-1), uma casa vazia
    do tabuleiro (0), e uma casa contendo uma peça do meu oponente (1).Lembrando que vc joga contra a máquina.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, j, j1 = -1, v = 0, j2 = 1;                                                       
    int tabuleiro[3][3] = {{v, v, v}, {v, v, v}, {v, v, v}};                                
    int soma_horizontal = 0, soma_vertical = 0, soma_diagonal1 = 0, soma_diagonal2 = 0;     
    char vencedor = 'n';     // 'n' significa q não tem um vencedor ainda

    while(vencedor == 'n'){                                                     
        printf("\n Digite as coordenadas x e y: ");     //vez do jogador        
        scanf("%d %d", &i, &j);                                                 
                                                                                       
        if(tabuleiro[i][j] == v){
            tabuleiro[i][j] = j1;
        }else{
            while(tabuleiro[i][j] != v){
                printf("\n Essa posicao ja esta ocupada. \n");
                printf("\n Digite as coordenadas x e y: ");
                scanf("%d %d", &i, &j);
            }
            tabuleiro[i][j] = j1;
        }
        for(i=0; i<3; i++){                         // imprime o tabuleiro
            for(j=0; j<3; j++)
            {
                //printf(" %d", tabuleiro[i][j]);
                if(tabuleiro[i][j] == -1){                              //     -1 0 1            X _ O        
                    printf(" X");                                       //      0 0-1            _ _ X
                }else if(tabuleiro[i][j] == 0){                         //      0 1 0            _ O _
                    printf(" _");
                }else if(tabuleiro[i][j] == 1){
                    printf(" O");
                }
            }
            soma_horizontal = tabuleiro[i][0] + tabuleiro[i][1] + tabuleiro[i][2];
            if ((soma_horizontal == -3)){
                vencedor = 'j';                                         //     -1-1-1  -3           X X X
            }else if(soma_horizontal == 3){                             //      0 0 0   0           _ _ _
                vencedor = 'c';                                         //      1 1 0   2           O O _
            }
            printf("\n");
        }
        for (i = 0; i<3; i++){
            soma_vertical = tabuleiro[0][i] + tabuleiro[1][i] + tabuleiro[2][i];
            if ((soma_vertical == -3)){                                     //      1 0 0
                vencedor = 'j';                                             //      1 0-1
            }else if(soma_vertical == 3){                                   //      1 0 0
                vencedor = 'c';                                             //         
            }                                                               //      3 0-1
        }
        soma_diagonal1 = tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2];
        soma_diagonal2 = tabuleiro[0][2] + tabuleiro[1][1] + tabuleiro[2][0];
        if((soma_diagonal1 == -3) || (soma_diagonal2 == -3)){                   //      1 0 0
            vencedor = 'j';                                                     //      0 1 0
        }else if((soma_diagonal1 == 3) || (soma_diagonal2 == 3)){               //      0 0 1
            vencedor = 'c';                                                     //            3
        }
        printf("\n \n \n \n \n \n");
/////////////////////////////////////////////////////////////////////////////////////////////   I.A
        i = rand()%3;
        j = rand()%3;
        if(tabuleiro[i][j] == v){                                           //      0 1 0
            tabuleiro[i][j] = j2;                                           //     -1 0 0
        }else{                                                              //      0 0 0
            while(tabuleiro[i][j] != v)
            {
                i = rand()%3;
                j = rand()%3;   
            }
            tabuleiro[i][j] = j2;
        }
/////////////////////////////////////////////////////////////////////////////////////////////
        for(i=0; i<3; i++){                                            // imprime o tabuleiro
            for(j=0; j<3; j++){
                //printf(" %d", tabuleiro[i][j]);
                if(tabuleiro[i][j] == -1){                             //        X _ _                                              
                    printf(" X");                     //        _ _ _
                }else if(tabuleiro[i][j] == 0){                        //        O _ _
                    printf(" _");
                }else if(tabuleiro[i][j] == 1){
                    printf(" O");
                }
                
            }
            soma_horizontal = tabuleiro[i][0] + tabuleiro[i][1] + tabuleiro[i][2];
            if ((soma_horizontal == -3)){
                vencedor = 'j';
            }else if(soma_horizontal == 3){
                vencedor = 'c';
            }
            printf("\n");
        }
        for (i = 0; i<3; i++){
            soma_vertical = tabuleiro[0][i] + tabuleiro[1][i] + tabuleiro[2][i];
            if ((soma_vertical == -3)){
                vencedor = 'j';
            }else if(soma_vertical == 3){
                vencedor = 'c';
            }
        }
        soma_diagonal1 = tabuleiro[0][0] + tabuleiro[1][1] + tabuleiro[2][2];
        soma_diagonal2 = tabuleiro[0][2] + tabuleiro[1][1] + tabuleiro[2][0];
        if((soma_diagonal1 == -3) || (soma_diagonal2 == -3)){
            vencedor = 'j';
        }else if((soma_diagonal1 == 3) || (soma_diagonal2 == 3)){
            vencedor = 'c';
        }
    }/////////////////////////////////////////////////////////////////////////////////////
    if(vencedor == 'j'){                 // 'j' é o jogador
        printf("\n Jogador venceu.\n");
    }else if(vencedor == 'c'){           // 'c' é o computador
        printf("\n Computador venceu.\n");
    }
    return 0;
}
