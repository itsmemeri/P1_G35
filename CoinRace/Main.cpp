#include <iostream>
#include "Header.h"
#include "Player.h"
#include "CoinManager.h"
#include "Mapa.h"
#include "Input.h"

void main()
{
	//Instanciar los objetos
	CoinManager coinmanager;
	Player player;
	Mapa map(A);
	//Pedir la dificultad al usuario
	int dif;
	dificultad A;
	std::cout << "Escoge la dificultad entre 1, 2 o 3" << std::endl;
	std::cin >> dif;
	dif = static_cast <int>(A);
	//Variable que determina el máximo de monedas
	int maxmon = 30*dif + (rand() % (60 * dif - 30 * dif));
	//Variable tipo Key
	Input::Key key;
}