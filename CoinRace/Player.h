#pragma once
#include"Input.h"
#include"CoinManager.h"
#include "Mapa.h"

class Player
{
public:
	Mapa &mapa;
	CoinManager &coinmanager;

	int x, y;
	bool endgame;
	void mover(int x, int y, Input::Key tecla);
	Player(CoinManager &coinmanager, Mapa &mapa);
	~Player();
};

