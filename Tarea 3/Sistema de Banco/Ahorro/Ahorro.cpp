// Ahorro.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int cod_cliente = 0;
string nombre = "";
void menu();
void registro();
void consulta();
void tipoCuenta();
int c = 0;


void menu() {
	int op = 0;
	cout << "Elija Una opcion" << endl;
	cout << "1.) Registro:" << endl;
	cout << "2.) Consulta:" << endl;
	cin >> op;
	while (op < 1 or op > 2) {
		system("cls");
		cout << "Opcion no valida: " << endl;
		cout << "Elija Una opcion" << endl;
		cout << "1.) Registro:" << endl;
		cout << "2.) Consulta:" << endl;
		cin >> op;
	}
	if (op == 1) {
		registro();
	}
	else if (op == 2) {
		consulta();
	}
	else {
		cout << "Opcion No Valida: " << endl;
	}
}
void registro() {
	cout << "Ingrese los siguientes datos: " << endl;
	cout << "Codigo del Cliente: " << endl;
	cin >> cod_cliente;
	cout << "Ingrese Nombre: " << endl;
	cin >> nombre;
	tipoCuenta();

}
void consulta() {

}
void tipoCuenta() {
	int tipoCuenta = 0;
	cout << "Seleccione el Tipo de cuenta: " << endl;
	cout << "1.)Ahorro" << endl;
	cout << "2.)Monetaria" << endl;
	cin >> tipoCuenta;
	if (tipoCuenta==1) {

	}
}

int main()
{
	menu();
	system("pause()");
    return 0;
}

