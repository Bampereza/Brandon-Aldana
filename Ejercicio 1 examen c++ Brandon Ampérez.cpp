#include<iostream> //Brandon Isaias Ampérez Aldana 0909 - 21 - 4628
using namespace std;

//Colo camos las variables
int main() {
	string doc;
	float paq;
	float paquete;
	float peso;
	float peso_real_maximo;
	float peso_volumetrico;
	float precio_kg;
	float rep;
	float repuesto;
	float distancia;
	float documento;
	float doc_max;
	float elec;
	float electronico;
	float mob;
	float mobiliario;
	int opc;
	float salir;
	int ancho;
	int largo;
	int alto;
	float Peso_volumetrico;
	peso_real_maximo = 35;
	peso_volumetrico = 50;
	precio_kg = 40;
	doc_max = 10;
	//colocamos los menus para los usuarios
	cout <<" Hola Bienvenido al servicio de tranporte de paqueteria BD "<< endl;
	cout <<" Seleccione la opcion deseada "<< endl;
	cout <<"\n"<< endl; //se coloca para dejar espacios y se vea de forma mas estetica
	cout <<" Si el usuario sabe el peso de su paquete "<< endl;
	cout <<"1: Documento"<< endl;
	cout <<"2: Paquete"<< endl;
	cout <<"3: Mobiliario"<< endl;
	cout <<"4: Repuesto"<< endl;
	cout <<"5: Electronica"<< endl;
	cout <<"6: Salir"<< endl;
	cout <<"\n"<< endl; //se coloca para dejar espacios y se vea de forma mas estetica
	
	cout <<"Si usuario no se sabe el peso del paquete"<< endl;
	cout <<"7: Documento2"<< endl;
	cout <<"8: Paquete2"<< endl;
	cout <<"9: Mobiliario2"<< endl;
	cout <<"10: Repuesto2"<< endl;
	cout <<"11: Electronica2"<< endl;
	cout <<"6: Salir"<< endl;
	cout <<"\n"<< endl; //se coloca para dejar espacios y se vea de forma mas estetica
	
	cin >> opc;
	if (opc==1) { //colocamos los calculos para el total a pagar del servicio
		cout << "A elegido la opcion de Documento " << endl;
		cout << "Coloque la cantidad de documentos desea transportar" << endl;
		cin >>doc;
		cout << "ingrese la distancia" << endl;
		cin >> distancia;
		cout << "ingrese el peso maximo" << endl;
		cin >>peso_real_maximo;
		peso = peso_real_maximo*precio_kg*doc_max+distancia;
		cout << " La cantidad total por el servicio es de : Q " << peso << endl;
	} else {
		if (opc==2) { //colocamos los calculos para el total a pagar del servicio
			cout << " A elegido la opcion de Paquete " << endl;
			cout << "Coloque la cantidad de paquetes desea transportar" << endl;
			cin >> paq;
			cout << "ingrese la distancia" << endl;
			cin >> distancia;
			cout << "ingrese el peso maximo" << endl;
			cin >> peso_real_maximo;
			peso = peso_real_maximo*precio_kg*paq+distancia;
			cout << " La cantidad total por el servicio es de : Q " << peso << endl;
		} else {
			if (opc==3) { //colocamos los calculos para el total a pagar del servicio
				cout << "A elegido la opcion de Mobiliario " << endl;
				cout << "Coloque la cantidad de mobiliario desea transportar" << endl;
				cin >> mob;
				cout << "ingrese la distancia" << endl;
				cin >> distancia;
				cout << "ingrese el peso maximo" << endl;
				cin >> peso_real_maximo;
				peso = peso_real_maximo*precio_kg*mob+distancia;
				cout << " La cantidad total por el servicio es de : Q " << peso << endl;
			} else {
				if (opc==4) { //colocamos los calculos para el total a pagar del servicio
					cout << "A elegido la opcion de Repuestos " << endl;
					cout << "Coloque la cantidad de repuestos desea transportar" << endl;
					cin >> rep;
					cout << "ingrese la distancia" << endl;
					cin >> distancia;
					cout << "ingrese el peso maximo" << endl;
					cin >> peso_real_maximo;
					peso = peso_real_maximo*precio_kg*rep+distancia;
					cout << " La cantidad total por el servicio es de : Q " << peso << endl;
				} else {
					if (opc==5) { //colocamos los calculos para el total a pagar del servicio
						cout << "A elegido la opcion de Electronica  " << endl;
						cout << "Coloque la cantidad de electrodomesticos desea transportar" << endl;
						cin >> elec;
						cout << "ingrese la distancia" << endl;
						cin >> distancia;
						cout << "ingrese el peso maximo" << endl;
						cin >> peso_real_maximo;
						peso = peso_real_maximo*precio_kg*elec+distancia;
						cout << " La cantidad total por el servicio es de : Q " << peso << endl;
					} else {
						if (opc==6) { //colocamos la opcion para que el usuario salga del servicio
							cout << "Gracias por elegir nuestro servicio" << endl;
						} else{
								if (opc==7){ //colocamos los calculos para el total a pagar del servicio
				          cout << "A elegido la opcion de Documento " << endl;
	                   	  cout << "Coloque la cantidad de documentos desea transportar" << endl;
		                  cin >>doc;
		                  cout << "ingrese el largo del documento" << endl;
		                  cin >> distancia;
		                  cout << "ingrese el ancho de su documento" << endl;
		                  cin >>ancho;
		                  cout << "ingrese la altura de su documento" << endl;
		                  cin >>alto;
		                  Peso_volumetrico = (largo*ancho*alto)/2272;
		                  cout << " La cantidad total por el servicio es de : Q " << peso_volumetrico << endl;
		                  
							} else{
								if (opc==8){ //colocamos los calculos para el total a pagar del servicio
				          cout << "A elegido la opcion de Paquete " << endl;
	                   	  cout << "Coloque la cantidad de paquetes desea transportar" << endl;
		                  cin >>doc;
		                  cout << "ingrese el largo del paquete" << endl;
		                  cin >> distancia;
		                  cout << "ingrese el ancho del paquete" << endl;
		                  cin >>ancho;
		                  cout << "ingrese la altura del paquete" << endl;
		                  cin >>alto;
		                  Peso_volumetrico = (largo*ancho*alto)/2272;
		                  cout << " La cantidad total por el servicio es de : Q " << peso_volumetrico << endl;
		                  
		                         } else{
								if (opc==9){ //colocamos los calculos para el total a pagar del servicio
				          cout << "A elegido la opcion de Mobiliario " << endl;
	                   	  cout << "Coloque la cantidad de mobiliario desea transportar" << endl;
		                  cin >>doc;
		                  cout << "ingrese el largo del mobiliario" << endl;
		                  cin >> distancia;
		                  cout << "ingrese el ancho del mobiliario" << endl;
		                  cin >>ancho;
		                  cout << "ingrese la altura del mobiliario" << endl;
		                  cin >>alto;
		                  Peso_volumetrico = (largo*ancho*alto)/2272;
		                  cout << " La cantidad total por el servicio es de : Q " << peso_volumetrico << endl;
		                  
		                            } else{
								if (opc==10){ //colocamos los calculos para el total a pagar del servicio
				          cout << "A elegido la opcion de Repuesto " << endl;
	                   	  cout << "Coloque la cantidad de repuestos desea transportar" << endl;
		                  cin >>doc;
		                  cout << "ingrese el largo del repuesto" << endl;
		                  cin >> distancia;
		                  cout << "ingrese el ancho del repuesto" << endl;
		                  cin >>ancho;
		                  cout << "ingrese la altura del repuesto" << endl;
		                  cin >>alto;
		                  Peso_volumetrico = (largo*ancho*alto)/2272;
		                  cout << " La cantidad total por el servicio es de : Q " << peso_volumetrico << endl;
		                  
		                                } else{
								if (opc==11){ //colocamos los calculos para el total a pagar del servicio
				          cout << "A elegido la opcion de Electronica " << endl;
	                   	  cout << "Coloque la cantidad de electrodomesticos desea transportar" << endl;
		                  cin >>doc;
		                  cout << "ingrese el largo del electrodomestico" << endl;
		                  cin >> distancia;
		                  cout << "ingrese el ancho del electrodomestico" << endl;
		                  cin >>ancho;
		                  cout << "ingrese la altura del electrodomestico" << endl;
		                  cin >>alto;
		                  Peso_volumetrico = (largo*ancho*alto)/2272;
		                  cout << " La cantidad total por el servicio es de : Q " << peso_volumetrico << endl;
		                  
		                                    }
		                                }
		                            }
		                       }
							}
		               } 
					}
				}
			}
		}
	}
	return 0;
}