#include <iostream>
#include<vector>
#include<fstream>
#include<string>
#include <sstream>
#include "CJogo.h"
#include "Pokemons.h"
using namespace std;
//EEIC

void CJogo::carregar_dados(){
	string nome,tipo,str_vida,str_ataque,str_numatack,str_velocidade,especial;
	int num_vida,num_ataque,num_numatack,num_velocidade;
	ifstream fich("Pokedex.txt");
	if(fich.is_open()){
		while(!fich.eof()){
			Pokemons P;

			getline(fich,nome);
			P.set_Name(nome);
//			cout<<"\nNome: "<<nome;
			cout<<P.get_Name();

			
			getline(fich,tipo);
			P.set_Type(tipo);
//			cout<<"\nTipo: "<<tipo;

			
			getline(fich,str_vida);
			stringstream(str_vida) >> num_vida;
//			cout<<"\nnum_vida: "<<num_vida;

			getline(fich,str_ataque);
			stringstream(str_ataque) >> num_ataque;
			P.set_Attack(num_ataque);
//			cout<<"\nnum_ataque: "<<num_ataque;


			getline(fich,str_velocidade);
			stringstream(str_velocidade) >> num_velocidade;
			P.set_Speed(num_velocidade);
//			cout<<"\nVelocidade: "<<num_velocidade;


			getline(fich,str_numatack);
			stringstream(str_numatack) >> num_numatack;
			P.set_Attack(num_numatack);
//			cout<<"\nNumero de ataques: "<<num_numatack;


			getline(fich,especial);
			P.set_Special(especial);
//			cout<<"\nEspecial: "<<especial;
			
			pokemons.push_back(P);
		}
	}
	else{
		cout<<"\nNão foi possivel abrir o ficheiro";
	}
	
	
}
void CJogo::mostrar_dados(){
	int i;
//	i=0;
	Pokemons P=pokemons[0];
	cout<<P.get_Name();
	

}
