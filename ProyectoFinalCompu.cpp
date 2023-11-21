#include <iostream>

using namespace std;

int main()

{
	int respuestaInicial = 0; //Variable que representa la primer respuesta del usuario en el menu inicial
	char preguntas [][100] = {"1. Pregunta 1","2. Pregunta 2","3. Pregunta 3","4. Pregunta 4","5. Pregunta 5"};//Arreglo que incluye las 5 preguntas a responder en el juego
	char respuestas[][3][30] = {{"A.","B.","C."},{"A.","B.","C."},{"A.","B.","C."},{"A.","B.","C."},{"A.","B.","C."}};//Arreglo que incluye las 3 opciones para cada pregunta a responder
	int popularidad = 100;//Variable que indica la popularidad del personaje
	bool perdiste = false;
	
	
	//Menu inicial
	
	cout<<"<3<3<3<3<3 Flirt Simulator <3<3<3<3<3"<<endl;
	cout<<endl;
	cout<<"1. Iniciar Juego"<<endl;
	cout<<"2. Ayuda"<<endl;
	cout<<"3. Donar"<<endl;
	cout<<"4. Creditos"<<endl;
	cout<<"5. Terminar el juego"<<endl;
	cout<<endl;
	cout<<"<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3"<<endl;
	cout<<"Elige una opcion (1,2,3,4 o 5): "<<endl;
	cin>> respuestaInicial;
	
	do{
		switch (respuestaInicial){
			
			//El primer caso es lo que sucedera si el usuario elige iniciar el juego
		case 1:
			cout<<"Tu nivel de popularidad es: "<<popularidad<<"puntos"<<endl;
			cout<<"Eres Claire Love, la nueva estudiante del prestigioso instituto FES Aragon"<<endl;
			cout<<"Es tu primer dia y vas caminando en busca de tu salon cuando de repente..."<<endl;
			cout<<"alguien choca contigo!!!"<<endl;
			cout<<"Tu primera reaccion es molestarte pero cuando volteas te encuentras con el chico mas guapo que has visto"<<endl;
			cout<<"Es amor a primera vista <3"<<endl;
			cout<<endl;
			break;
		case 2:
			cout<<"Eres Violet Crane, ingeniera mecanica a bordo de la nave ZX13"<<endl;
			cout<<"Tu, junto con tu tripulacion, son los encargados de llevar a cabo la mision Blue Life"<<endl;
			cout<<"El objetivo de tu mision es explorar el sector 9 de la Galaxia IC342, en busqueda de nuevas formas de vida inteligente"<<endl;
			cout<<endl;
			cout<<"Selecciona el numero correspondiente a tu eleccion y presiona enter para avanzar con la historia"<<endl;
			cout<<endl;
			cout<<endl;
			break;
		case 3:
			cout <<"Proyecto hecho por Elizabeth Laguna :*"<<endl;
			cout<<endl;
			break;
		case 4:
			cout <<"Fin del juego"<<endl;
			break;
		default:
		cout<<"Opcion invalida, por favor intenta de nuevo: "<<endl;
		cout<<endl;
			
	}
	} while (respuestaInicial!=4);
	
	return 0;	
}
