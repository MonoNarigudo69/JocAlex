// ExempleClasse.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "BaseEnemy.h"
#include "BasePlayer.h"
#include "EnrageEnemy.h"

using namespace std;

int main()
{

	BasePlayer player1(300.0f);
	BaseEnemy enemy1(40.0f, 200.0f);
	BasePlayer* player_prt = &player1;
	BaseEnemy* enemy_prt = &enemy1;

	player_prt->ApplyDamage(player_prt, enemy1.getLife());

	

	cout << "Life value " << player1.getLife() << endl;
	//cout << "Hello world " << endl;
	system("pause");
	

	return 0;
}