// Ejercicio NO. 3.cpp: define el punto de entrada de la aplicación de consola.
//
#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
void main() {
	float numero = 0,
		numeroMayor = 0,
		numeroMenor = 0,
		sumaPos = 0,
		promedioPos = 0;
	int	cantidadMayores = 0,
		cantidadPositivos = 0,
		cantidadNegativos = 0;
	int sizeN = 75;
	bool primera = true;

	for (int i = 0; i < sizeN; i++) {
		cout << "Ingrese un numero:" << endl;
		cin >> numero;
		if (numero != 0) {
			if (numero > 0) {
				cantidadPositivos++;
				sumaPos = sumaPos + numero;

				if (numero > 150) {
					cantidadMayores++;
				}
				if (primera) {
					numeroMayor = numero;
					numeroMenor = numero;
					primera = false;
				}

				if (numero > numeroMayor) {
					numeroMayor = numero;
				}
				else {
					if (numero < numeroMenor) {
						numeroMenor = numero;
					}
				}
				
			}
			else {
				if (primera) {
					numeroMayor = numero;
					numeroMenor = numero;
					primera = false;
				}
				cantidadNegativos++;
				if (numero > numeroMayor) {
					numeroMayor = numero;
				}
				if (numero < numeroMenor) {
					numeroMenor = numero;
				}
			}
		}
		else {
			cout << "El numero ingresado tiene que ser distinto a 0" << endl;
		}

	}

	cout << "El numero mayor es: " << numeroMayor << endl;
	cout << "El numero menor es: " << numeroMenor << endl;
	cout << "cantidad Mayores a 150: " << cantidadMayores << endl;
	cout << "Cantidad de Negativos : " << cantidadNegativos << endl;
	if (sumaPos != 0) {
		promedioPos = sumaPos / cantidadPositivos;
	}
	cout << "El promedio de los positivos: " << promedioPos << endl;
	system("PAUSE()");
	return;
}