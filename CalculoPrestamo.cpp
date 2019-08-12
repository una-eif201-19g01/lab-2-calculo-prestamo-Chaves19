//
// Created by Alonso Chaves  on 2019-08-12.
//

#include <iostream>
#include "CalculoPrestamo.h"
//USAR FIND Y SUBSTRING (BUSCAR MAS EN INTERNET
//8.50% substring(0,4) = "8.40" std::stof("8.50") = 8.50 METODO OBTENER PORCENTAJE
float calculoPrestamo::obtenerPorcentaje(string porcentajeTXT) {
    float x;
    x = porcentajeTXT.substring(0,4);
    x = std::stof(x);
    x = x * 100;
    return x;
}
//PARECIDO AL ANTERIOR 2A.find("A") = 1 , 2A.find("M") = 0 castear de string a int std::stoi("2")= 2
int calculoPrestamo::calcularTiempoEnMeses() {
    if(porcentajeTXT.find(A)== true)
        return getMonto() * 12;
    else{
        return get
    }
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
    string reporte = ".";
    for(int i=0;i<12;i++){
        reporte= "x";
    }

}

float calculoPrestamo::getMonto() {
    return monto;
}

void calculoPrestamo::setMonto(float m) {
    monto = m;
}