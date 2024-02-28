#include <iostream>
#include <cmath>
#include <stdio.h>   //Se declaran las librerias necesarias para el uso correcto del proyecto
using namespace std;


int raizcuadrada(){
	float n, res;
	cout<<"Parcial 1 || Raiz Cuadrada || Lourdes Santos"<<endl;
	cout<<"Ingresar un valor: ";
	cin>>n; //Captura el valor de la variable
	res=sqrt(n); //Es la operacion para realizar la raiz cuadrada 
	if(n<0){ //en el ciclo if se realiza la conicion si n<0
		cout<<"El numero que usted ingreso no es correcto ya que es un numero negativo no tiene raiz"<<endl;
	}else{ //si no cumple con la conicion de arriba, se recurre a esta opcion.
		cout<<"La raiz cuadrada de "<<n<<" es: "<<res<<endl;	
	}
	return 0; //re retorna parametro
}
int main (){ // se coloca un return,  si fuera void (vacia) main no se coloca return
	
	raizcuadrada();//Se mana a llamar la funcion raizcuadrada en el menu principal
	return 0;
}