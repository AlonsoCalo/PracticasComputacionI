//
// Created by alons on 10/11/2021.
//
#include "Grupo.h"

Grupo::Grupo() {
    nombre = " ";
    pka = 0;
    carga = 0;
}

Grupo::Grupo(string nombreGrupo, float pkGrupo, int cargaGrupo) {
    nombre = nombreGrupo;
    pka = pkGrupo;
    carga = cargaGrupo;
}

int Grupo::getCharge() {
    return carga;
}

float Grupo::getpK() {
    return pka;
}
