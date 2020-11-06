#include <stdio.h>

void showBits(unsigned a){
    int i;
    for(i=sizeof(a)*8-1;i>=0;i--)
        printf("%d",(a>>i)&1);
    printf("\n");
}

int main(){
    unsigned a,b;
    printf("a=");scanf("%u",&a);
    printf("b=");scanf("%u",&b);
    showBits(a);
    showBits(b);
    printf("a&b=");showBits(a&b);
    printf("a|b=");showBits(a|b);
    printf("a^b=");showBits(a^b);
    return 0;
}

