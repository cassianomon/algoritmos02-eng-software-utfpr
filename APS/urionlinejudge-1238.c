#include <stdio.h>

int main(){

    int n, a, b, j, i;
    char word1[50];
    char word2[50];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s %s",&word1, &word2);
        a = 0;
        b = 0;
        for(int j = 0; j < 50; j++){
            if(word1[j] == '\0') a = 1;
            if(word2[j] == '\0') b = 1;
            if(a == 1 && b == 1) break;
            if(a == 0) printf("%c",word1[j]);
            if(b == 0) printf("%c",word2[j]);
        }
        printf("\n");
    }

    return 0;
}
