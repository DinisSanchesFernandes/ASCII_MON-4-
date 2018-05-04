#include <iostream>
#include<vector>
#include<fstream>
#include<string>
//#include <sstream>
#include"Pokemons.h"
using namespace std;
int Pokemons::get_Health(){
	return Health;
}
int Pokemons::get_Attack(){
	return Attack;
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
	cout<<"\n"<<Health;
}
void Pokemons::set_Attack(int ataque){
	Attack=ataque;
	cout<<"\n"<<Attack;

}
void Pokemons::set_Speed(int velocidade){
	Speed=velocidade;
	cout<<"\n"<<Speed;

}
void Pokemons::set_Numatack(int numero){
	numatack=numero;
	cout<<"\n"<<numatack;
}
void Pokemons::set_Special(string especial){
	Especial=especial;
	cout<<"\n"<<Especial;
}
void Pokemons::set_Type(string tipo){
	Type=tipo;
	cout<<"\n"<<Type;

}
void Pokemons::set_Name(string nome){
	Name=nome;
	cout<<"\n"<<Name;

}			

