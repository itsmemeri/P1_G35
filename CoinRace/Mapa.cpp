#include "Mapa.h"
#include<iostream>

Mapa::Mapa(int A)
{
	Rows = 5 * static_cast<int>(A) + rand() % (10 * static_cast<int>(A) - 5 * static_cast<int>(A));
	Columns = 5 * static_cast<int>(A) + rand() % (10 * static_cast<int>(A) - 5 * static_cast<int>(A));
	matriz(Rows, Columns, mapa);
	//Rellenar el array con puntos (mapa vac�o)
	for (int i = 0; i < Rows-1; i++)
	{
		for (int j = 0; j < Columns-1; j++)
		{
			mapa[i][j] = '.';
		}
	}
}

Mapa::~Mapa()
{
	delete[]mapa;
}

void Mapa::matriz(int numRows, int numColumns, char **mapa)
{
	mapa = new char *[numRows];
	for (int i = 0; i < numRows; i++)
	{
		mapa[i] = new char[numColumns];
	}
};


//Funci�n para cambiar el contenido de las celdas
void Mapa::ChangCont(int x, int y, char Zelda)
{
	mapa[x][y] = Zelda;
}
//Funci�n para imprimir el mapa
void Mapa::printMap() {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++) {
			std::cout << mapa[i][j];
		}
		std::cout << std::endl;
	}
}


