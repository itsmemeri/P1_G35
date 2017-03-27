#pragma once

char **mapa;

enum class dificultad { FACIL = 1, NORMAL, DIFICIL };

class Mapa
{
private:
	int Rows, Columns;
public:
	void matriz(int numRows, int numColumns, char **map);
	Mapa(dificultad A);
	void ChangCont(int x, int y, char Zelda);
	void printMap();
	~Mapa();
};

