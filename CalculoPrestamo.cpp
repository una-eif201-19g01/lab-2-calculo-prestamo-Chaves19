//
// Created by Alonso Chaves  on 2019-08-12.
//

#include <iostream>
#include "CalculoPrestamo.h"
//USAR FIND Y SUBSTRING (BUSCAR MAS EN INTERNET
//8.50% substring(0,4) = "8.50" std::stof("8.50") = 8.50 METODO OBTENER PORCENTAJE
float calculoPrestamo::obtenerPorcentaje(string porcentajeTXT) {
    if(porcentajeTXT.find(A)== true)
        return getMonto();
}
//PARECIDO AL ANTERIOR 2A.find("A") = 1 , 2A.find("M") = 0 castear de string a int std::stoi("2")= 2
int calculoPrestamo::calcularTiempoEnMeses() {

}

float calculoPrestamo::calcularInteresMensual() {

}

calculoPrestamo::CalculoPrestamo() {
    setMonto(100000);
}

calculoPrestamo::CalculoPrestamo(int monto) {
    setMonto(monto);
}
//std::string reporte = "texto \n"
string calculoPrestamo::reporteCalculoPrestamo(string tiempoTXT, string porcentajeTXT) {
    for(int i=0;i<12;i++){
        string reporte=
    }

}

float calculoPrestamo::getMonto() {
    return monto;
}

void calculoPrestamo::setMonto(float m) {
    monto = m;
}