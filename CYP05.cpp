#include <stdio.h>

void burbuja(int arr[], float arr2[], int numDatos)
{
	int pasada, comp;
	int auxInt;
	float auxFloat;
	for (pasada = 0; pasada < numDatos - 1; pasada++)
		for (comp = 0; comp < numDatos - 1; comp++)
			if (arr[comp] > arr[comp + 1])
			{
				auxInt = arr[comp];
				arr[comp] = arr[comp + 1];
				arr[comp + 1] = auxInt;

				auxFloat = arr2[comp];
				arr2[comp] = arr2[comp + 1];
				arr2[comp + 1] = auxFloat;
			}
}
