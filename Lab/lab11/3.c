#include <stdio.h>

int main(){

    int A[10][2];
    int boy=0,kilo=0;

    for (int i = 0; i < 10 ; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j==0)
            {
                printf("%d. Ogrencinin Boyu: ",i+1);
                scanf("%d",&A[i][j]);
            }
            else{
                printf("%d. Ogrencinin Kilosu: ",i+1);
                scanf("%d",&A[i][j]);
            }
            
        }
        
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j==0)
            {
                boy+=A[i][j];
            }
            else{
                kilo+=A[i][j];
            }
            
        }
        
    }


    printf("Ortalama Boy = %d\nOrtalama Kilo = %d\n",boy/10,kilo/10);
    
    
    return 0;
}