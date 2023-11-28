#include<iostream>

using namespace std;

int main(){
	
	int respuestaInicial = 0; //Variable que representa la respuesta del menu inicial
	int atractivo = 100;//Variable que indica el atractivo del personaje
	int respuestaUno = 0;//Variable que representa la respuesta a la primera pregunta
	int respuestaDos = 0;//Variable que representa la respuesta a la segunda pregunta
	int respuestaTres = 0;//Variable que representa la respuesta a la tercera pregunta
	int respuestaCuatro = 0;//Variable que representa la respuesta a la cuarta pregunta
	int respuestaCincoA = 0;//Variable que representa la respuesta de la pregunta cinco A
	int respuestaCincoB = 0;//Variable que representa la respuesta de la pregunta cinco B
	int respuestaSeis = 0;//Variable que representa la respuesta a la sexta pregunta
	
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
				cout<<"Pasan las semanas y no sabes como acercarte mas a el..."<<endl;
				cout<<"WOW!! La oportunidad que necesitabas esta frente a ti..."<<endl;
				cout<<endl;
				cout<<"+.......................+"<<endl;
				cout<<":      PROXIMAMENTE     :"<<endl;
				cout<<":       DANNY FLOW      :"<<endl;
				cout<<":                       :"<<endl;
				cout<<":   EN EL SHINE ARAGON  :"<<endl;
				cout<<":                       :"<<endl;
				cout<<":  No olvides invitar a :"<<endl;
				cout<<":      tu enamorad@     :"<<endl;
				cout<<":        <3<3<3         :"<<endl;
				cout<<":                       :"<<endl;
				cout<<":  Preventa de boletos  :"<<endl;
				cout<<":  al numero 5534968576 :"<<endl;
				cout<<"+.......................+"<<endl;
				cout<<endl;
				
				do{
					//Tercera Pregunta
					cout<<"Que piensas hacer?"<<endl;
					cout<<endl;
					cout<<"1. Esperar a que te invite"<<endl;
					cout<<"2. Invitarlo tu"<<endl;
					cout<<"3. Invitar a alguien mas"<<endl;
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
					
					if(respuestaTres == 3){
						cout<<endl<<"No manches como vas a invitar a alguien mas, Alex es el chico mas guapo que has visto en toda tu vida"<<endl;
						cout<<endl;
					}
				}while(respuestaTres!=1 && respuestaTres!=2);
				
				switch(respuestaTres){
					case 1:
						atractivo=atractivo-20;
						cout<<endl;
						cout<<"Alex esperaba que lo invites, pero como no fue asi acepto la invitacion de otra chica :("<<endl;
						cout<<"Aun te lo puedes encontrar ese dia, pero tu falta de iniciativa te hace perder 20 puntos de atractivo"<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
						cout<<endl;
						cout<<"De todos modos vas a ir, quien sabe que pueda pasar..."<<endl;
					break;
					
					case 2:
						atractivo=atractivo+10;
						cout<<endl;
						cout<<"Alex acepta con gusto tu invitacion!! Las chicas con iniciativa son su tipo. Ganas 10 puntos de atractivo"<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
						cout<<endl;
						cout<<"Ya no puedes con la emocion de que llegue el dia..."<<endl;
					break;
					
					default:
						cout<<endl;
						cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
						cout<<endl;
				}
				
				cout<<endl;
				cout<<"Por fin es el diaaaaaa"<<endl;
				cout<<"Necesitas elegir tu outfit UuU"<<endl;
				
				do{
					//Cuarta pregunta
					cout<<"De que color eliges tu top?"<<endl;
					cout<<endl;
					cout<<"1. Rojo"<<endl;
					cout<<"2. Negro"<<endl;
					cout<<"3. Blanco"<<endl;
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
						atractivo=atractivo-10;
						cout<<endl;
						cout<<"Resulta ser un color que no te favorece. Pierdes 10 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					case 2:
						atractivo=atractivo+10;
						cout<<endl;
						cout<<"Excelente eleccion, de negro nunca puedes ir mal. Ganas 10 puntos de atractivo."<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					case 3:
						atractivo=atractivo+0;
						cout<<endl;
						cout<<"Es un lindo color, pero no te hace destacar. No ganas ni pierdes atractivo"<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					default:
						cout<<endl;
						cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
						cout<<endl;
				}
				
				if(respuestaTres == 1){
					cout<<endl;
					cout<<"Llegas al lugar y buscas a Alex"<<endl;
					cout<<"Lo ves a lo lejos con su cita..."<<endl;
					cout<<"No vas a dejar que eso te desanime"<<endl;
					cout<<"No sabes si acercarte o esperar a que el se acerque..."<<endl;
					
					do{
						//Pregunta Cinco A
						cout<<"Que haces?"<<endl;
						cout<<endl;
						cout<<"1. Te acercas con el para iniciar una conversacion"<<endl;
						cout<<"2. Le lanzas miradas para que se acerque a ti"<<endl;
						cout<<"3. No haces nada"<<endl;
						cout<<endl;
						cout<<"Elige una opcion (1,2 o 3):"<<endl;
						cout<<"Presiona 4 para salir del juego"<<endl;
						cout<<endl;
						cin>>respuestaCincoA;
						
						if(respuestaCincoA == 4){
							cout<<endl<<"Vuelve pronto :)"<<endl;
							return 0;
						}
						
						if(respuestaCincoA!=1 && respuestaCincoA!=2 && respuestaCincoA!= 3){
							cout<<endl<<"Opcion no valida, por favor intenta de nuevo:"<<endl;
							cout<<endl;
						}
						
						if(respuestaCincoA == 3){
							cout<<endl<<"No puedes no hacer nada >:( ya estas ahi, es momento de actuar"<<endl;
							cout<<endl;
						}
					}while(respuestaCincoA!=1 && respuestaCincoA!=2);
					
					switch(respuestaCincoA){
						case 1:
							atractivo=atractivo+10;
							cout<<endl;
							cout<<"Te saluda con muchos animos, le da gusto verte."<<endl;
							cout<<"Resulta que su cita no iba muy bien y necesitaba un pretexto para huir"<<endl;
							cout<<"Por tu iniciativa ganas 10 puntos de atractivo"<<endl;
							cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
						break;
						
						case 2:
							atractivo=atractivo-10;
							cout<<endl;
							cout<<"Aunque Alex te ve a lo lejos no entiende tus miradas"<<endl;
							cout<<"Penso que solo estabas disociado..."<<endl;
							cout<<"Se acerca a ti de casualidad"<<endl;
							cout<<"Por tu falta de iniciativa pierdes 10 puntos de atractivo"<<endl;
							cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
						break;
						
						default:
							cout<<endl;
							cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
							cout<<endl;
					}
				}
				
				if(respuestaTres == 2){
					cout<<endl;
					cout<<"Alex pasa por ti despues de clases y llegan al lugar"<<endl;
					cout<<"El ambiente es ideal"<<endl;
					cout<<"Van a buscar algo de tomar"<<endl;
					
					do{
						//Pregunta Cinco B
						cout<<"Que eliges?"<<endl;
						cout<<endl;
						cout<<"1. Cerveza"<<endl;
						cout<<"2. Azulito"<<endl;
						cout<<"3. Agua"<<endl;
						cout<<endl;
						cout<<"Elige una opcion (1,2 o 3):"<<endl;
						cout<<"Presiona 4 para salir del juego"<<endl;
						cout<<endl;
						cin>>respuestaCincoB;
						
						if(respuestaCincoB == 4){
							cout<<endl<<"Vuelve pronto :)"<<endl;
							return 0;
						}
						
						if(respuestaCincoB!=1 && respuestaCincoB!=2 && respuestaCincoB!= 3){
							cout<<endl<<"Opcion no valida, por favor intenta de nuevo:"<<endl;
							cout<<endl;
						}
					}while(respuestaCincoB!=1 && respuestaCincoB!=2);
					
					switch(respuestaCincoB){
						case 1:
							atractivo=atractivo-10;
							cout<<endl;
							cout<<"No estas mal...pero tampoco estas bien"<<endl;
							cout<<"No es la bebida para la ocasión"<<endl;
							cout<<"Pierdes 10 puntos de atractivo"<<endl;
							cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
						break;
						
						case 2:
							atractivo=atractivo+10;
							cout<<endl;
							cout<<"Deliciosa eleccion"<<endl;
							cout<<"Es una bebida buena para la ocasion"<<endl;
							cout<<"Ganas 10 puntos de atractivo"<<endl;
							cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
						break;
						
						case 3:
							atractivo=atractivo-20;
							cout<<endl;
							cout<<"No se va al SHINE a tomar agua como crees"<<endl;
							cout<<"Das una impresion aburrida"<<endl;
							cout<<"Pierdes 20 puntos de atractivo"<<endl;
							cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
							
						default:
							cout<<endl;
							cout<<"Opcion no valida, por favor intenta de nuevo: "<<endl;
							cout<<endl;
					}
				}
				
				cout<<endl;
				cout<<"Estas bailando con el y todo parece ir increible"<<endl;
				cout<<"Sientes que es momento de hacer un movimiento..."<<endl;
				cout<<endl;
				
				do{
					//Sexta pregunta
					cout<<"Que haras?"<<endl;
					cout<<endl;
					cout<<"1. Lo miras fijamente"<<endl;
					cout<<"2. Le tomas la mano"<<endl;
					cout<<"3. Lo besas"<<endl;
					cout<<endl;
					cout<<"Elige una opcion (1,2 o 3):"<<endl;
					cout<<"Presiona 4 para salir del juego"<<endl;
					cout<<endl;
					cin>>respuestaSeis;
					
					if(respuestaSeis == 4){
						cout<<endl<<"Vuelve pronto :)"<<endl;
						return 0;
					}
					
					if(respuestaSeis!=1 && respuestaSeis!=2 && respuestaSeis!=3){
						cout<<endl<<"Opcion no valida, por favor intenta de nuevo:"<<endl;
						cout<<endl;
					}
				}while(respuestaSeis!=1 && respuestaSeis!=2 && respuestaSeis!=3);
				
				switch(respuestaSeis){
					case 1:
						atractivo=atractivo-10;
						cout<<endl;
						cout<<"De nuevo, Alex no entiende tus miradas. Pierdes 10 puntos de atractivo"<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
					
					case 2:
						atractivo=atractivo+0;
						cout<<endl;
						cout<<"Lo pone nervioso...pero le gusta"<<endl;
						cout<<"Tu atractivo se mantiene"<<endl;
						cout<<"Tu nivel de atractivo es: "<<atractivo<<" puntos"<<endl;
					break;
			
					case 3:
						atractivo=atractivo+10;
						cout<<endl;
						cout<<"No lo esperaba, pero te sigue el beso...y todo ocurre en camara lenta <3<3<3"<<endl;
						cout<<"Ganas 20 puntos de atractivo"<<endl;
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
				}else if(atractivo<70 && atractivo>=40){
					cout<<endl;
					cout<<"Has conseguido un maravilloso amigo!! u_u"<<endl;
					cout<<"Alex no se enamoro de ti pero te considera como una hermana"<<endl;
					cout<<"Puedes volver a intentar la proxima vez"<<endl;
				}else if(atractivo<40){
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





