#pragma once
#include"Input.h"
#include"CoinManager.h"
#include "Mapa.h"

class Player
{
public:
	Mapa &mapa;
	CoinManager &coinmanager;

	int x, y, puntos;
	bool endgame;
	void mover(Input::Key tecla, int &puntos);
	Player(CoinManager &coinmanager, Mapa &mapa);
	~Player();
};

