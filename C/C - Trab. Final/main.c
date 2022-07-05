#include <stdio.h>
#include <stdlib.h>

void partida_vitoria() //
{
    //cria variavel ponteiro para o arquivo historico.txt
    FILE *pont_arq_historico; 

    /*variavel com o resultado da partida
    essa parte do codigo esta INCOMPLETO*/
    char historico_add[50] = "nome_jogador	| palavra	| resultado";
    ////
    
    //abrindo o arquivo historico.txt
    pont_arq_historico = fopen("historico.txt", "a");
    
    //uso o fprintf para armazenar a variavel historico_add no arquivo
    fprintf(pont_arq_historico, "\n%s", historico_add);
    
    //uso o fclose para fechar o arquivo
    fclose(pont_arq_historico);
}

void palavras()
{
    printf("As palavras disponiveis sao:\n\n");

    //cria variavel ponteiro para o arquivo palavras.txt
    FILE *pont_arq_palavras;

    char texto_str[20];

    //abrindo o palavras.txt em modo "somente leitura"
    pont_arq_palavras = fopen("palavras.txt", "r");

    //listo as palavras do arquivo palavras.txt
    while(fgets(texto_str, 20, pont_arq_palavras) != NULL)
    printf("%s", texto_str);

    //fechando o arquivo
    fclose(pont_arq_palavras);
}

void add_palavra()
{
    FILE *pont_arq_palavras; // cria variável ponteiro para o arquivo
    
    char palavra[20];
    
    //abrindo o arquivo palavras.txt
    pont_arq_palavras = fopen("palavras.txt", "a");
    
    printf("Digite uma ou mais palavras: ");
    scanf("%s", palavra);
    
    //fprintf para armazenar a string no arquivo
    fprintf(pont_arq_palavras, "\n%s", palavra);
    
    //fclose para fechar o arquivo
    fclose(pont_arq_palavras);
    
    printf("Palavra(s) adicionada(s) com sucesso!");
}

void historico()
{
    printf("Hitorico das partidas:\n\n");
    
    FILE *pont_arq_historico;

    char texto_str[20];
    
    //abrir o historico.txt em modo "somente leitura"
    pont_arq_historico = fopen("historico.txt", "r");

    //lista o texto do arquivo historico.txt 
    while(fgets(texto_str, 20, pont_arq_historico) != NULL)
    printf("%s", texto_str);

    //fechando o arquivo
    fclose(pont_arq_historico);
}

int main()
{
    
    int menu = 1;
    int submenu = 1;
    char nome_jogador[10];

    do
    {
        system("cls || clear");
        printf("\n\tMenu principal\n\n");
        printf("1. Jogar\n");
        printf("2. Palavras\n");
        printf("3. Historico\n");
        printf("0. Sair\n");

        scanf("%d", &menu);
        system("cls || clear");

        switch(menu)
        {
            case 1:/*Jogar*/
                printf("\nDigite o nome do jogador: ");
                scanf("%s", &nome_jogador);
                printf("\n%s", nome_jogador);
                /******************************
                    Código da partida de forca;
                */
                // Supondo que o jogador venceu a partida.
                partida_vitoria();

                break;
            case 2:/*Palavras*/
                do
                {
                    //função que lista as palavras do arquivo palavras.txt
                    palavras();

                    printf("\n\n\n");
                    printf("1. Adicionar palavra(s)\n");
                    printf("0. Voltar\n");

                    scanf("%d", &submenu);
                    system("cls || clear");
                    switch (submenu)/////////////////////////////////////////
                    {
                        case 0:/*Voltar*/
                            //sai deste switch e volta pro menu principal
                            break;
                        case 1:/*Adicionar palavras*/
                            //função para adicionar palavras ao arquivo palavras.txt
                            add_palavra();

                            break;                        
                        default:
                            //caso o usuario digite uma opção que não esta listada
                            printf("Digite uma opcao valida.\n");
                    }
                }while(submenu);
                break;
            case 3:/*Historico*/
                do
                {
                    //função que mostra o resultado das partidas anteriores que estão no arquivo historico.txt
                    historico();

                    printf("\n\n\n");
                    printf("0. Voltar\n");

                    scanf("%d", &submenu);
                    system("cls || clear");
                    switch (submenu)
                    {
                        case 0:/*Voltar*/
                            //sai deste switch e volta pro menu principal
                            break;
                        default:
                            //caso o usuario digite uma opção que não esta listada
                            printf("Digite uma opcao valida\n");
                    }
                }while(submenu);
                break;
            case 0:/*Sair*/
                //Encerra o programa.
                break;

            default:
                //caso o usuario digite uma opção que não esta listada
                printf("Digite uma opcao valida\n");
        }
    }while(menu);
}