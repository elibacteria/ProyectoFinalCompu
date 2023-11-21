#include <iostream>

using namespace std;

int main()

{
	int opcion=0;//variable que indica las opciones en el menu inicial
	int oxigeno=0;//variable que indica la cantidad de oxigeno disponible
	
	do{
		//Menu inicial
		cout<<"Space Devourer"<<endl;
		cout<<endl;
		cout<<"Menu inicial"<<endl;
		cout<<"1.- Iniciar"<<endl;
		cout<<"2.- Ayuda"<<endl;
		cout<<"3.- Creditos"<<endl;
		cout<<"4.- Salir"<<endl;
		cout<<endl;
		cout<<"Elige una opcion usando solo numeros: "<<endl;
		cin>> opcion;
		
		switch (opcion){
		case 1:
			cout<<"Mision: Blue Life"<<endl;
			cout<<"Dia: 1389"<<endl;
			cout<<"Ubicacion: Desconocida"<<endl;
			cout<<"Despiertas porque la IA de la nave reactivo tu capsula criogenica"<<endl;
			cout<<"Te encuentras desorientada y escuchas una alarma de fondo..."<<endl;
			break;
		case 2:
			cout<<"Eres Violet Crane, ingeniera mecanica a bordo de la nave ZX13"<<endl;
			cout<<"Tu, junto con tu tripulacion, son los encargados de llevar a cabo la mision Blue Life"<<endl;
			cout<<"El objetivo de tu mision es explorar el sector 9 de la Galaxia IC342, en busqueda de nuevas formas de vida inteligente"<<endl;
			cout<<endl;
			cout<<"Selecciona el numero correspondiente a tu eleccion y presiona enter para avanzar con la historia"<<endl;
			break;
		case 3:
			cout <<"Proyecto hecho por Elizabeth Laguna :*"<<endl;
			break;
		case 4:
			cout <<"Fin del juego"<<endl;
			break;
		default:
		cout<<"Opcion invalida, por favor intenta de nuevo: "<<endl;
			
	}
	} while (opcion!=4);
	
	return 0;	
}
