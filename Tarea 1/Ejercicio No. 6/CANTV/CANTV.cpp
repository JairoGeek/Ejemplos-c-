// CANTV.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	int codCliente = 0;
	int tipoCliente = 0;
	int lecActual = 0;
	int lecAnterior = 0;
	int cantImp = 0;
	float neto = 0;
	int razon = 25;
	int consulta=0;
	cout << "Nueva consulta: " << endl;
	cout << "1.SI\t 2.NO"<<endl;
	cin >> consulta;
	while (consulta !=2) {
		cout << "Código del cliente: " << endl;
		cin >> codCliente;
		cout << "Tipo del cliente:" << endl;
		cout << "1) Residencial\t 2) Empresarial" << endl;
		cin >> tipoCliente;
		cout << "Lectura Anterior: " << endl;
		cin >> lecAnterior;
		cout << "Lectura Actual: " << endl;
		cin >> lecActual;
		while (lecActual < lecAnterior) {
			cout << "La lectura Actual tiene que ser mayor a la Lectura anterior:"<<endl;
			cout << "Lectura Actual (nuevamente)" << endl;
			cin >> lecActual;
		}
		cantImp = lecActual - lecAnterior;
		if (tipoCliente == 1) {
			razon == 25;
		}
		else {
			razon == 35;
		}
		neto = cantImp * razon;
		cout << "Cantidad de Impulsos consumidos: " << cantImp<<endl;
		cout << "Neta a pagar es de: " << neto<<endl;
		system("PAUSE()");
		system("cls");
		cout << "Nueva consulta: " << endl;
		cout << "1.SI\t 2.NO"<<endl;
		cin >> consulta;
	}
	cout << "Adios:" << endl;
	system("PAUSE()");
    return 0;
}

