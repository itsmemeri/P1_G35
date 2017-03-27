#include <cstdlib>
#include <ctime>
#include <iostream>
#include "Player.h"
#include "CoinManager.h"
#include "Mapa.h"
#include "Input.h"


void main()
{
	//Para que el random varíe entre ejecuciones
	srand(time(nullptr));
	
	//Pedir la dificultad al usuario
	int dificultad;
	std::cout << "Escoge la dificultad entre 1, 2 o 3" << std::endl;
	std::cin >> dificultad;
	Mapa mapa(dificultad);
	
	//Instanciar los objetos
	CoinManager coinmanager(mapa);
	coinmanager.colocaMonedas();
	Player player (coinmanager, mapa);
	
	//Variable que determina el máximo de monedas
	int maxPuntos = 30*dificultad + (rand() % (60 * dificultad - 30 * dificultad));
	
	//Variable tipo Key
	Input::Key key;
	std::cout << "Puntuación:" << coinmanager.puntos << std::endl;
	std::cout << "Puntuacón a conseguir:" << maxPuntos << std::endl;
	mapa.printMap();
	
	//Input
	while (coinmanager.puntos > maxPuntos || player.endgame == false)
	{
		key = Input::getKey();
		
		//Update
		if (key != Input::Key::NONE)
		{
			system("cls");
			player.mover(player.x, player.y, key);
			coinmanager.eliminarMonedas(player.x, player.y);
		}
		
		//Draw
		mapa.printMap();
	}
}
