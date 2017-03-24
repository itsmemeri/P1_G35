#include <iostream>

enum class charmap { PUNTO, ARROBA, DOLLAR, MAX };
enum class dificultad { FACIL = 1, NORMAL, DIFICIL };

void matriz(int numRows, int numColumns, char **map)
{
	map = new char *[numRows];
	for (int i = 0; i < numRows; i++)
	{
		map[i] = new char[numColumns];
	}
};

