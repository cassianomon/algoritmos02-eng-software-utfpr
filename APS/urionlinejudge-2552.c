#include <stdio.h>

int main(){
    int n, m;

    while(scanf("%d %d", &n, &m) != EOF) {
        int tamanho = (n * m);
        int vet1[tamanho];
        int vet2[tamanho];
        int i, j;

        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                int pos = (i * m + j);
                scanf("%d", &vet1[pos]);
            }
        }

        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                int k = 0;
                if (vet1[i * m + j] == 1) {
                    k = 9;
                    vet2[i * m + j] = k;
                } else {
                    if (i == 0){
                        if(vet1[(i + 1)* m + j] == 1){
                            k++;
                        } if(j == 0) {
                            if(vet1[ i * m + (j + 1)] == 1) {
                                k++;
                            }
                        } else if(j == (m - 1)){
                            if(vet1[i * m + (j - 1)] == 1) {
                                k++;
                            }
                        } else {
                            if(vet1[i * m + (j + 1)] == 1) {
                                k++;
                            }
                            if(vet1[i * m + (j - 1)] == 1) {
                                k++;
                            }
                        }
                    } else if(i>0 && i<n-1){
                        if(vet1[(i - 1)*m+j] == 1){
                            k++;
                        }
                        if(vet1[(i + 1)*m+j] == 1){
                            k++;
                        }
                        if(j == 0){
                            if(vet1[i * m + (j + 1)] == 1){
                                k++;
                            }
                        } else if(j == (m - 1)){
                            if(vet1[i * m + (j - 1)] == 1){
                                k++;
                            }
                        } else{
                            if(vet1[i * m + (j + 1)] == 1){
                                k++;
                            }
                            if(vet1[i * m + (j - 1)] == 1){
                                k++;
                            }
                        }
                    } else{
                        if(vet1[(i - 1) * m + j] == 1){
                            k++;
                        }
                        if(j == 0){
                            if(vet1[i * m + (j + 1)] == 1){
                                k++;
                            }
                        } else if(j == (m - 1)){
                            if(vet1[i * m + (j - 1)] == 1){
                                k++;
                            }
                        } else{
                            if(vet1[i * m + (j + 1)] == 1){
                                k++;
                            }
                            if(vet1[i * m + (j - 1)] == 1){
                                k++;
                            }
                        }
                    }
                }
                vet2[i * m + j] = k;
            }
        }

        for(int i = 0 ; i < n ; i++){
            for( int j=0 ;j < m ;j++){
                printf("%d", vet2[ i * m + j]);
            }
            printf("\n");
        }

    }

    return 0;
}

