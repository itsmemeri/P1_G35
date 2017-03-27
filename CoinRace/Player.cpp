#include<iostream>
#include "Player.h"
#include "CoinManager.h"
#include "Mapa.h"
#include "Input.h"


Player::Player()
{
	int x{ 0 }, y{ 0 };
	endgame = false;
}


Player::~Player()
{

}


void Player::mover(int x, int y, Input::Key tecla, CoinManager coinmanager)
{
	switch (tecla)
	{
	case Input::Key::NONE:
		break;
	case Input::Key::W: 
		if (x < Rows) 
		{ 
			mapa[x][y] = '.';
			x++; 
			coinmanager.eliminarMonedas(x, y);
			mapa[x][y] = '@';
		}
		break;
	case Input::Key::A:
		if (y > 0) 
		{ 
			mapa[x][y] = '.';
			y--;
			coinmanager.eliminarMonedas(x, y);
			mapa[x][y] = '@';
		}
		break;
	case Input::Key::S:
		if (x > 0) 
		{
			mapa[x][y] = '.';
			x--;
			coinmanager.eliminarMonedas(x, y);
			mapa[x][y] = '@';
		}
		break;
	case Input::Key::D:
		if (y < Rows) 
		{
			mapa[x][y] = '.';
			y++;
			coinmanager.eliminarMonedas(x, y);
			mapa[x][y] = '@';
		}
		break;
	case Input::Key::ENTER:
		break;
	case Input::Key::ESC:
		endgame = true;
		break;
	default:
		break;
	}
	
}

