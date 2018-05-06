#include <iostream>
#include<vector>
#include<fstream>
#include<string>
#include <sstream>
#include "CJogo.h"
#include "Pokemons.h"
using namespace std;
//EEIC
void CJogo::introduzir_pokemon(){
	string nome,tipo,especial;
	int vida,ataque,numatack,velocidade;
	cout<<"\nIntroduza o nome do pokemon: ";
	cin>>nome;
	
	cout<<"\nIntroduza o tipo do pokemon: ";
	cin>>tipo;
	
	cout<<"\nIntroduza o vida do pokemon: ";
	cin>>vida;
	
	cout<<"\nIntroduza o ataque do pokemon: ";
	cin>>ataque;
	
	cout<<"\nIntroduza o numero de ataues do pokemon: ";
	cin>>numatack;
	
	cout<<"\nIntroduza o velocidade do pokemon: ";
	cin>>velocidade;
	
	cout<<"\nIntroduza o especial do pokemon: ";
	cin>>especial;
	
	ofstream fich("Pokedemons.txt");
	if(fich.is_open()){
		fich<<nome<<endl;
		fich<<tipo<<endl;
		fich<<vida<<endl;
		fich<<ataque<<endl;
		fich<<numatack<<endl;
		fich<<velocidade<<endl;
		fich<<especial<<endl;
	}
	else{
		cout<<"\nNão foi possivel abrir o ficheiro.";
	}
}
void CJogo::carregar_dados(){
	string nome,tipo,str_vida,str_ataque,str_numatack,str_velocidade,especial,nome_ataque;
	int num_vida,num_ataque,num_numatack,num_velocidade,i,j;
	i=0;
	ifstream fich("Pokedex.txt");
	if(fich.is_open()){
		while(fich.good()){
		Pokemons P;
		i++;
			getline(fich,nome);
			P.set_Name(nome);
			
			getline(fich,tipo);
			P.set_Type(tipo);
			
			getline(fich,str_vida);
			istringstream ( str_vida ) >> num_vida;
			P.set_Health(num_vida);
			
			getline(fich,str_ataque);
			istringstream(str_ataque) >> num_ataque;
			P.set_Attack(num_ataque);
						 
			getline(fich,str_numatack);
			istringstream(str_numatack) >> num_numatack;
			P.set_Numatack(num_numatack);
			
			
			for(j=0;j<num_numatack;j++){
				getline(fich,nome_ataque);
				P.set_nomeAtaques(nome_ataque);
			}

			
			getline(fich,str_velocidade);
			istringstream(str_velocidade) >> num_velocidade;
			P.set_Speed(num_velocidade);
			
			getline(fich,especial);
			P.set_Special(especial);
			
			pokemons.push_back(P);

		}
		pokemons.erase(pokemons.begin()+i);		
	}
	else{
		cout<<"\nNão foi possivel abrir o ficheiro";
	}
	
	
}
void CJogo::mostrar_dados(){
	int i;
	cout<<"\nVetor: "<<pokemons.size();
	for(i=0;i<pokemons.size();i++){
		Pokemons P=pokemons[i];
		cout<<"\n------"<<P.get_Name()<<"------";
		cout<<"\nTipo: "<<P.get_Type();
		cout<<"\nVida: "<<P.get_Health();
		cout<<"\nAtaque: "<<P.get_Attack();
		cout<<"\nNumero de ataques: "<<P.get_Numatack();
		cout<<"\nVelocidade: "<<P.get_Speed();
		cout<<"\nEspecial: "<<P.get_Special();
	}
}
