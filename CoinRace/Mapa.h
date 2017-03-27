#pragma once

class Mapa
{

public:
	char **mapa;
	int Rows, Columns;	
	void matriz(int numRows, int numColumns, char **map);
	Mapa(int dificultad);
	void ChangCont(int x, int y, char Zelda);
	void printMap();
	~Mapa();
};

