#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      double num1, num2;
      cout << "Digite o valor para ser inserido na primeira vari�vel: " << endl;
      cin >> num1;
      cout << "Digite o valor para ser inserido na segunda vari�vel: " << endl;
      cin >> num2;
      num1 = num1 + 20;
      num2 = num2 + 10;
      cout << "---------------------------------------------------------------------" << endl;
      cout << "A primeria vari�vel agora vai valer (valor da primeria vari�vel + 20)" << endl;
      cout << "A segunda vari�vel agora vai valer (valor da segunda vari�vel + 10)" << endl;
      cout << "---------------------------------------------------------------------" << endl;
      cout << "A primeira vari�vel agora vale: " << num1 << "." << endl;
      cout << "A segunda vari�vel agora vale: " << num2 << "." << endl;
      system("pause");
	 return 0;
}

