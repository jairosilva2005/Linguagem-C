#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      double base, lado1, lado2;
      cout << "Digite a base do tri�ngulo: " << endl;
      cin >> base;
      cout << "Digite o lado A do tri�ngulo: " << endl;
      cin >> lado1;
      cout << "Digite o lado B do tri�ngulo: " << endl;
      cin >> lado2;
      
      if (base == lado1 && lado1 == lado2 && lado2 == base) {
      	cout << "Tipo de tri�ngulo: " << endl;
      	cout << "Tri�ngulo Equil�tero" << endl;
	  } 
	  
	  else if ( base != lado1 && base != lado2 && lado1 == lado2) {
	  	cout << "Tipo de tri�ngulo: " << endl;
	  	cout << "Tri�ngulo Is�sceles" << endl;
	  }
	  
	  else if (base != lado1 && base != lado2) {
	  	cout << "Tipo de tri�ngulo: " << endl;
	  	cout << "Tri�ngulo Ret�ngulo" << endl;
	  }
 system("pause");
 return 0;
}

