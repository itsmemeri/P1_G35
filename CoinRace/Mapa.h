#pragma once
int Rows, Columns;
char **mapa;

enum class charmap { PUNTO, ARROBA, DOLLAR, MAX };
enum class dificultad { FACIL = 1, NORMAL, DIFICIL };

class Mapa
{
public:
	void matriz(int numRows, int numColumns, char **map);
	Mapa(dificultad A);
	~Mapa();
};

