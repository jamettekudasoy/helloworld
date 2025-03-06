#include <stdio.h>

int main (){
    int m;
    int h;
    int k;
    scanf("%d %d %d", &m, &h, &k);
    int hargam = 10 * m;
    int hargah = 15 * h;
    int hargak = 20 * k;
    int total = hargam + hargah + hargak;
    printf("%d\n", total);
    
    return 0;
}