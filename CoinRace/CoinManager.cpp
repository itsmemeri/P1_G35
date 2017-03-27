#include "CoinManager.h"
#include "Mapa.h"
#include<iostream>
#include"Player.h"


CoinManager::CoinManager()
{
	puntos = 0;
}


CoinManager::~CoinManager()
{

}


int CoinManager::numMonedas(int Rows, int Columns)
{
	monedas = ((rand() % 11 + 3) / 100)*(Rows*Columns);
	return monedas;
}

void CoinManager::colocaMonedas(int monedas)
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

void CoinManager::eliminarMonedas (int x, int y)
{
	if (mapa[x][y] == '$')
	{
		mapa[x][y] = '.';
		monedas--;
		puntos++;
	}

	if (monedas == 0)
	{
		monedas = numMonedas(Rows, Columns);
		colocaMonedas(monedas);
	}
}