#include <iostream>
//DECLARAR un puntero de puntero
int **md;

int dificultad;
int tamanio = 5 * dificultad + rand() % (10 * dificultad - 5 * dificultad);


//LEER el número de filas y columnas
int numRows = tamanio, numColumns = tamanio;


//PEDIR MEMORIA para un array de punteros
//Tantos punteros como filas
//Cada puntero apuntará a una columna
md = new int*[numRows];

//Para cada puntero fila, hay que pedir memoria para las columnas de esa fila
for (int i = 0; i < numRows; i++)
{
	md[i] = new int[numColumns];
}

//ACCEDER con subíndices
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
