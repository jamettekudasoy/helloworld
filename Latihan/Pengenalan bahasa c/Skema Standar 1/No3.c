#include <stdio.h>
#include <math.h>

int main (){
    int pembilangp1;
    printf("Input pembilang P1: ");
    scanf("%d", &pembilangp1);
    int penyebutp1;
    printf("Input penyebut P1: ");
    scanf("%d", &penyebutp1);
    int pembilangp2;
    printf("Input pembilang P2: ");
    scanf("%d", &pembilangp2);
    int penyebutp2;
    printf("Input penyebut P2: ");
    scanf("%d", &penyebutp2);

    if(penyebutp1 <= 0 || penyebutp2 <= 0){
        printf("Masukan tidak valid\n");
    }
    else{
        float P1 = (float)pembilangp1/penyebutp1;
        float P2 = (float)pembilangp2/penyebutp2;
        float selisihp1p2 = P1 - P2;
        printf("Selisih P1 dan P2 = %f", fabs(selisihp1p2));
    }

    return 0;
}