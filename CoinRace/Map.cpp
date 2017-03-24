#include "Map.h"

enum class charmap { punto, arroba, dollar, MAX };


Map::Map()
{
	void matriz(int dificultad) 
	{
		int tamanio = 5 * dificultad + rand() % (10 * dificultad - 5 * dificultad);

		//LEER el número de filas y columnas
		int numRows = tamanio;
		int numColumns = tamanio;

		//PEDIR MEMORIA para un array de punteros
		//Tantos punteros como filas
		//Cada puntero apuntará a una columna
		int **map = new int*[numRows];

		//Para cada puntero fila, hay que pedir memoria para las columnas de esa fila
		for (int i = 0; i < numRows; i++)
		{
			map[i] = new int[numColumns];
		}

		//ACCEDER con subíndices
		for (int i = 0; i < numRows; i++)
		{

			for (int j = 0; j < numColumns; j++)
			{
				map[i][j] = 0;
			}
		}
	}
}


Map::~Map()
{
	void BorrarMatriz()
	{
		for (int i = 0; i < numRows; i++) {
			delete[]map[i];
		}
		delete[]map;
	}
}
