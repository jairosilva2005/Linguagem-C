#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      int numero;
      cout << "Digite um n�mero: " << endl;
      cin >> numero;
      
      if (numero == 35) {
      	cout << "O valor inserido � igual �: 35!" << endl;
	  } else if (numero < 35) {
	  	cout << "N�mero menor que 35!" << endl;
	  } else if (numero > 35) {
	  	cout << "N�mero maior que 35!" << endl;
	  }

 return 0;
}

