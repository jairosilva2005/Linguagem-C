#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      double base, lado1, lado2;
      cout << "Digite a base do triângulo: " << endl;
      cin >> base;
      cout << "Digite o lado A do triângulo: " << endl;
      cin >> lado1;
      cout << "Digite o lado B do triângulo: " << endl;
      cin >> lado2;
      
      if (base == lado1 && lado1 == lado2 && lado2 == base) {
      	cout << "Tipo de triângulo: " << endl;
      	cout << "Triângulo Equilátero" << endl;
	  } 
	  
	  else if ( base != lado1 && base != lado2 && lado1 == lado2) {
	  	cout << "Tipo de triângulo: " << endl;
	  	cout << "Triângulo Isósceles" << endl;
	  }
	  
	  else if (base != lado1 && base != lado2) {
	  	cout << "Tipo de triângulo: " << endl;
	  	cout << "Triângulo Retângulo" << endl;
	  }
 system("pause");
 return 0;
}

