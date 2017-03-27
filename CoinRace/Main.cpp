#include <cstdlib>
#include <iostream>
#include "Player.h"
#include "CoinManager.h"
#include "Mapa.h"
#include "Input.h"


void main()
{
	
	//Instanciar los objetos
	dificultad A;
	CoinManager coinmanager;
	Player player;
	//Pedir la dificultad al usuario
	int dif;
	std::cout << "Escoge la dificultad entre 1, 2 o 3" << std::endl;
	std::cin >> dif;
	A = static_cast <dificultad> (dif);
	Mapa map(A);
	
	/*switch (dif)
	{
	case 1:
		A = dificultad::FACIL;
		break;
	case 2:
		A = dificultad::NORMAL;
		break;
	case 3:
		A = dificultad::DIFICIL;
		break;
	default:
		break;
	}*/
	
	//Variable que determina el máximo de monedas
	int maxmon = 30*dif + (rand() % (60 * dif - 30 * dif));
	//Variable tipo Key
	Input::Key key;
	//Input
	while (coinmanager.puntos > maxmon || player.endgame == false)
	{
		key = Input::getKey();
		//Update
		if (key != Input::Key::NONE)
		{
			player.mover(player.x, player.y, key, coinmanager);
		}
		//Draw
		map.printMap();
	}
}
