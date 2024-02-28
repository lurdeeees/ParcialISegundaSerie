#include <iostream>
using namespace std;

float a = 0; //En esta sección se utilizó variables de tipo float por que permite representar un numero positivo o negativo con decimales. 
float b = 0;
float resultado = 0; 
int suma ();
int resta ();
int multiplicacion ();
int division ();
//Se declaran las variables a utilizar de tipo entero. 

int main (){
	suma(); //Se manda a llamar las funciones para que puedan ser ejecutadas en el menu principal
	resta ();
	multiplicacion();
	division();
	return 0; //se utiliza un return ya que es un funcion no vacia, que regresa parametros
	
}

int suma (){
	cout << "Parcial 1 || Lourdes Santos"<< endl;
	cout << "SUMA"<< endl;
	cout << "Ingrese el primer valor "<< endl; //Se pide el primer valor al usuario 
	cin >> a; //captura el valor ingresado y se almacena en la variable declarada como valor1;
	cout << "Ingrese el segundo valor" << endl; //Se pide el segundo valor al usuario
	cin >> b;//captura el valor ingresado y se almacena en la variable declarada como valor2;
	resultado = (a+ b);//Realiza la operacion indicada con los valores que se han almacenado en valor1 y valor2
	cout << "La suma es: "<< resultado << endl; //Se da el resultado de la operacion, concatenando la varibales resultado.
}
int resta (){
	cout << "RESTA"<< endl;
	cout << "Ingrese el primer valor "<< endl;//Se pide el primer valor al usuario 
	cin >> a;//captura el valor ingresado y se almacena en la variable declarada como valor1;
	cout << "Ingrese el segundo valor" << endl;//Se pide el segundo valor al usuario
	cin >> b;//captura el valor ingresado y se almacena en la variable declarada como valor2;
	resultado = (a - b); //Realiza la operacion indicada con los valores que se han almacenado en valor1 y valor2
	cout << "La resta es: "<< resultado << endl; //Se da el resultado de la operacion, concatenando la varibales resultado.
}
int multiplicacion (){
	cout << "MULTIPLICACION"<< endl;
	cout << "Ingrese el primer valor "<< endl;//Se pide el primer valor al usuario 
	cin >> a;//captura el valor ingresado y se almacena en la variable declarada como valor1;
	cout << "Ingrese el segundo valor" << endl;//Se pide el segundo valor al usuario
	cin >> b;//captura el valor ingresado y se almacena en la variable declarada como valor2;
	resultado = (a* b);//Realiza la operacion indicada con los valores que se han almacenado en valor1 y valor2
	cout << "La multiplicacion es: "<< resultado << endl;//Se da el resultado de la operacion, concatenando la varibales resultado.
}
int division (){
	cout << "DIVISION"<< endl;
	cout << "Ingrese el primer valor "<< endl;//Se pide el primer valor al usuario 
	cin >> a;//captura el valor ingresado y se almacena en la variable declarada como valor1;
	cout << "Ingrese el segundo valor" << endl;//Se pide el segundo valor al usuario
	cin >> b;//captura el valor ingresado y se almacena en la variable declarada como valor2;
	resultado = (a / b);//Realiza la operacion indicada con los valores que se han almacenado en valor1 y valor2
	cout << "La division es: "<< resultado << endl;//Se da el resultado de la operacion, concatenando la varibales resultado.
}