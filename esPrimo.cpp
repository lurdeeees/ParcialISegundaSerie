#include<iostream>
#include<cstdlib>

using namespace std;

int esPrimo(int num){ //en este programa se conoce si el numero ingresado es primo o no
	 //declarando variables de tipo entero
	//int num;
	cout << "Lourdes Santos || Parcial 1 || Segunda serie"<< endl;
	cout<<"Ingresar numero entero para saber si es primo o no \n";
	cout<<"Numero entero: ";
	cin>>num; 
	if(num == 1 or num == 0 or num < 0){ // en este ciclo if tiene varios parametros declarados utilizando operadores logicos, si num == 1 usando el operadorlogico or evaluza tambien si numero sea igual
	// a cero o num menor a 0 pueda entrar al ciclo como primera respuesta es que sea un numero primo.
	cout<<"No es un numero primo\n";
	}
		else if(num==2 or num==3){ //Si no se cumple con la condicion de arriba, para a tener parametros evaluando entre los valores 2 y 3 si cumple son numero primos
		cout<<"Es un numero primo\n";
		return 0;
		}
	else {
		for(int i=2;i<num;i++){
			if(num%i == 0){
			cout<<"No es un numero primo\n";
			return 0;
			}
		}
	}
	/*if (num%1 == 0 and num%num == 0)
	{
		cout<<"Es un numero primo\n";
	}
	*/
	system("PAUSE");
	system("cls");
	return 0;
	}

int main(){
	int num;
	esPrimo(num);
	
	
}