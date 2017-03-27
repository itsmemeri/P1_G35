#pragma once
#include"Input.h"
#include"CoinManager.h"

class Player
{
public:
	int x, y;
	bool endgame;
	void mover(int x, int y, Input::Key tecla, CoinManager coinmanager);
	Player();
	~Player();
};

