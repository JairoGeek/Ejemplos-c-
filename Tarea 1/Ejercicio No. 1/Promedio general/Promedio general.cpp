// Promedio general.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;


void main()
{
	int promedioG = 0;
	int notaE = 0;
	int sumaT = 0;
	int sizeN = 25;
    
	for (int i = 1; i <= sizeN; i++)
	{
		cout << "Ingrese la nota del estudiante no:" << i<<"\t";
		cin >> notaE;
		sumaT = sumaT + notaE;

	}
	promedioG = sumaT / sizeN;
	cout << "El promedio General es de : " << promedioG<<"\n";
	system("PAUSE()");
	return ;
}

