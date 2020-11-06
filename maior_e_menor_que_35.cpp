#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      int numero;
      cout << "Digite um número: " << endl;
      cin >> numero;
      
      if (numero == 35) {
      	cout << "O valor inserido é igual á: 35!" << endl;
	  } else if (numero < 35) {
	  	cout << "Número menor que 35!" << endl;
	  } else if (numero > 35) {
	  	cout << "Número maior que 35!" << endl;
	  }

 return 0;
}

