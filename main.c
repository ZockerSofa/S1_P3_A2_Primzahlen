#include "header.h"

int main() {
    int count = 0;
   for (int anfang = 2; anfang <= OBERGRENZE; anfang++) {       //zaehlt bis zur OBERGRENZE hoch
       if (ist_prim(anfang) == TRUE) {                          //ueberprueft ob eine Zahl eine Primzahl ist
           count++;                                             //wenn Zahl eine Primzahl ist, dann wird um eins hochgezaehlt
       }
   }
   ist_prim(count);                                                                     //ueberprueft ob das Endergebnis von count eine Primzahl ist
    if (ist_prim(count) == TRUE) {                                                      //falls Zahl von count eine Primzahl ist wird das folgende printf ausgefuert
        printf("Die Anzahl der Primzahlen %d ist eine Primzahl\n", count);
    }
    else                                                                                //falls nicht dieses printf
        printf("Die Anzahl der Primzahlen %d ist keine Primzahl\n", count);

    return EXIT_SUCCESS;
}
