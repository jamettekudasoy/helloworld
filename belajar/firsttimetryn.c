#include <stdio.h>

int main (){

    // cara kasih comment pake slash 2 kali ia

    /*
        nah
        ini
        multi
        line
        comment ^^
    
        escape sequence =   character combination consisting of a backlash \
                            followed by a letter or combination of digits
                            They specify actions within aa line or string of text
                            \n = newline
                            \t = tab
    */

    printf("mamah aku mau toji\n");
    printf("tapi mau nanami juga hngg\n");
    printf("\n");

    // cara efisien buat bikin newline
    printf("wa ode\namerta\nlambelu\njamaluddin\n");
    printf("\n");

    // \t bisa buat ngasih jarak yang sama antar tiap elemen
    printf("a\nb\tc\nd\te\tf\ng\th\ti\tj\n");
    printf("\n");

    // cara display quotes, pake backslash ia, even kalo mau nulis backslash pake backslash jg kyk di bawah lah
    printf("\"awiwi\" - internet cat\n");
    printf("\n");


    // variabel
    int x; //declaration
    x = 69; //initialization
    int y = 9; //declaration + initialization

    int age = 19;              //integer
    float height = 158.5;      //floating pint of number
    char indekskim = 'b';      //single character
    char nama[] = "amerta";    //array of characters
    // c bukan bahasa yang berorientasi objek, jadi gada variabel string dawg cs string=object

    printf("Woi %s\n",nama); //s for string
    printf("Umur eluhk %d taun awkawkaow tua\n",age); //d for decimal
    printf("aowkaokwoa indeks kimia dapet %c\n",indekskim); // c for character
    printf("pendek bgt buset heightnya cuma %f\n",height); // f for float

    return 0;
}