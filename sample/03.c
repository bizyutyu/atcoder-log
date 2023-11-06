// 03
#include <stdio.h>

int main(void){
    int n,m;
    
    // N,Mを取得
    scanf("%d %d", &n, &m);
    
    // A_iを取得
    int a[n+1];
    for(int i=1; i<n;i++){
        scanf("%d ", &a[i]);
    }
    scanf("%d", &a[n]);
    
    int x_max = n-m+1;
    int counter[x_max+1];
    // xを変えながらループ
    for(int x=1; x<=x_max; x++){
        counter[x]=0;
        // 1つのxに対してxからx+Mまで調べる
        for(int j=x; j<=x+m; j++){
            // jがa[N]に含まれたらcounterに1加える
            for(int k=1; k<=n; k++){
                if(j==a[k]){
                    counter[x]++;
                }
            }
        }
    }
    
    int max=0;
    for(int x=1; x<=x_max; x++){
    if(max < counter[x]){
        max = counter[x];
    }
    }

    printf("%d\n", max);

    return 0;
}
