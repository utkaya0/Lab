#include <stdio.h>

int main (){

    int n,faktor;

    faktor = 1;

    printf("Sayi gir :");
    scanf("%d",&n);

    for (int i = 1; i <= n ; i++)
    {
        faktor = faktor * i;
    }
    printf("Faktoriyel = %d\n",faktor);

    return 0;
}