#include <iostream>
#include "Header.h"
//Declaraci�n de enums
enum class charmap { PUNTO, ARROBA, DOLLAR, MAX };
enum class dificultad { FACIL = 1, NORMAL, DIFICIL };

//Definicion de la funci�n "matriz", para crear un array din�mico
void matriz(int numRows, int numColumns, char **map)
{
	map = new char *[numRows];
	for (int i = 0; i < numRows; i++)
	{
		map[i] = new char[numColumns];
	}
};
//class Map
class Map
{
	int Rows, Columns;
	char **map;
	Map::Map(dificultad A)
	{
		int Rows = 5 * static_cast<int>(A) + rand() % (10 * static_cast<int>(A) - 5 * static_cast<int>(A));
		int Columns = 5 * static_cast<int>(A) + rand() % (10 * static_cast<int>(A) - 5 * static_cast<int>(A));
		matriz(Rows, Columns, map);
		//Rellenar el array con puntos (mapa vac�o)
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Columns; j++)
			{
				map[i][j] = '.';
			}
		}
	}
	//Funci�n para cambiar el contenido de las celdas
	void chichinabo(int x, int y, char Zelda)
	{
		map[x][y] = Zelda;
	}
	Map::~Map()
	{
		delete[]map;
	}
};

