#include "CoinManager.h"
#include "Mapa.h"
#include<iostream>

int monedas;

int numMonedas(int Rows, int Columns)
{
	monedas = ((rand() % 11 + 3) / 100)*(Rows*Columns);
	return monedas;
}

void colocaMonedas(int monedas)
{
	for (int i = 0; i < monedas; i++) 
	{
		int x = rand() % Rows;
		int y = rand() % Columns;
		if (mapa[x][y] == '.') 
		{
			mapa[x][y] = '$';
		}
		else 
		{
			i--;
		}
	}
}

void eliminarMonedas (int x, int y)
{
	if (mapa[x][y] == '$')
	{
		mapa[x][y] = '.';
		monedas--;
	}

	if (monedas == 0)
	{
		monedas = numMonedas(Rows, Columns);
		colocaMonedas(monedas);
	}
}

CoinManager::CoinManager()
{

}


CoinManager::~CoinManager()
{
	
}
