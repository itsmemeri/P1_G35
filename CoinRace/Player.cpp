#include "Player.h"
#include "CoinManager.h"
#include "Mapa.h"
#include "Input.h"
#include<iostream>



void Player::mover(int x, int y, Input::Key tecla)
{
	switch (tecla)
	{
	case Input::Key::NONE:
		break;
	case Input::Key::W: 
		if (x < Rows) 
		{ 
			x++; 
			CoinManager::eliminarMonedas(x, y);
		}
		break;
	case Input::Key::A:
		if (y > 0) { y--; }
		break;
	case Input::Key::S:
		if (x > 0) { x--; }
		break;
	case Input::Key::D:
		if (y < Rows) { y++; }
		break;
	case Input::Key::ENTER:
		break;
	case Input::Key::ESC:
		break;
	default:
		break;
	}
}



Player::Player()
{
	
}


Player::~Player()
{

}
