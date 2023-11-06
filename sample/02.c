// 02
#include <stdio.h>

int main(void){
    int n;
    
    // Nを取得
    scanf("%d\n", &n);
    
    while(n<=919){

    int hp = (int)(n / 100);
    int tp = (int)((n-100*hp) / 10);
    int op = (int)(n-100*hp-10*tp); 

    if(hp*tp == op){
        printf("%d\n",n);
        return 0;
    }

    n++;
    }
    return 0;
}
