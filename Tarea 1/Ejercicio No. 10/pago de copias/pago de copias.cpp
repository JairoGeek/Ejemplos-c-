// pago de copias.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int codCliente = 0, tipo = 0, cantidad = 0, codClienteMayor=0;
	int op = 0, contador = 0, tCarta = 0, tOficio = 0;
	float ventaMayor = 0, venta=0;
	float vCarta = 0.30, vOficio = 0.40, vExtra = 0.50;
	float sumaVenta = 0, promedio = 0;

	cout << "Nuevo cliente" << endl;
	cout << "1. SI \T 2.NO" << endl;
	cin >> op;

	while (op==1) {
		cout << "Codigo del cliente: " << endl;
		cin >> codCliente;
		cout << "Tipo de copia: " << endl;
		cout << "1. Carta \t 2.Oficio \t 3.ExtraOficio" << endl;
		cin >> tipo;
		cout << "Cantidad de copias: " << endl;
		cin >> cantidad;
		contador++;
		if (tipo == 1) {
			tCarta = tCarta + cantidad;
			venta = cantidad * vCarta;
		}
		else if (tipo == 2) {
			tOficio = tOficio + cantidad;
			venta = cantidad * vOficio;
		}
		else if (tipo == 3) {
			venta = cantidad * vExtra;
		}
		sumaVenta = sumaVenta + venta;

		if (venta > ventaMayor) {
			ventaMayor = venta;
			codClienteMayor = codCliente;
		}
		cout << "Total a pagar: " << venta <<" BS" <<endl;



		system("PAUSE()");
		system("cls");
		cout << "Nuevo cliente" << endl;
		cout << "1. SI \T 2.NO" << endl;
		cin >> op;
	}
	promedio = sumaVenta / contador;
	cout << "Total de copias Carta: " << tCarta<<endl;
	cout << "Total de copias Oficio: " << tOficio<<endl;
	cout << "El promedio de las ventas : " << promedio<<endl;
	cout << "El cliente mayoritario: " << codClienteMayor << " Con un total de : " << ventaMayor<<" BS"<<endl;
	system("PAUSE()");

	
    return 0;
}

