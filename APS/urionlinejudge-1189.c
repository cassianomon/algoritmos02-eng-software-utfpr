#include <stdio.h>

int main(){
    double a = 0, M[12][12];
    char op[2];
    int i, j, k, l, m=0, n=4;

    scanf("%s", op);

    for(j = 0;j <= 11;j++){
        for(k = 0; k <= 11; k++){
            scanf("%lf", &M[j][k]);
        }
    }

    for(l=1; l<=10;l++){
        if(l <= 5){
            for(i = 0; i <= m; i++){
                a+=M[l][i];
            }
            m++;
        } else if(l >= 6){
            for(i=0; i<=n; i++){
                a+=M[l][i];
            }
            n--;
        }
    }
    if(op[0] == 'S'){
        printf("%.1lf\n",a);
    } else if(op[0]=='M'){
        a=a/30.0;
        printf("%.1lf\n",a);
    }

    return 0;
}