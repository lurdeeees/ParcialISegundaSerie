#include <iostream>
#include <cmath>

using namespace std;

int numvalor(){
	
	int n, resultado;
	cout<<"Inciso 4 || Lourdes Santos Parcial"<<endl;
	cout<<"Ingresar un valor: "<< endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		resultado=resultado+i;
	}
	
	cout<<"la suma de numeros de 1 hasta "<<n<<" es: "<<resultado<<endl;
	
	return 0;
}
int main (){
	numvalor();
	return 0;
}