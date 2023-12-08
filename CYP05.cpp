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

//Algoritmo de burbuja flotante para calificaciones
//void burbujaFloat(float arr[], int numDatos)
//{
//	int pasada, comp;
//	float aux;
//	for (pasada = 0; pasada < numDatos - 1; pasada++)
//		for (comp = 0; comp < numDatos - 1; comp++)
//			if (arr[comp] > arr[comp + 1])
//			{
//				aux = arr[comp];
//				arr[comp] = arr[comp + 1];
//				arr[comp + 1] = aux;
//			}
//}
int main()
{
	int valor[10];
	float valor2[10][10];
	float aux[10];
	int numElem;
	int numAlum=0;
	scanf_s("%i", &numElem); //Numero de alumnos
	char nombre[5][longi];
	int i;
	for (int i = 0; i < numElem; i++)
	{
		printf("No. de cuenta: ");
		scanf_s("%i", &valor[i]);
		scanf_s("%f", &valor2[i]);
	}
	burbujaInt(valor, numElem);
	//burbujaFloat(valor2, numElem);
	for (int i = 0; i < numElem; i++)
	{ 
		while (valor[i] != valor[i + 1]) {
		numAlum++;
		break;
		}
	}
	printf("\n%i", numAlum);
	for (int i = 0; i < numElem; i++)
	{
		if (valor2[i] == valor2[i + 1]){
			if (valor2[1][i] > valor2[1][i + 1]) {
				aux[i] = valor2[i + 1];
				printf("\n%i %f", valor[i], aux[i]);

			}
		}
		//while (valor[i] != valor[i + 1]) {
		//	printf("\n%i %f", valor[i], valor2[i]);
		//	break;
		//}
	}
		

}
