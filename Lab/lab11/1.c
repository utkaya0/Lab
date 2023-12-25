#include <stdio.h>

int main(){

    int p,n=0;

    do
    {
        p=n*(3*n-1)/2;
        if (p<100)
        {
            printf("%d\n",p);
        }
        n++;
    } while (p<100);
    

    
    return 0;
}