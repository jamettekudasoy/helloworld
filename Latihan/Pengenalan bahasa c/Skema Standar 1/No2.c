#include <stdio.h>

int main (){
    int R1;
    scanf("%d", &R1);
    int R2;
    scanf("%d", &R2);
    int R3;
    scanf("%d", &R3);
    int pilihan;
    printf("Pick one!, serial (click 1) or paralel (click 2)?\n");
    scanf("%d", &pilihan);    
    if(pilihan == 1){
        int RT = R1 + R2 + R3;
        printf("%d\n", RT);
    }
    else if(pilihan == 2){
        float RT = 1.0/(1.0/R1 + 1.0/R2 + 1.0/R3);
        printf("%f\n", RT);
    }
    else{
        printf("Input a valid number!\n");
    }

    return 0;
}