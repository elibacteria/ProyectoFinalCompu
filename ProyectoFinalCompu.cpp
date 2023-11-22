#include <iostream>

using namespace std;

int main()

{
	int respuesta = 0; //Variable que representa las respuestas del usuario
	int atractivo = 100;//Variable que indica el atractivo del personaje
	
	do{
		//Menu inicial
		
		cout<<"<3<3<3<3<3 Flirt Simulator <3<3<3<3<3"<< endl;
		cout<< endl;
		cout<<"1. Iniciar Juego"<< endl;
		cout<<"2. Ayuda"<< endl;
		cout<<"3. Donar"<< endl;
		cout<<"4. Creditos"<< endl;
		cout<<"5. Salir del juego"<< endl;
		cout<< endl;
		cout<<"<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3"<< endl;
		cout<<endl;
		cout<<"Elige una opcion (1,2,3,4 o 5): "<< endl;
		cout<<endl;
		cin>> respuesta;
		
		if(respuesta==5){
			cout<<endl;
			cout<<"Vuelve pronto :)"<<endl;
			return 0;
		}
		
		switch(respuesta){
		case 1:{
			cout<<endl;
			cout<<"Bienvenid@ a Flirt Simulator n_n"<< endl;
			cout<< endl;
			cout<<"Eres Claire Love, la nueva estudiante del prestigioso instituto FES Aragon"<< endl;
			cout<<"Es tu primer dia y vas caminando en busca de tu salon cuando de repente..."<< endl;
			cout<<"Alguien choca contigo!!!"<< endl;
			cout<<"Volteas y te encuentras con el chico mas guapo que has visto"<< endl;
			cout<<"Es amor a primera vista <3"<< endl;
			cout<< endl;
			cout<<"Es la primera vez que te mira. De que color es tu cabello?"<<endl;
			cout<<endl;
			cout<<"1. Cafe"<<endl;
			cout<<"2. Rubio"<<endl;
			cout<<"3. Pelirrojo"<<endl;
			cout<<endl;
			cout<<"Elige una opcion (1,2 o 3):"<<endl;
			cin>>respuesta;
			
			if(respuesta==1){
				atractivo=atractivo-10;
				cout<<"Le pareces atractiva, pero no es su color de cabello favorito. Pierdes 10 puntos de atractivo"<<endl;
				cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
			}else if(respuesta==2){
				atractivo=atractivo-20;
				cout<<"No le gustan las rubias para nada, al menos le pareces simpatica. Pierdes 20 puntos de atractivo"<<endl;
				cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
			}else if(respuesta==3){
				cout<<"Le encantan las pelirrojas. Te sonrie y caminan juntos al salon. Tu atractivo se mantiene en 100"<<endl;
				cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
			}else if(respuesta!=1||respuesta!=2||respuesta!=3){
				cout<<"Opcion no valida por favor intenta de nuevo: "<<endl;
			}
			break;
			
		}
			
			//El segundo caso te indica las instrucciones del juego
			
		case 2:
			cout<<endl;
			cout<<"Flirt Simulator es un juego que simula los encuentros entre tu y un atractivo chico"<<endl;
			cout<<"El objetivo del juego es lograr que se enamore de ti"<<endl;
			cout<<"Para lograrlo debes conseguir llegar al final del juego con al menos 80 puntos de atractivo"<<endl;
			cout<<"Enamorate y diviertete :D <3"<<endl;
			cout<<endl;
			cout<<endl;
			break;
			
			//El tercer caso indica donde realizar una donacion al proyecto
			
		case 3:
			cout<<endl;
			cout <<"Si te gusto el proyecto y quieres apoyarlo puedes hacer una donacion al siguiente numero de cuenta :**"<<endl;
			cout<<"Numero de tarjeta: 4152 3139 4898 0128"<<endl;
			cout<<"Banco: BBVA"<<endl;
			cout<<"A nombre de: Elizabeth Laguna"<<endl;
			cout<<endl;
			cout<<endl;
			break;
			
			//El cuarto caso indica los creditos
			
		case 4:
			cout<<endl;
			cout <<"Proyecto hecho por Elizabeth Laguna"<<endl;
			cout<<"Correo electronico: elibacteria@outlook.com"<<endl;
			cout<<"Instagram: @elibacteria"<<endl;
			cout<<endl;
			cout<<endl;
			break;
			
			//El quinto caso termina el juego
			
		case 5:
			cout <<"Hasta pronto :)"<<endl;
			break;
			
		default:
			cout<<endl;
			cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
			cout<<endl;
		
	}
	}while(respuesta!=1);
		
	return 0;
}
			
		
	


