#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("Sıcaklık değeri giriniz :");
    scanf("%d",&n);
    
    if (n<0) {
        printf("Donma noktasının altında\n");
    }else if (n>0){
        printf("Donma noktasının üstünde\n");
    }else{
        printf("Donma noktasında\n");
    }
    return 0;
}
