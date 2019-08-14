//
// Created by Alonso Chaves  on 2019-08-14.
//
#include "CalculoPrestamo.cpp"

int main(int argc, char *argv[]) {
    string tiempo = "1A";
    string porcentaje = "8.40%";
    CalculoPrestamo prestamo1(30000);

    cout << prestamo1.reporteCalculoPrestamo(tiempo, porcentaje) << endl;

    return 0;
}

