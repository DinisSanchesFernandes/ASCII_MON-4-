#ifndef CJOGO_H
#define CJOGO_H
#include <iostream>
#include<vector>
#include<fstream>
#include<string>
#include <sstream>
#include"Pokemons.h"

using namespace std;

class CJogo
{
	public:
		void carregar_dados();
		void mostrar_dados();
	protected:
		vector<Pokemons> pokemons;
		
};

#endif
