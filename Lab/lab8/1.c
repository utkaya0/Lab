#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,toplam;
    printf("1. Sayı :");
    scanf("%d",&a);
    
    printf("2. Sayı :");
    scanf("%d",&b);
    
    toplam = a+b;
    printf("Toplam = %d\n", toplam);
    return 0;
}
