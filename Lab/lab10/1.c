#include <stdio.h>

int main(){

    float A[8];

    int toplam=0, ort;

    for (int i = 0; i < 8; i++)
    {
        printf("A[%d] = ",i);
        scanf("%f",&A[i]);
        toplam +=A[i];
    }
    ort = toplam/8;
    printf("Ortalama = %d",ort);

    return 0;
}