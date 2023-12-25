#include <stdio.h>

int main(int argc, const char * argv[]) {
    int feet,cm;
    printf("Adım sayısı :");
    scanf("%d",&feet);
    cm = feet*30.48;
    printf("%d\n",cm);
    
    return 0;
}
