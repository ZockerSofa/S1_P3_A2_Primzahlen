#include "header.h"

int ist_prim(int zahl) {
    int i;
    for (i = 2; i < zahl; i++) {
        if (zahl % i == 0) {
            break;
        }
    }
    if (zahl == i) {
        return TRUE;
    }
    else
        return FALSE;

}

int main() {
    int count = 0;
   for (int anfang = 2; anfang <= OBERGRENZE; anfang++) {
       if (ist_prim(anfang) == TRUE) {
           count++;
       }
   }
   ist_prim(count);
    if (ist_prim(count) == TRUE) {
        printf("Die Anzahl der Primzahlen %d ist eine Primzahl\n", count);
    }
    else
        printf("Die Anzahl der Primzahlen %d ist keine Primzahl\n", count);

    return EXIT_SUCCESS;
}
