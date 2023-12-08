#include <stdio.h>
#define longi 20

//Algoritmo de burbuja enteros para no. de cuenta

void burbujaInt(int arr[], int numDatos)
{
	int pasada, comp;
	int aux;
	for (pasada = 0; pasada < numDatos - 1; pasada++)
		for (comp = 0; comp < numDatos - 1; comp++)
			if (arr[comp] > arr[comp + 1])
			{
				aux = arr[comp];
				arr[comp] = arr[comp + 1];
				arr[comp + 1] = aux;
			}
}
