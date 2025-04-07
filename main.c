#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int matrisA[2][3], matrisB[3][2], sonuc[2][2];
    int i,j,k;
    
    srand(time(0));
    printf("Matris A:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            matrisA[i][j] = (rand()%100)+1;
            printf("%d ",matrisA[i][j]);
        }
        printf("\n");
    }
    printf("\nMatris B:\n");
    for(i=0;i<3;i++) {
        for(j=0;j<2;j++) {
            matrisB[i][j] = (rand()%100)+1;
            printf("%d ",matrisB[i][j]);
        }
        printf("\n");
    }

    printf("\nToplama yapilamaz - boyutlar uyusmuyor\n");

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            sonuc[i][j] = 0;
            for(k=0;k<3;k++) {
                sonuc[i][j] += matrisA[i][k]*matrisB[k][j];
            }
        }
    }
    printf("\nA carpim B:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d ",sonuc[i][j]);
        }
        printf("\n");
    }
    return 0;
}