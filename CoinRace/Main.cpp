#include <iostream>
#include "Header.h"
//Declaración de enums


//Definicion de la función "matriz", para crear un array dinámico
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
		Rows = 5 * static_cast<int>(A) + rand() % (10 * static_cast<int>(A) - 5 * static_cast<int>(A));
		Columns = 5 * static_cast<int>(A) + rand() % (10 * static_cast<int>(A) - 5 * static_cast<int>(A));
		matriz(Rows, Columns, map);
		//Rellenar el array con puntos (mapa vacío)
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Columns; j++)
			{
				map[i][j] = '.';
			}
		}
	}
	//Función para cambiar el contenido de las celdas
	void chichinabo(int x, int y, char Zelda)
	{
		map[x][y] = Zelda;
	}
	void printMap() {
		for (int i = 0; i < Rows; i++)
		{
			for (int j = 0; j < Columns; j++) {
				std::cout << map[i][j];
			}
			std::cout << std::endl;
		}
	}
	Map::~Map()
	{
		delete[]map;
	}
};

class coinManager

{
	int coins;

};

