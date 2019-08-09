//
// Created by Maikol Guzman  on 2019-08-08.
//

#include <iostream>
#include "CalculoPrestamo.h"
//USAR FIND Y SUBSTRING (BUSCAR MAS EN INTERNET
//8.50% substring(0,4) = "8.50" std::stof("8.50") = 8.50 METODO OBTENER PORCENTAJE
float calculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {
    
}
//PARECIDO AL ANTERIOR 2A.find("A") = 1 , 2A.find("M") = 0 castear de string a int std::stoi("2")= 2
int calculoPrestamo::calcularTiempoEnMeses() {

}

float calculoPrestamo::calcularInteresMensual() {

}

calculoPrestamo::CalculoPrestamo() {

}

calculoPrestamo::CalculoPrestamo(int64_t tiempo) {

}
//std::string reporte = "texto \n"
string calculoPrestamo::reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT) {

}

float calculoPrestamo::getMonto() {
    return monto;
}

void calculoPrestamo::setMonto(float m) {
    monto = m;
}