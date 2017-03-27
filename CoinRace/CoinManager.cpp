#include "CoinManager.h"
#include "Mapa.h"
#include<iostream>
#include"Player.h"


CoinManager::CoinManager(Mapa &mapa) :mapa(mapa)
{
	int monedas = 0;
}


CoinManager::~CoinManager()
{
}


void CoinManager::numMonedas(int Rows, int Columns, int &monedas)
{
	monedas = ((rand() % 11 + 3) / 100)*(Rows*Columns);
}

void CoinManager::colocaMonedas()
{
	numMonedas(mapa.Rows, mapa.Columns, monedas);
	for (int i = 0; i < monedas; i++) 
	{
		int x = rand() % mapa.Rows;
		int y = rand() % mapa.Columns;
		if (mapa.mapa[x][y] == '.') 
		{
			mapa.mapa[x][y] = '$';
		}
		else 
		{
			i--;
		}
	}
}

void CoinManager::eliminarMonedas (int x, int y)
{
	monedas--;

	if (monedas == 0)
	{
		numMonedas(mapa.Rows, mapa.Columns, monedas);
		colocaMonedas();
	}
}