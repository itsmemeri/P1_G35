#include<iostream>
#include "Player.h"
#include "CoinManager.h"
#include "Mapa.h"
#include "Input.h"


Player::Player(CoinManager &coinmanager, Mapa &mapa): coinmanager(coinmanager), mapa(mapa)
{
	int x{ 0 }, y{ 0 };
	endgame = false;
	mapa.ChangCont(x, y, '@');
}


Player::~Player()
{

}


void Player::mover(int x, int y, Input::Key key)
{
	switch (key)
	{
	case Input::Key::NONE:
		break;
	case Input::Key::W: 
		if (x < mapa.Rows)
		{ 
			mapa.mapa[x][y] = '.';
			x++; 
			coinmanager.eliminarMonedas(x, y);
			mapa.ChangCont(x, y, '@');
		}
		break;
	case Input::Key::A:
		if (y > 0) 
		{ 
			mapa.mapa[x][y] = '.';
			y--;
			coinmanager.eliminarMonedas(x, y);
			mapa.ChangCont(x, y, '@');
		}
		break;
	case Input::Key::S:
		if (x > 0) 
		{
			mapa.mapa[x][y] = '.';
			x--;
			coinmanager.eliminarMonedas(x, y);
			mapa.ChangCont(x, y, '@');
		}
		break;
	case Input::Key::D:
		if (y < mapa.Rows)
		{
			mapa.mapa[x][y] = '.';
			y++;
			coinmanager.eliminarMonedas(x, y);
			mapa.ChangCont(x, y, '@');
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

