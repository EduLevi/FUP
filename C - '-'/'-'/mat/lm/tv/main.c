#include <stdio.h>

int tb(int p,int q,int e,int ou,int se,int sese)
{

    if ((p == 1) && (q == 1))
    {
        
        int tbM [4][2];
        
        tbM [0][0] = 1;
        tbM [1][0] = 1;
        tbM [2][0] = 0;
        tbM [3][0] = 0;

        tbM [0][1] = 1;
        tbM [1][1] = 0;
        tbM [2][1] = 1;
        tbM [3][1] = 0;
        
        for (int i = 0; i<=3; i++ )
        {
            int j = 0;
            while( j<=1 )
            {
                int n1 = tbM[i][0];
                int n2 = tbM[i][1];
                //printf("n1 e n2:%d, %d", n1, n2);
                //tbM[i][2] = e_(n1, n2);
                
                tbM[i][3] = ou_(n1, n2);
                //printf("aaaa = %d\n", tbM[i][2]);
                printf("\n");
                j++;
            }
            
            

        }
        
        
        printf("----------------------------\n");
        printf("------Tabela Verdade--------\n");
        printf("----------------------------\n");
        printf(" | p | r |p^r|pvr|p>r|p<>r\n");
                
        for (int i = 0; i<=3; i++ )
        {
            for (int j = 0; j<=3; j++ )
            {
                if(tbM[i][j] == 1)
                {
                    //printf(" | V");
                    printf(" | %d", tbM[i][j]);
                }else if(tbM[i][j] == 0){
                    //printf(" | F");
                    printf(" | %d", tbM[i][j]);
                }
                
            }
            printf("\n");
        }
    }
}

int e_(int n1,int n2)
{   
    int result = -1;
    if(n1 == n2 && n1 > 0)
    {
        result = 1;
    }else{
        result = 0;
    }
    return(result);
}

int ou_(int n1,int n2)
{   
    int result = -1;
    if(n1 || n2 == 1)
    {
        result = 1;
    }else{
        result = 0;
    }
    return(result);
}

int main()
{
    int p = 0, q = 0;
    tb(1, 1, 1, 1, 1, 1);



    return 0;
}

