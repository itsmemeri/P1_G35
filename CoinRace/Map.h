#pragma once
class Map
{
	int Rows, Columns;
	char **map;


Map(dificultad A)
{
	int Rows = 5 * static_cast<int>(A) + rand() % (10 * static_cast<int>(A) - 5 * static_cast<int>(A));
	int Columns = 5 * static_cast<int>(A) + rand() % (10 * static_cast<int>(A) - 5 * static_cast<int>(A));
	matriz(Rows, Columns, map);
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++)
		{
			map[i][j] = '.';
		}
	}
}
void chichinabo(int x, int y, char Zelda)
{
	map[x][y] = Zelda;
}


~Map()
{
	delete[]map;
}
};
