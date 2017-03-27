#pragma once

class CoinManager
{
private:
	int monedas, Rows, Columns;
public:
	int puntos;
	int CoinManager::numMonedas(int Rows, int Columns);
	void colocaMonedas(int monedas);
	void eliminarMonedas(int x, int y);
	CoinManager(int monedes, int punts, int rows, int columns);
	~CoinManager();
};