#pragma once

class Mapa
{

public:
	char **mapa;
	int Rows, Columns;	
	Mapa(int dificultad);
	void ChangCont(int x, int y, char Zelda);
	void printMap();
	~Mapa();
};

