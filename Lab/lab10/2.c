#include <stdio.h>

int main(){

    int A[10];

    int kare;

    for (int i = 0; i < 10; i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
        if(A[i]!=-1){
            kare = A[i]*A[i];
            printf("Karesi = %d\n",kare);

            }else{
                break;
            }
            
        }
        
    

    return 0;
}