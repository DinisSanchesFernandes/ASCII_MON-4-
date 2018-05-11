#ifndef POKEMONS_H
#define POKEMONS_H
#include <iostream>
#include<fstream>
#include<vector>
#include<string>
#include <sstream>
using namespace std;

class Pokemons
{
	public:
		int get_Health();
		int get_Attack();
		int get_Speed();
		int get_Numatack();
		int get_Defense();
		string get_Special();
		string get_Type();
		string get_Name();	
		string get_nomeAtaques(int);		
		void set_Health(int);
		void set_Attack(int);
		void set_Defense(int);
		void set_Speed(int);
		void set_Numatack(int);
		void set_Special(string);
		void set_Type(string);	
		void set_Name(string);
		void set_nomeAtaques(string);			
	protected:
		int Health,Defense,Attack,Speed,numatack;
		string Especial,Type,Name;
		vector<string> Nome_Attack;
		
};

#endif
