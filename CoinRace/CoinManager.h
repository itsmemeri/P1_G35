#pragma once

class CoinManager
{
public:
	int monedas;
	int numMonedas(int Rows, int Columns);
	void colocaMonedas(int monedas);
	void eliminarMonedas(int x, int y);
	CoinManager();
	~CoinManager();
};