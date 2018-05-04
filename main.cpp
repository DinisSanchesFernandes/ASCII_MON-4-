#include <iostream>
#include<vector>
#include<fstream>
#include<string>
//#include <sstream>
#include"CombatMode.h"
#include"Pokemons.h"
#include"CJogo.h"
using namespace std;


int main(int argc, char** argv) {
CJogo Jogo;
Jogo.carregar_dados();
Jogo.mostrar_dados();
}
