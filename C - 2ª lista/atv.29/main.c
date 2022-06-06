/*
    29. Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.
    OK.
*/
#include <stdio.h>
 
int  main() {
    
    int dia, mes, ano, anobix;
    
    printf("Digite o dia: ");
    scanf("%d", &dia);

    printf("Digite o mes: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    //Verifica se o ano é bissexto.
    if((ano % 400 == 0) || (ano % 4 == 0) && (ano % 100 != 0))
    {
        anobix = 1;
    }else{
        anobix = 0;
    }

    //////////////////////////////
    if(mes >= 1 && mes <= 12)
    {
        if((dia >= 1 && dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
        {
            printf("A data %d/%d/%d e valida", dia, mes, ano);
        }else if((dia >= 1 && dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
        {
            printf("A data %d/%d/%d e valida", dia, mes, ano);
        }else if((dia >= 1 && dia <= 29) && (mes == 2) && (anobix == 0))
        {
            printf("A data %d/%d/%d e valida", dia, mes, ano);
        }else if((dia >= 1 && dia <= 28) && (mes == 2) && (anobix == 1))
        {
            printf("A data %d/%d/%d e valida", dia, mes, ano);
        }else
        {
            printf("A data %d/%d/%d e INVALIDA", dia, mes, ano);
        }
    }
    return  0;
}