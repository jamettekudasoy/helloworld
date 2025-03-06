#include <stdio.h>

int main(){
    for(;;){
        printf("1. Print Hello World\n");
        printf("2. Jumlahkan 2 integer\n");
        printf("3. Keluar\n");
        printf("Pilih yg mana brok?: ");

        int choice;
        scanf("%d", &choice);

        if(choice == 3){
        printf("Program selesai ^^\n");
            break;
        }
         else if(choice == 2){
            printf("Masukkan Bil. 1: ");
            float bil1;
            scanf("%f", &bil1);
            printf("Masukkan Bil.2: ");
            float bil2;
            scanf("%f", &bil2);
            float jumlahan = bil1 + bil2;
            printf("%.2f\n", jumlahan);
        }
          else if(choice == 1){
            printf("Hello World\n");
        }
          else{
            printf("Masukin angka yg bener kocak\n");
        }
    }

    return 0;
}