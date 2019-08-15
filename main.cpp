//
// Created by Alonso Chaves  on 2019-08-15.
//
#include <iostream>
#include "CalculoPrestamo.h"
using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
    string tiempo = "1A";
    string porcentaje = "8.40%";
    CalculoPrestamo prestamo1(30000.000000);

    cout << prestamo1.reporteCalculoPrestamo(tiempo, porcentaje) << endl;

    return 0;
}

