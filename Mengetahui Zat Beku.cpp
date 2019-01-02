#include <stdio.h>
#include <conio.h>

int main ()
{
    int x;
    printf("PROGRAM UNTUK MENGETAHUI SUATU BENDA BEKU ATAU TIDAK BEKU.\n");
    printf("==========================================================\n");

    printf("SILAHKAN MASUKKAN SUHU BENDA TERSEBUT = "); scanf("%i",&x);

        if (x<=0)
            printf("MAKA BENDA TERSEBUT BEKU",x);
        else {
            printf("MAKA BENDA TERSEBUT TIDAK BEKU",x);}
getch();
}
