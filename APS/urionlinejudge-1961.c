#include <stdio.h>
int main(){
    int p = 0, n = 0, cnt = 0, i, diferenca;
    scanf("%d%d", &p, &n);

    int jump[n];

    for(i=0; i<n; i++){
        scanf("%d",  &jump[i]);
    }

    for(i = 1; i < n; i++){
        if(jump[i] > jump[i-1]){
            diferenca = (jump[i] - jump[i-1]);
        } else {
            diferenca = (jump[i-1] - jump[i]);
        }

        if(diferenca<=p){
            cnt++;
        }
    }
    if(cnt== n-1){
        printf("YOU WIN\n");
    } else {
        printf("GAME OVER\n");
    }

    return 0;
}
