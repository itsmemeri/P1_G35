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

	//Para asegurar que la dificultad se halla entre uno y tres.
	while (dificultad!=1 && dificultad != 2 && dificultad != 3)
	{
		std::cout << "El valor debe estar entre 1, 2 o 3" << std::endl;
		std::cin >> dificultad;
	}
	Mapa mapa(dificultad);
	
	//Instanciar los objetos
	CoinManager coinmanager(mapa);
	coinmanager.numMonedas(mapa.Rows, mapa.Columns, coinmanager.monedas);
	coinmanager.colocaMonedas();
	Player player (coinmanager, mapa);
	
	//Variable que determina el máximo de monedas
	int maxPuntos = 30*dificultad + (rand() % (60 * dificultad - 30 * dificultad));
	
	//Variable tipo Key
	Input::Key key;
	mapa.printMap();
	std::cout << "Puntos:" << player.puntos << std::endl;
	std::cout << "Puntos a conseguir:" << maxPuntos << std::endl;
	//Input
	while (player.puntos < maxPuntos && player.endgame == false)
	{
		key = Input::getKey();
		//Update
		if (key != Input::Key::NONE)
		{
			system("cls");
			player.mover(key, player.puntos);
			//Draw
			mapa.printMap();
			std::cout << "Puntos:" << player.puntos << std::endl;
			std::cout << "Puntos a conseguir:" << maxPuntos << std::endl;
		}
	}
}
