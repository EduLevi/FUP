#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Acariciar(int id, int feliz, int triste, int raiva);
int Bater(int id, int feliz, int triste, int raiva);
int Ignorar(int id, int feliz, int triste, int raiva);

int main()
{
    int feliz, triste, raiva, estado;
    
    srand(time(NULL));
    feliz = rand() % 100;
    triste = rand() % 100;
    raiva = rand() % 100;

    int i = 0;
    while (i != 5)
    {
        
        printf("_Felicidade: %d \n", feliz);
        printf("_Tristeza: %d \n", triste);
        printf("_Raiva: %d \n", raiva);

        if((feliz > triste) && (feliz > raiva))
        {
            printf("\nEsta feliz. \n");
        }
        if((triste > feliz) && (triste > raiva))
        {
            printf("\nEsta triste. \n");
        }
        if((raiva > triste) && (raiva > feliz))
        {
            printf("\nEsta com raiva. \n");
        }
        
        
        
        scanf("%d", &i);
        if(i == 1){
            feliz = Acariciar(1, feliz, triste, raiva);
            triste = Acariciar(2, feliz, triste, raiva);
            raiva = Acariciar(3, feliz, triste, raiva);
        }
        if(i == 2){
            feliz = Bater(1, feliz, triste, raiva);
            triste = Bater(2, feliz, triste, raiva);
            raiva = Bater(3, feliz, triste, raiva);
        }
        if(i == 3){
            feliz = Ignorar(1, feliz, triste, raiva);
            triste = Ignorar(2, feliz, triste, raiva);
            raiva = Ignorar(3, feliz, triste, raiva);
        }
    
    
        
    }
    return 0;
}
int Acariciar(int id, int feliz, int triste, int raiva) 
{
    feliz = feliz + rand() % 25;
    triste = triste - ((rand() % 15) * (rand() % 3));
    raiva = raiva + ((rand() % 5) * (rand() % 2));
    
    if(id == 1) return(feliz);
    if(id == 2) return(triste);
    if(id == 3) return(raiva);
}
int Bater(int id, int feliz, int triste, int raiva) 
{
    feliz = feliz - rand() % 15;
    triste = triste + ((rand() % 15) * (rand() % 2));
    raiva = raiva + ((rand() % 25) * (rand() % 3));
    
    if(id == 1) return(feliz);
    if(id == 2) return(triste);
    if(id == 3) return(raiva);
}
int Ignorar(int id, int feliz, int triste, int raiva) 
{
    feliz = feliz - rand() % 10;
    triste = triste + ((rand() % 15) * (rand() % 2));
    raiva = raiva + ((rand() % 15));
    
    if(id == 1) return(feliz);
    if(id == 2) return(triste);
    if(id == 3) return(raiva);
}
//bater, ignorar, acariciar