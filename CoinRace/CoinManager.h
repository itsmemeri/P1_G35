#pragma once
#include "Mapa.h"



class CoinManager
{

public:
	Mapa &mapa;
	int monedas, puntos;
	int numMonedas(int Rows, int Columns);
	void colocaMonedas();
	void eliminarMonedas(int x, int y);	
	CoinManager(Mapa &mapa);
	~CoinManager();
};