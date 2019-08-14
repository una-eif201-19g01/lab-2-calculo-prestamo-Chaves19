//
// Created by Alonso Chaves  on 2019-08-14.
//
#ifndef CALCULOPRESTAMO_CALCULOPRESTAMO_H
#define CALCULOPRESTAMO_CALCULOPRESTAMO_H
#include <cstdint>
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

class CalculoPrestamo{
private:
	float monto;
	float obtenerPorcentaje(std::string porcentajeTXT);
	int calcularTiempoEnMeses(std::string);
	float calcularInteresMensual(float balance, float tasaAnual);
public:
	calculoPrestamo();
	calculoPrestamo(float);
	string reporteCalculoPrestamo(string tiempoTXT, string porcentajeTXT);
	float getMonto();
	void setMonto(float m);
};

#endif //CALCULOPRESTAMO_CALCULOPRESTAMO_H