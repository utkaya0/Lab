#include <stdio.h>

int main (){

    int a,b,c;

    printf("1. Sayiyi gir :");
    scanf("%d",&a);

    printf("2. Sayiyi gir :");
    scanf("%d",&b);

    printf("3. Sayiyi gir :");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("%d en büyük\n",a);
    }else if (b>a && b>c){
        printf("%d en büyük\n",b);
    }else{
        printf("%d en büyük",c);
    }
    

    return 0;
}