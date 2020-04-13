#include <iostream>
#include <math.h>
using namespace std;
int main() {
	//Ejercicio 1
	float edad;
	float telefono;
	char direccion[100];
	char nombre[30];
	string hobby;
	cout << "Ingresa tu Nombre Completo: "; cin.getline(nombre,sizeof(nombre));
	cout << "Ingresa tu direccion: "; cin.getline(direccion,sizeof(direccion));
	cout << "Ingresa tu edad: "; cin >> edad;
	cout << "Ingresa tu telefono: "; cin >> telefono;
	cout << "Ingresa tu hobby: ";; cin >> hobby;
	
	//Ejercicio 2 
	float a, b;
	cout << "Ingresa dos numeros:\n "; 
	cout << "Primer numero: ";  cin >> a;
	cout << "Segundo numero: ";  cin>> b;
	float suma, resta, multiplicacion, division, raiz;
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a / b;
	raiz = pow(a, b);
	cout << "La suma de los numero es: " << suma << endl;
	cout << "La multiplicacion de los numeros es: " << multiplicacion << endl;
	cout << "La resta de los numeros es: " << resta << endl;
	cout << "La division de los numeros es: " << division << endl;
	cout << "La raiz de los numeros es: " << raiz << endl;

	//Ejercicio 3
	double ladocuadrado, basetriangulo, alturatriangulo, radio;
	cout << "Ingresa el lado del cuadrado: "; cin >> ladocuadrado;
	cout << "Ingresa la base del triangulo: "; cin >> basetriangulo;
	cout << "Ingresa la altura del triangulo: "; cin >> alturatriangulo;
	cout << "Ingresa el radio del circulo: "; cin >> radio;
	float pi = 3.14;
	double areac, areacua, areatria;
	areac = pow(radio, 2) * pi;
	areacua = ladocuadrado * ladocuadrado;
	areatria = (basetriangulo * alturatriangulo) / 2;
	cout << "El area del cuadrado es: " << areacua << endl;
	cout << "El area del triangulo es : " << areatria << endl;
	cout << "El area del circulo es: " << areac << endl;


	return 0;
}