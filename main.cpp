//
// Created by Alonso Chaves  on 2019-08-12.
//
#include "CalculoPrestamo.cpp"

int main (int argc, char *argv[]) {
	string tiempo = "1A";
	string tasaAnual = "2.00%";
	string porcentaje = "8.40%";
	calculoPrestamo prestamo1;
	
	cout<<prestamo1.reporteCalculoPrestamo(tiempo, porcentaje)<<endl;
	
	return 0;
}

