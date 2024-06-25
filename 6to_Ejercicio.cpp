#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string ppt(int num){
	string elemento;
	switch(num){
		case 1:
			elemento="PIEDRA";
			break;
		case 2:
			elemento="PAPEL";
			break;
		case 3:
			elemento="TIJERA";
			break;	
	}
	return elemento;
}

char winolose(string jugador, string bot){
	int jug;
	if(jugador=="PIEDRA"){
		jug=0;
	}else if(jugador=="PAPEL"){
		jug=1;
	}else{
		jug=2;
	}
	switch (jug){
		case 0:
			if(bot=="PIEDRA"){
				return 'e';
			}else if(bot=="PAPEL"){
				return 'p';
			}else{
				return 'g';
			}
			break;
		case 1:
			if(bot=="PIEDRA"){
				return 'g';
			}else if(bot=="PAPEL"){
				return 'e';
			}else{
				return 'p';
			}
			break;
		case 2:
			if(bot=="PIEDRA"){
				return 'p';
			}else if(bot=="PAPEL"){
				return 'g';
			}else{
				return 'e';
			}
			break;
	}
}

int main(){
	string jugador, bot;
	char gp;
	int numero, pjugador=0, pbot=0;
	srand(time(0));	
	
	cout<<"PIEDRA PAPEL TIJERA"<<endl<<endl;
	while(pjugador!=3 && pbot!=3){
		cout<<endl;
		cin>>jugador;
		numero=rand()%3+1;
		bot=ppt(numero);
		cout<<bot;
		
		gp=winolose(jugador, bot);
		
		if(gp=='g'){
			cout<<"\n\tganaste\n";
			pjugador++;
		}else if(gp=='p'){
			cout<<"\n\tperdiste\n";
			pbot++;
		}else{
			cout<<"\n\tempate\n";
		}
	}
	
	if (pjugador>pbot)
		cout<<"ganaste el juego"<<endl;
	else
		cout<<"perdiste el juego"<<endl;
		
	
	return 0;
}