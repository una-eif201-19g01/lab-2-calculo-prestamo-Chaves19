//
// Created by Alonso Chaves  on 2019-08-12.
//
#include <iostream>
#include "CalculoPrestamo.h"

float CalculoPrestamo::obtenerPorcentaje(string porcentajeTXT) {
    int porc = 0;
    porc = porcentajeTXT.find("%");
    porcentajeTXT = porcentajeTXT.substr(0, porc);
    float tasaAnual = std::stof(porcentajeTXT);
    return (tasaAnual / 100);
}

int CalculoPrestamo::calcularTiempoEnMeses(string tiempoTXT) {
    int x = 0;
    int meses = 0;
    if (tiempoTXT.find("A") == true) {
        x = tiempoTXT.find("A");
        tiempoTXT = tiempoTXT.substr(0, x);
        meses = std::stoi(tiempoTXT);
        meses = meses * 12;
    } else {
        x = tiempoTXT.find("M");
        tiempoTXT = tiempoTXT.substr(0, x);
        meses = std::stoi(tiempoTXT);
    }
    return meses;
}

float CalculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {
    return (balance * (tasaAnual / 12));
}

CalculoPrestamo::CalculoPrestamo() {
    monto = 0;
}

CalculoPrestamo::CalculoPrestamo(int64_t m) {
    monto = m;
}


string CalculoPrestamo::reporteCalculoPrestamo(string tiempoTXT, string porcentajeTXT) {
    string reporte = ".";
    float balance = getMonto();
    float balanceNuevo = 0;
    float y = obtenerPorcentaje(porcentajeTXT);
    float z = calcularTiempoEnMeses(tiempoTXT);
    for (int i = 0; i < z; i++) {
        balance = balanceNuevo;
        float interes = calcularInteresMensual(balance, y);
        balanceNuevo = balance + interes;
        reporte = reporte + "Tasa [ " + porcentajeTXT + " ], Mes [ " + std::to_string(i + 1) + " ], balance inicial [ " + std::to_string(balance) + " ], interes [ " + std::to_string(interes) + " ], balance nuevo [ " + std::to_string(balanceNuevo) + " ] \n";
    }
    return reporte;
}

float CalculoPrestamo::getMonto() {
    return monto;
}

void CalculoPrestamo::setMonto(float m) {
    monto = m;
}
