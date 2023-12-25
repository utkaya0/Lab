#include <stdio.h>

int main(int argc, const char * argv[]) {
    int f,c;
    printf("Fahrenheit cinsinden sıcaklık giriniz :");
    scanf("%d",&f);
    
    c = (f-32) / (1.8);
    printf("%d C Derece\n",c);
    
    return 0;
}
