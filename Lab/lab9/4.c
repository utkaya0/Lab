#include <stdio.h>

int main(){

    int x,temp,ters,kalan;

    printf("Sayi girin :");
    scanf("%d",&x);

    temp=x;

    while (x>0)
    {
        kalan = x%10;
        ters = (ters* 10)+kalan;
        x = x/10;
    }
    if (ters == temp)
    {
        printf("Polindrom sayi");
    }else{
        printf("Polindrom sayi degil");
    }
    

    return 0;
}