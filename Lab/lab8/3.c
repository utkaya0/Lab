#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("Sayı giriniz :");
    scanf("%d",&n);
    
    if (n%2==0) {
        printf("Çift\n");
    }else{
        printf("Tek\n");
    }
    return 0;
}
