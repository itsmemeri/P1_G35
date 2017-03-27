#include<iostream>
#include "Player.h"
#include "CoinManager.h"
#include "Mapa.h"
#include "Input.h"


Player::Player(CoinManager &coinmanager, Mapa &mapa) : coinmanager(coinmanager), mapa(mapa), x{ 0 }, y{ 0 }, puntos { 0 }
{
	endgame = false;
	mapa.ChangCont(x, y, '@');	
}


Player::~Player()
{

}


void Player::mover(Input::Key key)
{
	mapa.mapa[x][y] = '.';

	switch (key)
	{
	case Input::Key::NONE:
		break;
	case Input::Key::W: 
		if (x > 0)
		{ 
			x--;
			if (mapa.mapa[x][y] == '$')
			{
				coinmanager.eliminarMonedas(x, y);
				puntos++;
			}
		}
		break;
	case Input::Key::A:
		if (y > 0)
		{
			y--;
			if (mapa.mapa[x][y] == '$')
			{
				coinmanager.eliminarMonedas(x, y);
				puntos++;
			}
		}
		break;
	case Input::Key::S:
		if (x < mapa.Rows-1)
		{
			if (mapa.mapa[x][y] == '$')
			{
				coinmanager.eliminarMonedas(x, y);
				puntos++;
			}
			x++;
		}
		break;
	case Input::Key::D:
		if (y <mapa.Columns-1)
		{
			y++;
			if (mapa.mapa[x][y] == '$')
			{
				coinmanager.eliminarMonedas(x, y);
				puntos++;
			}
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
	mapa.ChangCont(x, y, '@');
	
}

