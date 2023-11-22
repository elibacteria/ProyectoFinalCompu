#include <iostream>

using namespace std;

int main()

{
	int respuestaInicial = 0; //Variable que representa la primer respuesta del usuario en el menu inicial
	char preguntas [][50] = {"1. Pregunta 1","2. Pregunta 2","3. Pregunta 3","4. Pregunta 4","5. Pregunta 5"};//Arreglo que incluye las 5 preguntas a responder
	char respuestas [][3][30] = {{"A.","B.","C."},{"A.","B.","C."},{"A.","B.","C."},{"A.","B.","C."},{"A.","B.","C."}};//Arreglo que incluye las 3 opciones para cada pregunta a responder
	int atractivo = 100;//Variable que indica el atractivo del personaje
	
	//Menu inicial
	
	cout<<"<3<3<3<3<3 Flirt Simulator <3<3<3<3<3"<< endl;
	cout<< endl;
	cout<<"1. Iniciar Juego"<< endl;
	cout<<"2. Ayuda"<< endl;
	cout<<"3. Donar"<< endl;
	cout<<"4. Creditos"<< endl;
	cout<<"5. Terminar el juego"<< endl;
	cout<< endl;
	cout<<"<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3"<< endl;
	cout<<endl;
	cout<<"Elige una opcion (1,2,3,4 o 5): "<< endl;
	cout<<endl;
	cin>> respuestaInicial;
	
	switch (respuestaInicial){
			
			//El primer caso es lo que sucedera si el usuario elige iniciar el juego
			
		case 1:{
			cout<<endl;
			cout<<"<3<3<3<3<3 Bienvenid@ a Flirt Simulator"<< endl;
			cout<< endl;
			cout<<"Eres Claire Love, la nueva estudiante del prestigioso instituto FES Aragon"<< endl;
			cout<<"Es tu primer dia y vas caminando en busca de tu salon cuando de repente..."<< endl;
			cout<<"Alguien choca contigo!!!"<< endl;
			cout<<"Tu primera reaccion es molestarte pero cuando volteas te encuentras con el chico mas guapo que has visto"<< endl;
			cout<<"Es amor a primera vista <3"<< endl;
			cout<< endl;
			
			for (int i=0; i<5; i++){
				cout<< preguntas[i]<< endl;
				cout<< respuestas[i][0]<< endl;
				cout<< respuestas[i][1]<< endl,
				cout<< respuestas[i][2]<< endl;
			}
			cout<<endl;
			
			cout<<"Tu nivel de atractivo es: "<<atractivo<<"puntos"<<endl;
			break;
			
		}
			
			//El segundo caso te indica las instrucciones del juego
			
		case 2:
			cout<<"Flirt Simulator es un juego que simula los encuentros entre tu y un atractivo chico"<<endl;
			cout<<"El objetivo del juego es lograr que se enamore de ti"<<endl;
			cout<<"Para lograrlo debes conseguir llegar al final del juego con al menos 80 puntos de atractivo"<<endl;
			cout<<"Enamorate y diviertete =D<3"<<endl;
			cout<<endl;
			cout<<endl;
			break;
			
			//El tercer caso indica donde realizar una donacion al proyecto
			
		case 3:
			cout <<"Si te gusto el proyecto y quieres apoyarlo puedes hacer una donacion al siguiente numero de cuenta n_n :*"<<endl;
			cout<<"Numero de tarjeta: 4152 3139 4898 0128"<<endl;
			cout<<"Banco: BBVA"<<endl;
			cout<<"A nombre de: Elizabeth Laguna"<<endl;
			cout<<endl;
			cout<<endl;
			break;
			
			//El cuarto caso indica los creditos
			
		case 4:
			cout <<"Juego hecho por Elizabeth Laguna"<<endl;
			cout<<"Detalles de contacto: "<<endl;
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
		cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
		cout<<endl;
	}
		
	
	return 0;	
}
	

