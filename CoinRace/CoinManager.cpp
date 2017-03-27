#include "CoinManager.h"
#include "Mapa.h"
#include<iostream>
#include"Player.h"


CoinManager::CoinManager(Mapa &mapa) :mapa(mapa)
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

void CoinManager::colocaMonedas()
{
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
		puntos++;

	if (monedas == 0)
	{
		monedas = numMonedas(mapa.Rows, mapa.Columns);
		colocaMonedas();
	}
}