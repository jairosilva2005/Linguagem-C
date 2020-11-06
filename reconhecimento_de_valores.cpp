#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      double num01, num02;
	  cout << "Insira um número: " << endl;
	  cin >> num01;
	  cout <<"Insira outro número: " << endl;
	  cin >> num02;
	  
	  if (num01 == num02) {
	  	cout << "Os valores inseridos são iguais!" << endl;
	  } else if (num01 != num02) {
	  	cout << "Os valores inseridos são diferentes!" << endl;
	  	if (num01 > num02) {
	  		cout << num01 << " é maior que " << num02 << endl;
	  		cout << num02 << " é menor que " << num01 << endl;
		  } 
		else if (num02 > num01) {
			cout << num02 << " é maior que " << num01 << endl;
	  		cout << num01 << " é menor que " << num02 << endl;
		}
}
 return 0;
}

