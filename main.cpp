#include <cstdlib>
#include <iostream>

/* Trabajp Practico N1 */

using namespace std;

//Uso de Varibales

int main(int argc, char *argv[])
{
	int A;
	int B;
	double RealA;
	double RealB;
	double Real;
	char Caracter;
	string nombre;
	bool estado;
	
	A = 10;
	B = 25;
		
    cout<<"La suma de enteros es "<<A + B<<endl;
    
    RealA = 30;
    RealB = 5.5;
    Real = RealA / RealB;
	cout<<"La division de reales es "<< Real <<endl;
	
	nombre = "Chambi";
	cout<<"La cadena de caraceteres es "<< nombre <<endl;
	
	Caracter = 'B';
	if (Caracter == 'B') {
		cout<<"El uso de caracter es: "<<Caracter<<endl;
	}
	
	estado = true;
	if (estado){
		cout<<"El uso de bool: Verdadero"<<endl;
	}
     
}
