#pragma once
int Rows, Columns;
char **mapa;

enum class dificultad { FACIL = 1, NORMAL, DIFICIL };

class Mapa
{
public:
	void matriz(int numRows, int numColumns, char **map);
	Mapa(dificultad A);
	void ChangCont(int x, int y, char Zelda);
	void printMap();
	~Mapa();
};

