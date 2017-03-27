#pragma once
#include "Mapa.h"




class CoinManager
{

public:
	Mapa &mapa;
	int monedas;
	void numMonedas(int Rows, int Columns, int &monedas);
	void colocaMonedas();
	void eliminarMonedas(int x, int y);	
	CoinManager(Mapa &mapa);
	~CoinManager();
};