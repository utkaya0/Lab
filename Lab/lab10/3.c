#include <stdio.h>

int main(){

    int x,y;

    printf("Max 5 basamakli sayi gir : ");
    scanf("%d",&x);

    int A[5];

    int i=0;

    
    while (x>0)
    {
        y = x%10;
        x= x/10;
        A[i]=y;
        printf("A[%d] = %d\n",i,A[i]);
        i++;
    }

    return 0;
}