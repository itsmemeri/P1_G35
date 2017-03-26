#pragma once
#include"Input.h"
class Player
{
public:
	int puntos = 0;
	void mover(int x, int y, Input::Key tecla);
	Player();
	~Player();
};

