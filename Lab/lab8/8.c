#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    printf("A Sayısı :");
    scanf("%d",&a);
    printf("B Sayısı :");
    scanf("%d",&b);
    printf("C Sayısı :");
    scanf("%d",&c);
    
    if (a>c && a>b) {
        printf("%d en büyük sayı\n",a);
    }else if (b>a && b>c){
        printf("%d en büyük sayı\n",b);
    }else {
        printf("%d en büyük sayı\n",c);
    }
   
    return 0;
}
