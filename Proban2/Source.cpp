/*#include <iostream>
//DECLARAR un puntero de puntero
void main() {
	
	int dificultad;
	int tamanio = 5 * dificultad + rand() % (10 * dificultad - 5 * dificultad);
	int numRows=tamanio, numColumns=tamanio;
	//LEER el n�mero de filas y columnas
	numRows = tamanio;
	numColumns = tamanio;

	//PEDIR MEMORIA para un array de punteros
	//Tantos punteros como filas
	//Cada puntero apuntar� a una columna
	int **md = new int*[numRows];

	//Para cada puntero fila, hay que pedir memoria para las columnas de esa fila
	for (int i = 0; i < numRows; i++)
	{
		md[i] = new int[numColumns];
	}

	//ACCEDER con sub�ndices
	for (int i = 0; i < numRows; i++)
	{

		for (int j = 0; j < numColumns; j++)
		{
			md[i][j] = 0;
		}
	}
	//LIBERAR memoria
	for (int i = 0; i < numRows; i++) {
		delete[]md[i];
	}
	delete[]md;
}*/