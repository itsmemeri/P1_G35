#include "Mapa.h"
#include<iostream>

Mapa::Mapa(int dificultad)
{
	Rows = 5 * dificultad + rand() % (10 * dificultad - 5 * dificultad);
	Columns = 5 * dificultad + rand() % (10 * dificultad - 5 * dificultad);
	mapa = new char *[Rows];
	for (int i = 0; i < Rows; i++)
	{
		mapa[i] = new char[Columns];
	
		for (int j = 0; j < Columns; j++)
		{
			mapa[i][j] = '.';
		}
	}
}

Mapa::~Mapa()
{
	for (int i = 0; i < Rows; i++)
	{
		delete[]mapa[i];
	}
	delete[]mapa;
}

//Función para cambiar el contenido de las celdas
void Mapa::ChangCont(int x, int y, char Zelda)
{
	mapa[x][y] = Zelda;
}
//Función para imprimir el mapa
void Mapa::printMap() {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++) {
			std::cout << mapa[i][j];
		}
		std::cout << std::endl;
	}
}


