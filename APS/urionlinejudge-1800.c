#include <stdio.h>

int main(){

    int q, e, i, j;

    scanf("%d %d", &q, &e);

    int si[e];
    int ci[q];

    for (i = 0; i < e; i++) {
        scanf("%d", &si[i]);
    }

    for (j = 0; j < q; j++) {
        scanf("%d", &ci[j]);
    }

    for (i = 0, j = 0; j < q; j++){
        if(si[i] == ci[j]){
            printf("0\n");
        } else {
            printf("1\n");
            i++;
        }
    }

    return 0;
}
