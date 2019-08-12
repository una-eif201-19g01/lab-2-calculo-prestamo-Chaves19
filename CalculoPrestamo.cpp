//
// Created by Alonso Chaves  on 2019-08-12.
//

#include <iostream>
#include "CalculoPrestamo.h"
//USAR FIND Y SUBSTRING (BUSCAR MAS EN INTERNET
//8.50% substring(0,4) = "8.40" std::stof("8.50") = 8.50 METODO OBTENER PORCENTAJE
float calculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {
    porcentajeTXT = porcentajeTXT.substring(0,4);
    std::stof(porcentajeTXT);
    porcentajeTXT * 100;
    return x;
}
//PARECIDO AL ANTERIOR 2A.find("A") = 1 , 2A.find("M") = 0 castear de string a int std::stoi("2")= 2
int calculoPrestamo::calcularTiempoEnMeses(std::string tiempoTXT) {
    if(tiempoTXT.find("A")== true){
        tiempoTXT = tiempoTXT.substring(0,1);
        std::stoi(tiempoTXT);
        return tiempoTXT * 12;
    }
    else{
        tiempoTXT = tiempoTXT.substring(0,2);
        std::stoi(tiempoTXT);
        return tiempoTXT;
    }
}

float calculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {
    return balance * tasaAnual;

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
    int x = calcularTiempoEnMeses(std)
    for(int i=0;i<12;i++){
        reporte= "Tasa [ "<<porcentajeTXT<<" ], Mes [ "<< i <<" ], balance inicial [ "<< <<" ], interes [210.000000], balance nuevo [30210.000000] \n";
    }

}

float calculoPrestamo::getMonto() {
    return monto;
}

void calculoPrestamo::setMonto(float m) {
    monto = m;
}