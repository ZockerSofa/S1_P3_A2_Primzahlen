//
// Created by janho on 06.12.2020.
//

#include "header.h"

int ist_prim(int zahl) {
    int i;
    for (i = 2; i < zahl; i++) {        //zaehlt von 2 bis zur Uebergebenen Zahl hoch
        if (zahl % i == 0) {            //ueberprueft ob Zahl durch 'i' '0' ergibt
            break;                      //wenn ja, dann break
        }
    }
    if (zahl == i) {                    //wenn Zahl dasselbe wie i, dann ist Zahl eine Primzahl und es wird 'TRUE' zurueckgegeben
        return TRUE;
    }
}

