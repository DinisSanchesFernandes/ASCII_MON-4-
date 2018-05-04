#include <iostream>
#include<vector>
#include<fstream>
#include<string>
//#include <sstream>
#include "CJogo.h"
using namespace std;

void CJogo::carregar_dados(){
	string nome,tipo,str_vida,str_ataque,str_numatack,str_velocidade,especial;
	int num_vida,num_ataque,num_numatack,num_velocidade,lixo;
	ifstream fich("Pokedex.txt");
	if(fich.is_open()){
		while(!fich.eof()){
			Pokemons P;

			getline(fich,nome);
			P.set_Name(nome);
			
			getline(fich,tipo);
			P.set_Type(tipo);
			
			getline(fich,str_vida);
//			num_vida=stoi(str_vida);
//			stringstream num_vida(str_vida);
			P.set_Health(num_vida);

			getline(fich,str_ataque);
//			stringstream num_ataque(str_ataque);
			P.set_Attack(num_ataque);

			getline(fich,str_velocidade);
//			stringstream num_velocidade(str_velocidade);
			P.set_Speed(num_velocidade);

			getline(fich,str_numatack);
//			stringstream num_numatack(str_numatack);
			P.set_Attack(num_numatack);

//			getline(fich,especial);
			P.set_Special(especial);
			
//			pokemons.push_back(P);
		}
	}
	else{
		cout<<"\nNão foi possivel abrir o ficheiro";
	}
	
}
void CJogo::mostrar_dados(){
	int i;
	i=0;

}
