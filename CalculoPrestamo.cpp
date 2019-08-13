//
// Created by Alonso Chaves  on 2019-08-12.
//
#include "CalculoPrestamo.h"

float calculoPrestamo::obtenerPorcentaje(string porcentajeTXT) {
	float tasaAnual = 0;
	porcentajeTXT = porcentajeTXT.substr(0,4);
	tasaAnual = std::stof(porcentajeTXT);
	tasaAnual = tasaAnual * 100;
	return tasaAnual;
}

int calculoPrestamo::calcularTiempoEnMeses(string tiempoTXT) {
	int x = 0;
	if(tiempoTXT.find("A")== true){
		tiempoTXT = tiempoTXT.substr(0,1);
		x = std::stoi(tiempoTXT);
		return x * 12;
	}
	else{
		tiempoTXT = tiempoTXT.substr(0,2);
		x = std::stoi(tiempoTXT);
		return x;
	}
}

float calculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {
	return balance * tasaAnual;
	
}

calculoPrestamo::calculoPrestamo() {
	setMonto(monto = 100000);
}

calculoPrestamo::calculoPrestamo(float m) {
	setMonto(monto = m);
}
//std::string reporte = "texto \n"
string calculoPrestamo::reporteCalculoPrestamo(string tiempoTXT, string porcentajeTXT) {
	string reporte = ".";
	int x = getMonto();
	float y = obtenerPorcentaje(porcentajeTXT);
	float z = calcularTiempoEnMeses(tiempoTXT);
	float tasaAnual = calcularInteresMensual(x, tasaAnual);
	for(int i=0;i<z;i++){
		reporte = "Tasa [ "; porcentajeTXT ;" ], Mes [ "; i ;" ], balance inicial [ "; x ;" ], interes [ "; tasaAnual ;" ], balance nuevo [ "; x + tasaAnual ;" ] \n";
		x = x + y;
	}
	return reporte;
}

float calculoPrestamo::getMonto() {
	return monto;
}

void calculoPrestamo::setMonto(float m) {
	monto = m;
}
