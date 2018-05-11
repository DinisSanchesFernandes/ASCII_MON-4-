#include <iostream>
#include<vector>
#include<fstream>
#include<string>
#include <sstream>
#include"Pokemons.h"
using namespace std;
int Pokemons::get_Health(){
	return Health;
}
int Pokemons::get_Attack(){
	return Attack;
}
int Pokemons::get_Defense(){
	return Defense;
}
string Pokemons::get_nomeAtaques(int i){
	return Nome_Attack[i];	
}	
int Pokemons::get_Speed(){
	return Speed;
}
int Pokemons::get_Numatack(){
	return numatack;	
}
string Pokemons::get_Special(){
	return Especial;
}
string Pokemons::get_Type(){
	return Type;
}
string Pokemons::get_Name(){
	return Name;	
}
void Pokemons::set_Health(int vida){
	Health=vida;
}
void Pokemons::set_Attack(int ataque){
	Attack=ataque;

}
void Pokemons::set_Speed(int velocidade){
	Speed=velocidade;

}
void Pokemons::set_Numatack(int numero){
	numatack=numero;
}
void Pokemons::set_Special(string especial){
	Especial=especial;
}
void Pokemons::set_Type(string tipo){
	Type=tipo;

}
void Pokemons::set_Name(string nome){
	Name=nome;

}
void Pokemons::set_Defense(int defesa){			//ERRO
	Defense=defesa;								//ERRO
}
void Pokemons::set_nomeAtaques(string nome_ataques){
	Nome_Attack.push_back(nome_ataques);
}


