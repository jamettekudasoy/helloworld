#include <stdio.h>

int main (){
    int HH;
    int MM;
    int SS;
    scanf("%d", &HH);
    scanf("%d", &MM);
    scanf("%d", &SS);
    if(0 <= HH <= 23 && 0<= MM <= 59 && 0 <= SS <= 59){
        printf("%02d:%02d:%02d\n", HH, MM, SS);   
    }
    else{
        printf("Tidak dapat membentuk jam\n");
    }
    return 0;
}