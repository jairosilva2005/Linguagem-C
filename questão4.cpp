#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      double num01, num02;
	  cout << "Insira um n�mero: " << endl;
	  cin >> num01;
	  cout <<"Insira outro n�mero: " << endl;
	  cin >> num02;
	  
	  if (num01 == num02) {
	  	cout << "Os valores inseridos s�o iguais!" << endl;
	  } else if (num01 != num02) {
	  	cout << "Os valores inseridos s�o diferentes!" << endl;
	  	if (num01 > num02) {
	  		cout << num01 << " � maior que " << num02 << endl;
	  		cout << num02 << " � menor que " << num01 << endl;
		  } 
		else if (num02 > num01) {
			cout << num02 << " � maior que " << num01 << endl;
	  		cout << num01 << " � menor que " << num02 << endl;
		}
}
 return 0;
}

