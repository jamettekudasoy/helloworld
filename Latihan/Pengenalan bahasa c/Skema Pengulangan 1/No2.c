#include <stdio.h>

int main(){
    int n;
    printf("Masukkan nilai n:");
    scanf("%d", &n);
    
    int i = 0;
    do {
    printf("Hello\n");
    i++;
    } while(i != n);
    
    return 0;
}