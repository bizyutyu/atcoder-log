// 01
#include <stdio.h>

int main(void){
    int x,y;
    int d;
    
    // X, Yを取得
    scanf("%d %d\n", &x, &y);
    
    // 移動距離
    d = y - x;

    if(d >= -3 && d <= 2){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
