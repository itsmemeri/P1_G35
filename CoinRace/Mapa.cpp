#include "Mapa.h"
#include<iostream>


void Mapa::matriz(int numRows, int numColumns, char **map)
{
	map = new char *[numRows];
	for (int i = 0; i < numRows; i++)
	{
		map[i] = new char[numColumns];
	}
};

Mapa::Mapa(dificultad A)
{
	Rows = 5 * static_cast<int>(A) + rand() % (10 * static_cast<int>(A) - 5 * static_cast<int>(A));
	Columns = 5 * static_cast<int>(A) + rand() % (10 * static_cast<int>(A) - 5 * static_cast<int>(A));
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
void printMap() {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++) {
			std::cout << map[i][j];
		}
		std::cout << std::endl;
	}
}


Mapa::~Mapa()
{
	delete[]map;
}
