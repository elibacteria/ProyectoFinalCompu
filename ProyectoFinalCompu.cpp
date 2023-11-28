#include<iostream>

using namespace std;

int main(){
	
	int respuestaInicial = 0; //Variable que representa la respuesta del menu inicial
	int atractivo = 100;//Variable que indica el atractivo del personaje
	int respuestaUno = 0;//Variable que representa la respuesta a la primera pregunta
	int respuestaDos = 0;//Variable que representa la respuesta a la segunda pregunta
	int respuestaTres = 0;//Variable que representa la respuesta a la tercera pregunta
	int respuestaCuatro = 0;//Variable que representa la respuesta a la cuarta pregunta
	int respuestaCinco = 0;//Variable que representa la respuesta a la quinta pregunta
	
	do{
		//Menu inicial
		
		cout<<"<3<3<3<3<3 Flirt Simulator <3<3<3<3<3"<<endl;
		cout<<endl;
		cout<<"1. Iniciar Juego"<<endl;
		cout<<"2. Ayuda"<<endl;
		cout<<"3. Donar"<<endl;
		cout<<"4. Creditos"<<endl;
		cout<<"5. Salir del juego"<<endl;
		cout<< endl;
		cout<<"<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3<3"<<endl;
		cout<<endl;
		cout<<"Elige una opcion (1,2,3,4 o 5): "<<endl;
		cout<<endl;
		cin>>respuestaInicial;
		
		if(respuestaInicial == 5){
			cout<<endl;
			cout<<"Vuelve pronto :)"<<endl;
			return 0;
		}
		
		switch(respuestaInicial){
			case 1:
				cout<<endl;
				cout<<"Bienvenid@ a Flirt Simulator n_n"<<endl;
				cout<< endl;
				cout<<"Eres Claire Love, la nueva estudiante del prestigioso instituto FES Aragon"<<endl;
				cout<<"Es tu primer dia y vas caminando en busca de tu salon cuando de repente..."<<endl;
				cout<<"Alguien choca contigo!!!"<<endl;
				cout<<"Volteas y te encuentras con el chico mas guapo que has visto en toda tu vida"<<endl;
				cout<<"Es amor a primera vista <3"<<endl;
				cout<<endl;
				
				do{
					//Primera pregunta
					cout<<"Es la primera vez que te mira. De que color es tu cabello?"<<endl;
					cout<<endl;
					cout<<"1. Cafe"<<endl;
					cout<<"2. Rubio"<<endl;
					cout<<"3. Pelirrojo"<<endl;
					cout<<endl;
					cout<<"Elige una opcion (1,2 o 3):"<<endl;
					cout<<"Presiona 4 para salir del juego"<<endl;
					cout<<endl;
					cin>>respuestaUno;
					
					if(respuestaUno == 4){
						cout<<endl<<"Vuelve pronto :)"<<endl;
						return 0;
					}
					
					if(respuestaUno!=1 && respuestaUno!=2 && respuestaUno!=3){
						cout<<endl<<"Opcion no valida, por favor intenta de nuevo:"<<endl;
						cout<<endl;
					}
				}while(respuestaUno!=1 && respuestaUno!=2 && respuestaUno!=3);
				
				switch(respuestaUno){
					case 1:
						atractivo=atractivo-10;
						cout<<endl;
						cout<<"Le pareces atractiva, pero no es su color de cabello favorito. Pierdes 10 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
						
					case 2:
						atractivo=atractivo-20;
						cout<<endl;
						cout<<"No le gustan las rubias para nada, al menos le pareces simpatica. Pierdes 20 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
						
					case 3:
						atractivo=atractivo+0;
						cout<<endl;
						cout<<"Le encantan las pelirrojas. Te sonrie y caminan juntos al salon. Tu atractivo se mantiene en 100."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					default:
						cout<<endl;
						cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
						cout<<endl;
				}
				
				cout<<endl;
				cout<<"Pasados unos dias descubres que su nombre es Alex"<<endl;
				cout<<"Mientras platican el te cuenta que su signo zodiacal es Leo"<<endl;
				cout<<"Cada dia te encanta mas...<3<3<3"<<endl;
				
				do{
					//Segunda pregunta
					cout<<"Te pregunta por tu signo zodiacal,esperando ser compatible contigo. Que respondes?"<<endl;
					cout<<endl;
					cout<<"1. Acuario"<<endl;
					cout<<"2. Escorpio"<<endl;
					cout<<"3. Sagitario"<<endl;
					cout<<endl;
					cout<<"Elige una opcion (1,2 o 3):"<<endl;
					cout<<"Presiona 4 para salir del juego"<<endl;
					cout<<endl;
					cin>>respuestaDos;
					
					if(respuestaDos == 4){
						cout<<endl<<"Vuelve pronto :)"<<endl;
						return 0;
					}
					
					if(respuestaDos!=1 && respuestaDos!=2 && respuestaDos!=3){
						cout<<endl<<"Opcion no valida, por favor intenta de nuevo:"<<endl;
						cout<<endl;
					}
				}while(respuestaDos!=1 && respuestaDos!=2 && respuestaDos!=3);
				
				switch(respuestaDos){
					case 1:
						atractivo=atractivo+0;
						cout<<endl;
						cout<<"Le encanta tu respuesta. Leo y Acuario son muy compatibles. Tu atractivo se mantiene."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					case 2:
						atractivo=atractivo-20;
						cout<<endl;
						cout<<"Uyy parece ser que ha tenido malas experiencias con Escorpio. Pierdes 20 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					case 3:
						atractivo=atractivo-10;
						cout<<endl;
						cout<<"Los Sagitario son grandes amigos, le caen bien pero no los ama. Pierdes 10 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					default:
						cout<<endl;
						cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
						cout<<endl;		
				}
				
				cout<<endl;
				cout<<"Alex y tu parecen llevarse muy bien, pero es solo amistad o sera algo mas..."<<endl;
				cout<<"WOW!!! No lo esperabas y Alex te ha invitado a una cita"<<endl;
				cout<<"Te propone ir por un cafe y despues al cine a ver una pelicula"<<endl;
				
				do{
					//Tercera Pregunta
					cout<<"Como respondes a la invitacion?"<<endl;
					cout<<endl;
					cout<<"1. Me encanta la idea"<<endl;
					cout<<"2. Claro, por que no?"<<endl;
					cout<<"3. Yo apuntadisima"<<endl;
					cout<<endl;
					cout<<"Elige una opcion (1, 2 o 3):"<<endl;
					cout<<"Presiona 4 para salir del juego"<<endl;
					cout<<endl;
					cin>>respuestaTres;
					
					if(respuestaTres == 4){
						cout<<endl<<"Vuelve pronto :)"<<endl;
						return 0;
					}
					
					if(respuestaTres!=1 && respuestaTres!=2 && respuestaTres!=3){
						cout<<endl<<"Opcion no valida, por favor intenta de nuevo:"<<endl;
						cout<<endl;
					}
				}while(respuestaTres!=1 && respuestaTres!=2 && respuestaTres!=3);
				
				switch(respuestaTres){
					case 1:
						atractivo=atractivo+0;
						cout<<endl;
						cout<<"Le fascina tu entusiasmo, esta muy emocionado por la cita. Tu atractivo se mantiene."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					case 2:
						atractivo=atractivo-10;
						cout<<endl;
						cout<<"Mmm no le gusto mucho el tono en el que respondiste. Pierdes 10 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					case 3:
						atractivo=atractivo-20;
						cout<<endl;
						cout<<"Sonaste muy desesperada y lo asustas un poco. Pierdes 20 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					default:
						cout<<endl;
						cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
						cout<<endl;
				}
				
				cout<<endl;
				cout<<"Por fin es el dia de la cita!!"<<endl;
				cout<<"Estas muy emocionada y necesitas elegir todo tu outfit UuU"<<endl;
				cout<<"Ya estas en los ultimos detalles, solo falta..."<<endl;
				
				do{
					//Cuarta pregunta
					cout<<"De que color te pintas las unias?"<<endl;
					cout<<endl;
					cout<<"1. Rosas"<<endl;
					cout<<"2. French"<<endl;
					cout<<"3. Negras"<<endl;
					cout<<endl;
					cout<<"Elige una opcion (1,2 o 3):"<<endl;
					cout<<"Presiona 4 para salir del juego"<<endl;
					cout<<endl;
					cin>>respuestaCuatro;
					
					if(respuestaCuatro == 4){
						cout<<endl<<"Vuelve pronto :)"<<endl;
						return 0;
					}
					
					if(respuestaCuatro!=1 && respuestaCuatro!=2 && respuestaCuatro!=3){
						cout<<endl<<"Opcion no valida, por favor intenta de nuevo:"<<endl;
						cout<<endl;
					}
				}while(respuestaCuatro!=1 && respuestaCuatro!=2 && respuestaCuatro!=3);
				
				switch(respuestaCuatro){
					case 1:
						atractivo=atractivo-20;
						cout<<endl;
						cout<<"Resulta ser un color muy basico. Pierdes 20 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					case 2:
						atractivo=atractivo+0;
						cout<<endl;
						cout<<"Excelente eleccion, sencillo pero elegante. Tu atractivo se mantiene."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					case 3:
						atractivo=atractivo-10;
						cout<<endl;
						cout<<"Pareces una chica misteriosa...pero un poco intimidante. Pierdes 10 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					default:
						cout<<endl;
						cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
						cout<<endl;
				}
				
				cout<<endl;
				cout<<"Sientes que la cita va de maravilla!!"<<endl;
				cout<<"Estan eligiendo algo para comer y el te deja escoger a ti"<<endl;
				cout<<"Sabes que es muy quisquilloso con la comida y no quisieras arruinar la cita..."<<endl;
				
				do{
					//Quinta pregunta
					cout<<"Que eliges para comer?"<<endl;
					cout<<endl;
					cout<<"1. Green Grass"<<endl;
					cout<<"2. Kentucky"<<endl;
					cout<<"3. McDonalds"<<endl;
					cout<<endl;
					cout<<"Elige una opcion (1,2 o 3):"<<endl;
					cout<<"Presiona 4 para salir del juego"<<endl;
					cout<<endl;
					cin>>respuestaCinco;
					
					if(respuestaCinco == 4){
						cout<<endl<<"Vuelve pronto :)"<<endl;
						return 0;
					}
					
					if(respuestaCinco!=1 && respuestaCinco!=2 && respuestaCinco!=3){
						cout<<endl<<"Opcion no valida, por favor intenta de nuevo:"<<endl;
						cout<<endl;
					}
				}while(respuestaCinco!=1 && respuestaCinco!=2 && respuestaCinco!=3);
				
				switch(respuestaCinco){
					case 1:
						atractivo=atractivo-10;
						cout<<endl;
						cout<<"Le parece una eleccion algo pretenciosa. Pierdes 10 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					case 2:
						atractivo=atractivo-20;
						cout<<endl;
						cout<<"Pesima decision, considera que es una comida desagradable. Pierdes 20 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
			
					case 3:
						atractivo=atractivo+0;
						cout<<endl;
						cout<<"Le encanta McDonalds, siente que tienen mucho en comun. Tu atractivo se mantiene"<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					default:
						cout<<endl;
						cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
						cout<<endl;
				}
				
				if(atractivo>=70){
					cout<<endl;
					cout<<"Felicidades!!! Lograste mantener tu atractivo y con eso enamorar a Alex"<<endl;
					cout<<"Eres un expert@ en Flirt Simulator"<<endl;
					cout<<"Esperamos te hayas divertido mucho, vuelve pronto <3<3<3"<<endl;
				}else if(atractivo<70 && atractivo>40){
					cout<<endl;
					cout<<"Has conseguido un maravilloso amigo!! u_u"<<endl;
					cout<<"Alex no se enamoro de ti pero te considera como una hermana"<<endl;
					cout<<"Puedes volver a intentar la proxima vez"<<endl;
				}else if(atractivo<=40){
					cout<<endl;
					cout<<"Lamentablemente Alex considera que su relacion no tiene futuro, ni como amigos"<<endl;
					cout<<"Hay mas peces en el mar...tal vez"<<endl;
					cout<<"Puedes volver a intentar la proxima vez"<<endl;
				}
				
			break;
			
			//El segundo caso te indica las instrucciones del juego
			case 2: 	
				cout<<endl;
				cout<<"Flirt Simulator es un juego que simula los encuentros entre tu y un atractivo chico"<<endl;
				cout<<"El objetivo del juego es lograr que se enamore de ti"<<endl;
				cout<<"Para lograrlo debes conseguir llegar al final del juego con al menos 70 puntos de atractivo"<<endl;
				cout<<"Enamorate y diviertete :D <3"<<endl;
				cout<<endl;
				cout<<endl;
			break;
			
			//El tercer caso te indica como realizar una donacion al proyecto
			case 3:
				cout<<endl;
				cout <<"Si te gusto el proyecto y quieres apoyarlo puedes hacer una donacion al siguiente numero de cuenta :**"<<endl;
				cout<<"Numero: 4152 3139 4898 0128"<<endl;
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
	}while(respuestaInicial!=1);
		
	return 0;
}







