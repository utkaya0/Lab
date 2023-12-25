#include <stdio.h>

int main(){

    int A[10];
    
    for (int i = 0; i < 10; i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }

   
    int j=9;

   for (int i = 0; i< 10 ; i++)
    {
        printf("A[%d] = %d",i,A[j]);
        j--;
    }
    

    return 0;
}