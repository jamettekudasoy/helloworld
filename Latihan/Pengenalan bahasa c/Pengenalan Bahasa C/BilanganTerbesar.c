#include <stdio.h>

int main (){
    float bil1;
    scanf("%f", &bil1);
    float bil2;
    scanf("%f", &bil2);
    if(bil1 > bil2){
        printf("%f", bil1);
    }
    else if(bil1 < bil2){
        printf("%f", bil2);
    }
    else{
        printf("bil1 = bil2\n");
    }
    return 0;
}