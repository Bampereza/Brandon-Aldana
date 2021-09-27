#include<iostream> //Brandon Isaias Ampérez Aldana 0909 - 21 - 4628
using namespace std;


//Colo camos las variables
int main() {
	int opcion;
	float cantidad;
	float cantidad2;
	float div;
	float dollar;
	dollar = 650;
	float quetzal;
	quetzal = 5000;
	string ingresado;
	string moneda;
	int moneda1;
	string moneda2;
	string p;
	string pinregistrado;
	string pin_registrado;
	float resta;
	cout << "Hola Bienvenido al programa de transacciones BD" << endl;
	// se registra el pin de desbloqueo
	pin_registrado = "2021";
	do {
		cout << "ingrese su pin:" << endl;
		cin >> ingresado;
		if (ingresado!=pin_registrado) {
			cout << "Pin incorrecto!" << endl;
		}
	} while (ingresado!=pin_registrado);
	cout << "Hola Brandon Amperez 0909 - 21 - 4628" << endl;
	// colocamos opciones para retirar dinero
	cout << "\n1 Elija 1 si desea retirar en quetzales" << endl;
	cout << "\n2 Elija 2 si desea retirar en dolares" << endl;
	cin >> opcion;
	if (opcion==1) {
		cout << " Ingrese la cantidad de quetzales que desee retirar " << endl;
		cin >> cantidad;
		resta = quetzal-cantidad;
		cout << "Su saldo actual es de: Q " << resta << endl;
	
	} else {
		if (opcion==2) {
			cout << "Ingrese la cantidad de dolares que desee retirar " << endl;
			cin >> cantidad2;
			div = dollar-cantidad2;
			cout << "Su saldo en dolares actual es de: " << div << endl;
		}
	}
	return 0;
}